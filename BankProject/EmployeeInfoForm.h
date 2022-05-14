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
	/// Summary for EmployeeInfoForm
	/// </summary>
	public ref class EmployeeInfoForm : public System::Windows::Forms::Form
	{
	public:
		EmployeeInfoForm(Employee* e)
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
		~EmployeeInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ overtime_lbl;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ leave_lbl;
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::Label^ lbl6;
	private: System::Windows::Forms::Label^ lastname_lbl;
	private: System::Windows::Forms::Label^ lbl5;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::Label^ nCode_lbl;
	private: System::Windows::Forms::Label^ lbl4;
	private: System::Windows::Forms::Label^ bdate_lbl;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Label^ lbl8;
	private: System::Windows::Forms::Label^ lbl7;
	private: System::Windows::Forms::Label^ bSalary_lbl;
	private: System::Windows::Forms::Label^ mSalary_lbl;
	private: System::Windows::Forms::PictureBox^ back_pic;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeInfoForm::typeid));
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->overtime_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->leave_lbl = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lastname_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->nCode_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->bdate_lbl = (gcnew System::Windows::Forms::Label());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->bSalary_lbl = (gcnew System::Windows::Forms::Label());
			this->mSalary_lbl = (gcnew System::Windows::Forms::Label());
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			this->panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::White;
			this->lbl1->Location = System::Drawing::Point(28, 33);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(63, 28);
			this->lbl1->TabIndex = 12;
			this->lbl1->Text = L"name";
			// 
			// overtime_lbl
			// 
			this->overtime_lbl->AutoSize = true;
			this->overtime_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overtime_lbl->ForeColor = System::Drawing::Color::Black;
			this->overtime_lbl->Location = System::Drawing::Point(191, 322);
			this->overtime_lbl->Name = L"overtime_lbl";
			this->overtime_lbl->Size = System::Drawing::Size(27, 31);
			this->overtime_lbl->TabIndex = 23;
			this->overtime_lbl->Text = L"5";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->ForeColor = System::Drawing::Color::White;
			this->lbl2->Location = System::Drawing::Point(28, 91);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(79, 23);
			this->lbl2->TabIndex = 13;
			this->lbl2->Text = L"lastname";
			// 
			// leave_lbl
			// 
			this->leave_lbl->AutoSize = true;
			this->leave_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leave_lbl->ForeColor = System::Drawing::Color::Black;
			this->leave_lbl->Location = System::Drawing::Point(191, 259);
			this->leave_lbl->Name = L"leave_lbl";
			this->leave_lbl->Size = System::Drawing::Size(27, 31);
			this->leave_lbl->TabIndex = 22;
			this->leave_lbl->Text = L"2";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_lbl->ForeColor = System::Drawing::Color::Black;
			this->name_lbl->Location = System::Drawing::Point(191, 30);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(76, 31);
			this->name_lbl->TabIndex = 14;
			this->name_lbl->Text = L"Name";
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl6->ForeColor = System::Drawing::Color::White;
			this->lbl6->Location = System::Drawing::Point(28, 330);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(126, 23);
			this->lbl6->TabIndex = 21;
			this->lbl6->Text = L"overtime hours";
			// 
			// lastname_lbl
			// 
			this->lastname_lbl->AutoSize = true;
			this->lastname_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname_lbl->ForeColor = System::Drawing::Color::Black;
			this->lastname_lbl->Location = System::Drawing::Point(191, 83);
			this->lastname_lbl->Name = L"lastname_lbl";
			this->lastname_lbl->Size = System::Drawing::Size(112, 31);
			this->lastname_lbl->TabIndex = 15;
			this->lastname_lbl->Text = L"Lastname";
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl5->ForeColor = System::Drawing::Color::White;
			this->lbl5->Location = System::Drawing::Point(28, 267);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(98, 23);
			this->lbl5->TabIndex = 20;
			this->lbl5->Text = L"leave hours";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->ForeColor = System::Drawing::Color::White;
			this->lbl3->Location = System::Drawing::Point(28, 147);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(74, 23);
			this->lbl3->TabIndex = 16;
			this->lbl3->Text = L"birthday";
			// 
			// nCode_lbl
			// 
			this->nCode_lbl->AutoSize = true;
			this->nCode_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nCode_lbl->ForeColor = System::Drawing::Color::Black;
			this->nCode_lbl->Location = System::Drawing::Point(191, 197);
			this->nCode_lbl->Name = L"nCode_lbl";
			this->nCode_lbl->Size = System::Drawing::Size(126, 31);
			this->nCode_lbl->TabIndex = 19;
			this->nCode_lbl->Text = L"123456789";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl4->ForeColor = System::Drawing::Color::White;
			this->lbl4->Location = System::Drawing::Point(28, 205);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(114, 23);
			this->lbl4->TabIndex = 17;
			this->lbl4->Text = L"national code";
			// 
			// bdate_lbl
			// 
			this->bdate_lbl->AutoSize = true;
			this->bdate_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdate_lbl->ForeColor = System::Drawing::Color::Black;
			this->bdate_lbl->Location = System::Drawing::Point(191, 138);
			this->bdate_lbl->Name = L"bdate_lbl";
			this->bdate_lbl->Size = System::Drawing::Size(108, 31);
			this->bdate_lbl->TabIndex = 18;
			this->bdate_lbl->Text = L"1380/5/4";
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel->Controls->Add(this->lbl8);
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
			this->panel->Size = System::Drawing::Size(175, 492);
			this->panel->TabIndex = 24;
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl8->ForeColor = System::Drawing::Color::White;
			this->lbl8->Location = System::Drawing::Point(28, 442);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(123, 23);
			this->lbl8->TabIndex = 23;
			this->lbl8->Text = L"monthly salary";
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl7->ForeColor = System::Drawing::Color::White;
			this->lbl7->Location = System::Drawing::Point(28, 384);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(94, 23);
			this->lbl7->TabIndex = 22;
			this->lbl7->Text = L"base salary";
			// 
			// bSalary_lbl
			// 
			this->bSalary_lbl->AutoSize = true;
			this->bSalary_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSalary_lbl->ForeColor = System::Drawing::Color::Black;
			this->bSalary_lbl->Location = System::Drawing::Point(191, 376);
			this->bSalary_lbl->Name = L"bSalary_lbl";
			this->bSalary_lbl->Size = System::Drawing::Size(27, 31);
			this->bSalary_lbl->TabIndex = 25;
			this->bSalary_lbl->Text = L"5";
			// 
			// mSalary_lbl
			// 
			this->mSalary_lbl->AutoSize = true;
			this->mSalary_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mSalary_lbl->ForeColor = System::Drawing::Color::Black;
			this->mSalary_lbl->Location = System::Drawing::Point(191, 434);
			this->mSalary_lbl->Name = L"mSalary_lbl";
			this->mSalary_lbl->Size = System::Drawing::Size(27, 31);
			this->mSalary_lbl->TabIndex = 26;
			this->mSalary_lbl->Text = L"5";
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(347, 3);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(34, 41);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 27;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &EmployeeInfoForm::back_pic_Click);
			// 
			// EmployeeInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(386, 492);
			this->Controls->Add(this->back_pic);
			this->Controls->Add(this->mSalary_lbl);
			this->Controls->Add(this->bSalary_lbl);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->overtime_lbl);
			this->Controls->Add(this->leave_lbl);
			this->Controls->Add(this->name_lbl);
			this->Controls->Add(this->lastname_lbl);
			this->Controls->Add(this->nCode_lbl);
			this->Controls->Add(this->bdate_lbl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EmployeeInfoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"21 Bank";
			this->Load += gcnew System::EventHandler(this, &EmployeeInfoForm::EmployeeInfoForm_Load);
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}

	private: System::Void EmployeeInfoForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ str = gcnew String(employee->getName().c_str());
		this->name_lbl->Text = str;
		
		str = gcnew String(employee->getLastName().c_str());
		this->lastname_lbl->Text = str;

		this->bdate_lbl->Text = employee->getbDate().getMonth() + "/" +
			employee->getbDate().getMonth() + "/" +
			employee->getbDate().getYear();

		this->nCode_lbl-> Text = employee->getNatCode().ToString();
		this->leave_lbl->Text = employee->getLeaveHours().ToString();
		this->overtime_lbl->Text = employee->getExtraHours().ToString();
		this->bSalary_lbl->Text = employee->getBaseSalary().ToString();
		this->mSalary_lbl->Text = employee->getMonthlySalary().ToString();
	}
};
}
