#pragma once
#include "Employee.h"
#include "Date.h"
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
	/// Summary for AddAccountForm
	/// </summary>
	public ref class AddAccountForm : public System::Windows::Forms::Form
	{
	public:
		AddAccountForm(Employee* e)
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
		~AddAccountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ back_pic;
	protected:


	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Label^ lbl6;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl4;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lbl5;
	private: System::Windows::Forms::TextBox^ name_txt;
	private: System::Windows::Forms::TextBox^ lastname_txt;
	private: System::Windows::Forms::TextBox^ nationalCode_txt;
	private: System::Windows::Forms::TextBox^ username_txt;
	private: System::Windows::Forms::TextBox^ password_txt;
	private: System::Windows::Forms::DateTimePicker^ timePicker;
	private: System::Windows::Forms::Button^ Add_btn;
	private: Employee* employee;
	private: System::Windows::Forms::Label^ lbl7;
	private: System::Windows::Forms::TextBox^ priBalance_txt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddAccountForm::typeid));
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->lastname_txt = (gcnew System::Windows::Forms::TextBox());
			this->nationalCode_txt = (gcnew System::Windows::Forms::TextBox());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->timePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->Add_btn = (gcnew System::Windows::Forms::Button());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->priBalance_txt = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(439, 2);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(29, 35);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 37;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &AddAccountForm::back_pic_Click);
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel->Controls->Add(this->lbl7);
			this->panel->Controls->Add(this->lbl6);
			this->panel->Controls->Add(this->lbl1);
			this->panel->Controls->Add(this->lbl4);
			this->panel->Controls->Add(this->lbl3);
			this->panel->Controls->Add(this->lbl2);
			this->panel->Controls->Add(this->lbl5);
			this->panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel->Location = System::Drawing::Point(0, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(175, 569);
			this->panel->TabIndex = 34;
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl6->ForeColor = System::Drawing::Color::White;
			this->lbl6->Location = System::Drawing::Point(27, 377);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(98, 28);
			this->lbl6->TabIndex = 21;
			this->lbl6->Text = L"password";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl1->ForeColor = System::Drawing::Color::White;
			this->lbl1->Location = System::Drawing::Point(27, 61);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(63, 28);
			this->lbl1->TabIndex = 12;
			this->lbl1->Text = L"name";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl4->ForeColor = System::Drawing::Color::White;
			this->lbl4->Location = System::Drawing::Point(27, 252);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(135, 28);
			this->lbl4->TabIndex = 17;
			this->lbl4->Text = L"national code";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl3->ForeColor = System::Drawing::Color::White;
			this->lbl3->Location = System::Drawing::Point(27, 183);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(87, 28);
			this->lbl3->TabIndex = 16;
			this->lbl3->Text = L"birthday";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl2->ForeColor = System::Drawing::Color::White;
			this->lbl2->Location = System::Drawing::Point(27, 127);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(94, 28);
			this->lbl2->TabIndex = 13;
			this->lbl2->Text = L"lastname";
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl5->ForeColor = System::Drawing::Color::White;
			this->lbl5->Location = System::Drawing::Point(27, 314);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(102, 28);
			this->lbl5->TabIndex = 20;
			this->lbl5->Text = L"username";
			// 
			// name_txt
			// 
			this->name_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->name_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold));
			this->name_txt->ForeColor = System::Drawing::Color::White;
			this->name_txt->Location = System::Drawing::Point(194, 54);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(228, 41);
			this->name_txt->TabIndex = 38;
			this->name_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lastname_txt
			// 
			this->lastname_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lastname_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lastname_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold));
			this->lastname_txt->ForeColor = System::Drawing::Color::White;
			this->lastname_txt->Location = System::Drawing::Point(194, 114);
			this->lastname_txt->Name = L"lastname_txt";
			this->lastname_txt->Size = System::Drawing::Size(228, 41);
			this->lastname_txt->TabIndex = 39;
			this->lastname_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// nationalCode_txt
			// 
			this->nationalCode_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->nationalCode_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nationalCode_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold));
			this->nationalCode_txt->ForeColor = System::Drawing::Color::White;
			this->nationalCode_txt->Location = System::Drawing::Point(194, 239);
			this->nationalCode_txt->Name = L"nationalCode_txt";
			this->nationalCode_txt->Size = System::Drawing::Size(228, 41);
			this->nationalCode_txt->TabIndex = 40;
			this->nationalCode_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// username_txt
			// 
			this->username_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->username_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->username_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold));
			this->username_txt->ForeColor = System::Drawing::Color::White;
			this->username_txt->Location = System::Drawing::Point(194, 301);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(228, 41);
			this->username_txt->TabIndex = 41;
			this->username_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// password_txt
			// 
			this->password_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->password_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold));
			this->password_txt->ForeColor = System::Drawing::Color::White;
			this->password_txt->Location = System::Drawing::Point(194, 364);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(228, 41);
			this->password_txt->TabIndex = 42;
			this->password_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// timePicker
			// 
			this->timePicker->CalendarFont = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15));
			this->timePicker->CalendarForeColor = System::Drawing::Color::Red;
			this->timePicker->CalendarMonthBackground = System::Drawing::Color::White;
			this->timePicker->CalendarTitleBackColor = System::Drawing::Color::DarkViolet;
			this->timePicker->CalendarTitleForeColor = System::Drawing::Color::LawnGreen;
			this->timePicker->CalendarTrailingForeColor = System::Drawing::Color::MidnightBlue;
			this->timePicker->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15));
			this->timePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->timePicker->Location = System::Drawing::Point(194, 173);
			this->timePicker->Name = L"timePicker";
			this->timePicker->Size = System::Drawing::Size(228, 41);
			this->timePicker->TabIndex = 44;
			// 
			// Add_btn
			// 
			this->Add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->Add_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_btn->ForeColor = System::Drawing::Color::White;
			this->Add_btn->Location = System::Drawing::Point(339, 513);
			this->Add_btn->Name = L"Add_btn";
			this->Add_btn->Size = System::Drawing::Size(117, 44);
			this->Add_btn->TabIndex = 45;
			this->Add_btn->Text = L"Add";
			this->Add_btn->UseVisualStyleBackColor = false;
			this->Add_btn->Click += gcnew System::EventHandler(this, &AddAccountForm::Add_btn_Click);
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl7->ForeColor = System::Drawing::Color::White;
			this->lbl7->Location = System::Drawing::Point(27, 435);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(105, 28);
			this->lbl7->TabIndex = 22;
			this->lbl7->Text = L"pribalance";
			// 
			// priBalance_txt
			// 
			this->priBalance_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->priBalance_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->priBalance_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold));
			this->priBalance_txt->ForeColor = System::Drawing::Color::White;
			this->priBalance_txt->Location = System::Drawing::Point(194, 428);
			this->priBalance_txt->Name = L"priBalance_txt";
			this->priBalance_txt->Size = System::Drawing::Size(228, 41);
			this->priBalance_txt->TabIndex = 46;
			this->priBalance_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddAccountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(468, 569);
			this->Controls->Add(this->priBalance_txt);
			this->Controls->Add(this->Add_btn);
			this->Controls->Add(this->timePicker);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->nationalCode_txt);
			this->Controls->Add(this->lastname_txt);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->back_pic);
			this->Controls->Add(this->panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddAccountForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void Add_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		string name = marshal_as<std::string>(this->name_txt->Text);
		string lastname = marshal_as<std::string>(this->lastname_txt->Text);
		string date = marshal_as<std::string>(this->timePicker->Text);
	//	Date bdate = Date(1,2,3);
		Date bdate = strToDate(date);
		int64_t nCode = int64_t::Parse(this->nationalCode_txt->Text);
		string user = marshal_as<std::string>(this->username_txt->Text);
		string pass = marshal_as<std::string>(this->password_txt->Text);
		int64_t pribalance = int64_t::Parse(this->priBalance_txt->Text);

		employee->addAccount(name,lastname,bdate,nCode,user,pass,pribalance);
		this->Close();
	}
};
}
