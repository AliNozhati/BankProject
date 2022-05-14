#pragma once

#include "SearchClient.h"
#include "LeaveForm.h"
#include "OvertimeForm.h"
#include "EmployeeInfoForm.h"
#include "RemoveAccountForm.h"
#include "AddAccountForm.h"
#include "ChangePassForm.h"
#include "Employee.h"
#include "Client.h"
namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeeForm
	/// </summary>
	public ref class EmployeeForm : public System::Windows::Forms::Form
	{
	public:
		EmployeeForm(Employee* e)
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
		~EmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ back_pic;
	private: System::Windows::Forms::Button^ remove_btn;


	private: System::Windows::Forms::Button^ addAcc_btn;

	private: System::Windows::Forms::Button^ myInfo_btn;
	private: System::Windows::Forms::Button^ clientInfo_btn;


	private: System::Windows::Forms::Button^ overtime_btn;

	private: System::Windows::Forms::Button^ leave_btn;

	private: System::Windows::Forms::Label^ hi_lbl;
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::Button^ support_btn;
	private: System::Windows::Forms::Button^ changePass_btn;
	private: Employee* employee = nullptr;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployeeForm::typeid));
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			this->remove_btn = (gcnew System::Windows::Forms::Button());
			this->addAcc_btn = (gcnew System::Windows::Forms::Button());
			this->myInfo_btn = (gcnew System::Windows::Forms::Button());
			this->clientInfo_btn = (gcnew System::Windows::Forms::Button());
			this->overtime_btn = (gcnew System::Windows::Forms::Button());
			this->leave_btn = (gcnew System::Windows::Forms::Button());
			this->hi_lbl = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->support_btn = (gcnew System::Windows::Forms::Button());
			this->changePass_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(393, 0);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(29, 48);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 17;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &EmployeeForm::back_pic_Click);
			// 
			// remove_btn
			// 
			this->remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->remove_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove_btn->ForeColor = System::Drawing::Color::White;
			this->remove_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"remove_btn.Image")));
			this->remove_btn->Location = System::Drawing::Point(217, 157);
			this->remove_btn->Name = L"remove_btn";
			this->remove_btn->Size = System::Drawing::Size(153, 130);
			this->remove_btn->TabIndex = 16;
			this->remove_btn->Text = L"Remove An Account";
			this->remove_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->remove_btn->UseVisualStyleBackColor = false;
			this->remove_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::remove_btn_Click);
			// 
			// addAcc_btn
			// 
			this->addAcc_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->addAcc_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addAcc_btn->ForeColor = System::Drawing::Color::White;
			this->addAcc_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addAcc_btn.Image")));
			this->addAcc_btn->Location = System::Drawing::Point(48, 157);
			this->addAcc_btn->Name = L"addAcc_btn";
			this->addAcc_btn->Size = System::Drawing::Size(153, 130);
			this->addAcc_btn->TabIndex = 15;
			this->addAcc_btn->Text = L"Add An Account";
			this->addAcc_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->addAcc_btn->UseVisualStyleBackColor = false;
			this->addAcc_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::addAcc_btn_Click);
			// 
			// myInfo_btn
			// 
			this->myInfo_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->myInfo_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->myInfo_btn->ForeColor = System::Drawing::Color::White;
			this->myInfo_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myInfo_btn.Image")));
			this->myInfo_btn->Location = System::Drawing::Point(217, 302);
			this->myInfo_btn->Name = L"myInfo_btn";
			this->myInfo_btn->Size = System::Drawing::Size(153, 130);
			this->myInfo_btn->TabIndex = 14;
			this->myInfo_btn->Text = L"My Information";
			this->myInfo_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->myInfo_btn->UseVisualStyleBackColor = false;
			this->myInfo_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::myInfo_btn_Click);
			// 
			// clientInfo_btn
			// 
			this->clientInfo_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->clientInfo_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientInfo_btn->ForeColor = System::Drawing::Color::White;
			this->clientInfo_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientInfo_btn.Image")));
			this->clientInfo_btn->Location = System::Drawing::Point(48, 302);
			this->clientInfo_btn->Name = L"clientInfo_btn";
			this->clientInfo_btn->Size = System::Drawing::Size(153, 130);
			this->clientInfo_btn->TabIndex = 13;
			this->clientInfo_btn->Text = L"Client Information";
			this->clientInfo_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->clientInfo_btn->UseVisualStyleBackColor = false;
			this->clientInfo_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::clientInfo_btn_Click);
			// 
			// overtime_btn
			// 
			this->overtime_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->overtime_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overtime_btn->ForeColor = System::Drawing::Color::White;
			this->overtime_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"overtime_btn.Image")));
			this->overtime_btn->Location = System::Drawing::Point(217, 451);
			this->overtime_btn->Name = L"overtime_btn";
			this->overtime_btn->Size = System::Drawing::Size(153, 130);
			this->overtime_btn->TabIndex = 12;
			this->overtime_btn->Text = L"Overtime";
			this->overtime_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->overtime_btn->UseVisualStyleBackColor = false;
			this->overtime_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::overtime_btn_Click);
			// 
			// leave_btn
			// 
			this->leave_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->leave_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leave_btn->ForeColor = System::Drawing::Color::White;
			this->leave_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leave_btn.Image")));
			this->leave_btn->Location = System::Drawing::Point(48, 451);
			this->leave_btn->Name = L"leave_btn";
			this->leave_btn->Size = System::Drawing::Size(153, 130);
			this->leave_btn->TabIndex = 11;
			this->leave_btn->Text = L"Leave";
			this->leave_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->leave_btn->UseVisualStyleBackColor = false;
			this->leave_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::leave_btn_Click);
			// 
			// hi_lbl
			// 
			this->hi_lbl->AutoSize = true;
			this->hi_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->hi_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 20, System::Drawing::FontStyle::Bold));
			this->hi_lbl->ForeColor = System::Drawing::Color::White;
			this->hi_lbl->Location = System::Drawing::Point(45, 64);
			this->hi_lbl->Name = L"hi_lbl";
			this->hi_lbl->Size = System::Drawing::Size(54, 46);
			this->hi_lbl->TabIndex = 10;
			this->hi_lbl->Text = L"Hi";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 20, System::Drawing::FontStyle::Bold));
			this->name_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->name_lbl->Location = System::Drawing::Point(101, 64);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(269, 46);
			this->name_lbl->TabIndex = 9;
			this->name_lbl->Text = L"Name Lastname";
			// 
			// support_btn
			// 
			this->support_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->support_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->support_btn->ForeColor = System::Drawing::Color::White;
			this->support_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"support_btn.Image")));
			this->support_btn->Location = System::Drawing::Point(217, 597);
			this->support_btn->Name = L"support_btn";
			this->support_btn->Size = System::Drawing::Size(153, 130);
			this->support_btn->TabIndex = 19;
			this->support_btn->Text = L"Support";
			this->support_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->support_btn->UseVisualStyleBackColor = false;
			this->support_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::support_btn_Click);
			// 
			// changePass_btn
			// 
			this->changePass_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->changePass_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changePass_btn->ForeColor = System::Drawing::Color::White;
			this->changePass_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"changePass_btn.Image")));
			this->changePass_btn->Location = System::Drawing::Point(48, 597);
			this->changePass_btn->Name = L"changePass_btn";
			this->changePass_btn->Size = System::Drawing::Size(153, 130);
			this->changePass_btn->TabIndex = 18;
			this->changePass_btn->Text = L"Change Password";
			this->changePass_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->changePass_btn->UseVisualStyleBackColor = false;
			this->changePass_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::changePass_btn_Click);
			// 
			// EmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(422, 754);
			this->Controls->Add(this->support_btn);
			this->Controls->Add(this->changePass_btn);
			this->Controls->Add(this->back_pic);
			this->Controls->Add(this->remove_btn);
			this->Controls->Add(this->addAcc_btn);
			this->Controls->Add(this->myInfo_btn);
			this->Controls->Add(this->clientInfo_btn);
			this->Controls->Add(this->overtime_btn);
			this->Controls->Add(this->leave_btn);
			this->Controls->Add(this->hi_lbl);
			this->Controls->Add(this->name_lbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EmployeeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			this->Load += gcnew System::EventHandler(this, &EmployeeForm::EmployeeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void clientInfo_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{

		SearchClient^ form = gcnew SearchClient(employee);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void leave_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LeaveForm^ form = gcnew LeaveForm(employee);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void overtime_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OvertimeForm^ form = gcnew OvertimeForm(employee);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void myInfo_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EmployeeInfoForm^ form = gcnew EmployeeInfoForm(employee);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void remove_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RemoveAccountForm^ form = gcnew RemoveAccountForm(employee);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void addAcc_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddAccountForm^ form = gcnew AddAccountForm(employee);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void support_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Call with this number : \n 021-212212", "help and support");
	}
	private: System::Void changePass_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ChangePassForm^ form = gcnew ChangePassForm(employee);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}

	private: System::Void EmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ str = gcnew String((this->employee->getName() + " " + this->employee->getLastName()).c_str());
		this->name_lbl->Text = str;
	}
};
}
