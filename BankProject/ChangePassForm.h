#pragma once
#include "Client.h"
#include "Employee.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;

namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChangePassForm
	/// </summary>
	public ref class ChangePassForm : public System::Windows::Forms::Form
	{
	public:
		ChangePassForm(Client* c)
		{
			InitializeComponent();
			client = c;
			//
			//TODO: Add the constructor code here
			//
		}
		ChangePassForm(Employee* e)
		{
			InitializeComponent();
			employee = e;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChangePassForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ change_btn;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::TextBox^ newPass_txt;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ currentPass_txt;

	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::TextBox^ repNewPass_txt;


	private: Client* client = nullptr;
	private: Employee* employee = nullptr;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangePassForm::typeid));
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->change_btn = (gcnew System::Windows::Forms::Button());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->newPass_txt = (gcnew System::Windows::Forms::TextBox());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->currentPass_txt = (gcnew System::Windows::Forms::TextBox());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->repNewPass_txt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cancel_btn
			// 
			this->cancel_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::Color::White;
			this->cancel_btn->Location = System::Drawing::Point(259, 247);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(156, 55);
			this->cancel_btn->TabIndex = 18;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &ChangePassForm::cancel_btn_Click);
			// 
			// change_btn
			// 
			this->change_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->change_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->change_btn->ForeColor = System::Drawing::Color::White;
			this->change_btn->Location = System::Drawing::Point(85, 247);
			this->change_btn->Name = L"change_btn";
			this->change_btn->Size = System::Drawing::Size(156, 55);
			this->change_btn->TabIndex = 17;
			this->change_btn->Text = L"Change";
			this->change_btn->UseVisualStyleBackColor = false;
			this->change_btn->Click += gcnew System::EventHandler(this, &ChangePassForm::change_btn_Click);
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl2->Location = System::Drawing::Point(12, 109);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(162, 28);
			this->lbl2->TabIndex = 16;
			this->lbl2->Text = L"New password : ";
			// 
			// newPass_txt
			// 
			this->newPass_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->newPass_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->newPass_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newPass_txt->ForeColor = System::Drawing::Color::White;
			this->newPass_txt->Location = System::Drawing::Point(251, 102);
			this->newPass_txt->Name = L"newPass_txt";
			this->newPass_txt->Size = System::Drawing::Size(224, 41);
			this->newPass_txt->TabIndex = 15;
			this->newPass_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Location = System::Drawing::Point(12, 47);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(189, 28);
			this->lbl1->TabIndex = 14;
			this->lbl1->Text = L"Current password : ";
			// 
			// currentPass_txt
			// 
			this->currentPass_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->currentPass_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->currentPass_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentPass_txt->ForeColor = System::Drawing::Color::White;
			this->currentPass_txt->Location = System::Drawing::Point(251, 40);
			this->currentPass_txt->Name = L"currentPass_txt";
			this->currentPass_txt->Size = System::Drawing::Size(224, 41);
			this->currentPass_txt->TabIndex = 13;
			this->currentPass_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl3->Location = System::Drawing::Point(12, 172);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(233, 28);
			this->lbl3->TabIndex = 20;
			this->lbl3->Text = L"Repeate new password :";
			// 
			// repNewPass_txt
			// 
			this->repNewPass_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->repNewPass_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->repNewPass_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->repNewPass_txt->ForeColor = System::Drawing::Color::White;
			this->repNewPass_txt->Location = System::Drawing::Point(251, 165);
			this->repNewPass_txt->Name = L"repNewPass_txt";
			this->repNewPass_txt->Size = System::Drawing::Size(224, 41);
			this->repNewPass_txt->TabIndex = 19;
			this->repNewPass_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ChangePassForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(487, 323);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->repNewPass_txt);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->change_btn);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->newPass_txt);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->currentPass_txt);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ChangePassForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void change_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		string currentPass = marshal_as <std::string>(this->currentPass_txt->Text);
		string newPass = marshal_as <std::string>(this->newPass_txt->Text);
		string repNewPass = marshal_as <std::string>(this->repNewPass_txt->Text);

		if(newPass == repNewPass)
		{ 
			if (employee != nullptr)
			{
				employee->changePass(currentPass, newPass);
			}
			else if (client != nullptr)
			{
				client->changePass(currentPass, newPass);
			}
			MessageBox::Show("Password changed.");
			this->Close();
		}
		else
			MessageBox::Show("New password and repeat new password must be the same.");
	}

};
}
