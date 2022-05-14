#pragma once
#include "Employee.h"
namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RemoveAccountForm
	/// </summary>
	public ref class RemoveAccountForm : public System::Windows::Forms::Form
	{
	public:
		RemoveAccountForm(Employee* e)
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
		~RemoveAccountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ remove_btn;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ accountNumber_txt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveAccountForm::typeid));
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->remove_btn = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->accountNumber_txt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cancel_btn
			// 
			this->cancel_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::Color::White;
			this->cancel_btn->Location = System::Drawing::Point(258, 145);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(156, 55);
			this->cancel_btn->TabIndex = 41;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &RemoveAccountForm::cancel_btn_Click);
			// 
			// remove_btn
			// 
			this->remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->remove_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove_btn->ForeColor = System::Drawing::Color::White;
			this->remove_btn->Location = System::Drawing::Point(84, 145);
			this->remove_btn->Name = L"remove_btn";
			this->remove_btn->Size = System::Drawing::Size(156, 55);
			this->remove_btn->TabIndex = 40;
			this->remove_btn->Text = L"Remove";
			this->remove_btn->UseVisualStyleBackColor = false;
			this->remove_btn->Click += gcnew System::EventHandler(this, &RemoveAccountForm::remove_btn_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Location = System::Drawing::Point(16, 62);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(231, 28);
			this->lbl1->TabIndex = 39;
			this->lbl1->Text = L"Enter account number : ";
			// 
			// accountNumber_txt
			// 
			this->accountNumber_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->accountNumber_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->accountNumber_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountNumber_txt->ForeColor = System::Drawing::Color::White;
			this->accountNumber_txt->Location = System::Drawing::Point(253, 55);
			this->accountNumber_txt->Name = L"accountNumber_txt";
			this->accountNumber_txt->Size = System::Drawing::Size(218, 41);
			this->accountNumber_txt->TabIndex = 38;
			this->accountNumber_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RemoveAccountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(487, 254);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->remove_btn);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->accountNumber_txt);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RemoveAccountForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void remove_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int64_t accountNumber = int64_t::Parse(this->accountNumber_txt->Text);
		employee->removeAccount(accountNumber);
		MessageBox::Show("Account removed.");
		this->Close();
	}
	private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
};
}
