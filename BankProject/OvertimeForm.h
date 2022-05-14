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
	/// Summary for OvertimeForm
	/// </summary>
	public ref class OvertimeForm : public System::Windows::Forms::Form
	{
	public:
		OvertimeForm(Employee* e)
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
		~OvertimeForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ request_btn;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ hour_txt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OvertimeForm::typeid));
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->request_btn = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->hour_txt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cancel_btn
			// 
			this->cancel_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::Color::White;
			this->cancel_btn->Location = System::Drawing::Point(248, 140);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(156, 55);
			this->cancel_btn->TabIndex = 28;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &OvertimeForm::cancel_btn_Click);
			// 
			// request_btn
			// 
			this->request_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->request_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->request_btn->ForeColor = System::Drawing::Color::White;
			this->request_btn->Location = System::Drawing::Point(74, 140);
			this->request_btn->Name = L"request_btn";
			this->request_btn->Size = System::Drawing::Size(156, 55);
			this->request_btn->TabIndex = 27;
			this->request_btn->Text = L"Request";
			this->request_btn->UseVisualStyleBackColor = false;
			this->request_btn->Click += gcnew System::EventHandler(this, &OvertimeForm::request_btn_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Location = System::Drawing::Point(96, 44);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(221, 28);
			this->lbl1->TabIndex = 26;
			this->lbl1->Text = L"Enter overtime hours : ";
			// 
			// hour_txt
			// 
			this->hour_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->hour_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->hour_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hour_txt->ForeColor = System::Drawing::Color::White;
			this->hour_txt->Location = System::Drawing::Point(323, 38);
			this->hour_txt->Name = L"hour_txt";
			this->hour_txt->Size = System::Drawing::Size(72, 41);
			this->hour_txt->TabIndex = 25;
			this->hour_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// OvertimeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(487, 234);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->request_btn);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->hour_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"OvertimeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"21 Bank";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void request_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// do sth
		int extraHours = int::Parse(this->hour_txt->Text);
		employee->setExtraHours(extraHours);
		MessageBox::Show("Your request sumbited.", "overtime");
		this->Close();
	}

	private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
};
}
