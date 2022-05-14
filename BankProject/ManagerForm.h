#pragma once

#include "SearchClient.h"
#include "LeaveForm.h"
#include "OvertimeForm.h"
#include "EmployeeInfoForm.h"
#include "RemoveAccountForm.h"
#include "AddAccountForm.h"
#include "ChangePassForm.h"
#include "SeachEmployeeForm.h"
#include "DismissalEmployeeForm.h"
#include "RecruiteEmployeeForm.h"
#include "Manager.h"
#include "Client.h"

namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManagerForm
	/// </summary>
	public ref class ManagerForm : public System::Windows::Forms::Form
	{
	public:
		ManagerForm(Manager* m)
		{
			InitializeComponent();
			manager = m;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManagerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ changPass_btn;
	private: System::Windows::Forms::Button^ dismissalEmployee_btn;

	private: System::Windows::Forms::Button^ employeeInfo_btn;
	private: System::Windows::Forms::Button^ employeeRecruitment_btn;


	private: System::Windows::Forms::PictureBox^ back_pic;
	private: System::Windows::Forms::Button^ remove_btn;
	private: System::Windows::Forms::Button^ addAcc_btn;
	private: System::Windows::Forms::Button^ myInfo_btn;
	private: System::Windows::Forms::Button^ clientInfo_btn;
	private: System::Windows::Forms::Button^ overtime_btn;
	private: System::Windows::Forms::Button^ leave_btn;
	private: System::Windows::Forms::Label^ hi_lbl;
	private: System::Windows::Forms::Label^ name_lbl;
	private: Manager* manager = nullptr;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManagerForm::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->changPass_btn = (gcnew System::Windows::Forms::Button());
			this->dismissalEmployee_btn = (gcnew System::Windows::Forms::Button());
			this->employeeInfo_btn = (gcnew System::Windows::Forms::Button());
			this->employeeRecruitment_btn = (gcnew System::Windows::Forms::Button());
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			this->remove_btn = (gcnew System::Windows::Forms::Button());
			this->addAcc_btn = (gcnew System::Windows::Forms::Button());
			this->myInfo_btn = (gcnew System::Windows::Forms::Button());
			this->clientInfo_btn = (gcnew System::Windows::Forms::Button());
			this->overtime_btn = (gcnew System::Windows::Forms::Button());
			this->leave_btn = (gcnew System::Windows::Forms::Button());
			this->hi_lbl = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(286, 605);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 130);
			this->button4->TabIndex = 46;
			this->button4->Text = L"Support";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ManagerForm::button4_Click);
			// 
			// changPass_btn
			// 
			this->changPass_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->changPass_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changPass_btn->ForeColor = System::Drawing::Color::White;
			this->changPass_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"changPass_btn.Image")));
			this->changPass_btn->Location = System::Drawing::Point(118, 605);
			this->changPass_btn->Name = L"changPass_btn";
			this->changPass_btn->Size = System::Drawing::Size(153, 130);
			this->changPass_btn->TabIndex = 45;
			this->changPass_btn->Text = L"Change Password";
			this->changPass_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->changPass_btn->UseVisualStyleBackColor = false;
			this->changPass_btn->Click += gcnew System::EventHandler(this, &ManagerForm::changPass_btn_Click);
			// 
			// dismissalEmployee_btn
			// 
			this->dismissalEmployee_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->dismissalEmployee_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dismissalEmployee_btn->ForeColor = System::Drawing::Color::White;
			this->dismissalEmployee_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dismissalEmployee_btn.Image")));
			this->dismissalEmployee_btn->Location = System::Drawing::Point(371, 306);
			this->dismissalEmployee_btn->Name = L"dismissalEmployee_btn";
			this->dismissalEmployee_btn->Size = System::Drawing::Size(153, 130);
			this->dismissalEmployee_btn->TabIndex = 44;
			this->dismissalEmployee_btn->Text = L"Dismissal Employee";
			this->dismissalEmployee_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->dismissalEmployee_btn->UseVisualStyleBackColor = false;
			this->dismissalEmployee_btn->Click += gcnew System::EventHandler(this, &ManagerForm::dismissalEmployee_btn_Click);
			// 
			// employeeInfo_btn
			// 
			this->employeeInfo_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->employeeInfo_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeInfo_btn->ForeColor = System::Drawing::Color::White;
			this->employeeInfo_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"employeeInfo_btn.Image")));
			this->employeeInfo_btn->Location = System::Drawing::Point(34, 306);
			this->employeeInfo_btn->Name = L"employeeInfo_btn";
			this->employeeInfo_btn->Size = System::Drawing::Size(153, 130);
			this->employeeInfo_btn->TabIndex = 43;
			this->employeeInfo_btn->Text = L"Employee Information";
			this->employeeInfo_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->employeeInfo_btn->UseVisualStyleBackColor = false;
			this->employeeInfo_btn->Click += gcnew System::EventHandler(this, &ManagerForm::employeeInfo_btn_Click);
			// 
			// employeeRecruitment_btn
			// 
			this->employeeRecruitment_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->employeeRecruitment_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeRecruitment_btn->ForeColor = System::Drawing::Color::White;
			this->employeeRecruitment_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"employeeRecruitment_btn.Image")));
			this->employeeRecruitment_btn->Location = System::Drawing::Point(201, 306);
			this->employeeRecruitment_btn->Name = L"employeeRecruitment_btn";
			this->employeeRecruitment_btn->Size = System::Drawing::Size(153, 130);
			this->employeeRecruitment_btn->TabIndex = 42;
			this->employeeRecruitment_btn->Text = L"Employee Recruitment";
			this->employeeRecruitment_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->employeeRecruitment_btn->UseVisualStyleBackColor = false;
			this->employeeRecruitment_btn->Click += gcnew System::EventHandler(this, &ManagerForm::employeeRecruitment_btn_Click);
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(511, 12);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(29, 48);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 41;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &ManagerForm::back_pic_Click);
			// 
			// remove_btn
			// 
			this->remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->remove_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove_btn->ForeColor = System::Drawing::Color::White;
			this->remove_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"remove_btn.Image")));
			this->remove_btn->Location = System::Drawing::Point(201, 156);
			this->remove_btn->Name = L"remove_btn";
			this->remove_btn->Size = System::Drawing::Size(153, 130);
			this->remove_btn->TabIndex = 40;
			this->remove_btn->Text = L"Remove An Account";
			this->remove_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->remove_btn->UseVisualStyleBackColor = false;
			this->remove_btn->Click += gcnew System::EventHandler(this, &ManagerForm::remove_btn_Click);
			// 
			// addAcc_btn
			// 
			this->addAcc_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->addAcc_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addAcc_btn->ForeColor = System::Drawing::Color::White;
			this->addAcc_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addAcc_btn.Image")));
			this->addAcc_btn->Location = System::Drawing::Point(34, 156);
			this->addAcc_btn->Name = L"addAcc_btn";
			this->addAcc_btn->Size = System::Drawing::Size(153, 130);
			this->addAcc_btn->TabIndex = 39;
			this->addAcc_btn->Text = L"Add An Account";
			this->addAcc_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->addAcc_btn->UseVisualStyleBackColor = false;
			this->addAcc_btn->Click += gcnew System::EventHandler(this, &ManagerForm::addAcc_btn_Click);
			// 
			// myInfo_btn
			// 
			this->myInfo_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->myInfo_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->myInfo_btn->ForeColor = System::Drawing::Color::White;
			this->myInfo_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myInfo_btn.Image")));
			this->myInfo_btn->Location = System::Drawing::Point(34, 456);
			this->myInfo_btn->Name = L"myInfo_btn";
			this->myInfo_btn->Size = System::Drawing::Size(153, 130);
			this->myInfo_btn->TabIndex = 38;
			this->myInfo_btn->Text = L"My Information";
			this->myInfo_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->myInfo_btn->UseVisualStyleBackColor = false;
			this->myInfo_btn->Click += gcnew System::EventHandler(this, &ManagerForm::myInfo_btn_Click);
			// 
			// clientInfo_btn
			// 
			this->clientInfo_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->clientInfo_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientInfo_btn->ForeColor = System::Drawing::Color::White;
			this->clientInfo_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientInfo_btn.Image")));
			this->clientInfo_btn->Location = System::Drawing::Point(367, 156);
			this->clientInfo_btn->Name = L"clientInfo_btn";
			this->clientInfo_btn->Size = System::Drawing::Size(153, 130);
			this->clientInfo_btn->TabIndex = 37;
			this->clientInfo_btn->Text = L"Client Information";
			this->clientInfo_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->clientInfo_btn->UseVisualStyleBackColor = false;
			this->clientInfo_btn->Click += gcnew System::EventHandler(this, &ManagerForm::clientInfo_btn_Click);
			// 
			// overtime_btn
			// 
			this->overtime_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->overtime_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overtime_btn->ForeColor = System::Drawing::Color::White;
			this->overtime_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"overtime_btn.Image")));
			this->overtime_btn->Location = System::Drawing::Point(201, 456);
			this->overtime_btn->Name = L"overtime_btn";
			this->overtime_btn->Size = System::Drawing::Size(153, 130);
			this->overtime_btn->TabIndex = 36;
			this->overtime_btn->Text = L"Overtime";
			this->overtime_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->overtime_btn->UseVisualStyleBackColor = false;
			this->overtime_btn->Click += gcnew System::EventHandler(this, &ManagerForm::overtime_btn_Click);
			// 
			// leave_btn
			// 
			this->leave_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->leave_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leave_btn->ForeColor = System::Drawing::Color::White;
			this->leave_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leave_btn.Image")));
			this->leave_btn->Location = System::Drawing::Point(371, 456);
			this->leave_btn->Name = L"leave_btn";
			this->leave_btn->Size = System::Drawing::Size(153, 130);
			this->leave_btn->TabIndex = 35;
			this->leave_btn->Text = L"Leave";
			this->leave_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->leave_btn->UseVisualStyleBackColor = false;
			this->leave_btn->Click += gcnew System::EventHandler(this, &ManagerForm::leave_btn_Click);
			// 
			// hi_lbl
			// 
			this->hi_lbl->AutoSize = true;
			this->hi_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->hi_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 20, System::Drawing::FontStyle::Bold));
			this->hi_lbl->ForeColor = System::Drawing::Color::White;
			this->hi_lbl->Location = System::Drawing::Point(110, 75);
			this->hi_lbl->Name = L"hi_lbl";
			this->hi_lbl->Size = System::Drawing::Size(54, 46);
			this->hi_lbl->TabIndex = 34;
			this->hi_lbl->Text = L"Hi";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 20, System::Drawing::FontStyle::Bold));
			this->name_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->name_lbl->Location = System::Drawing::Point(167, 74);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(269, 46);
			this->name_lbl->TabIndex = 33;
			this->name_lbl->Text = L"Name Lastname";
			// 
			// ManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(556, 765);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->changPass_btn);
			this->Controls->Add(this->dismissalEmployee_btn);
			this->Controls->Add(this->employeeInfo_btn);
			this->Controls->Add(this->employeeRecruitment_btn);
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
			this->Name = L"ManagerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			this->Load += gcnew System::EventHandler(this, &ManagerForm::ManagerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addAcc_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddAccountForm^ form = gcnew AddAccountForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void remove_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RemoveAccountForm^ form = gcnew RemoveAccountForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void clientInfo_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SearchClient^ form = gcnew SearchClient(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}

	private: System::Void overtime_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OvertimeForm^ form = gcnew OvertimeForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void leave_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LeaveForm^ form = gcnew LeaveForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void changPass_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ChangePassForm^ form = gcnew ChangePassForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Call with this number : \n 021-212212", "help and support");
	}
	private: System::Void myInfo_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EmployeeInfoForm^ form = gcnew EmployeeInfoForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void employeeInfo_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SeachEmployeeForm^ form = gcnew SeachEmployeeForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void dismissalEmployee_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DismissalEmployeeForm^ form = gcnew DismissalEmployeeForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void employeeRecruitment_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RecruiteEmployeeForm^ form = gcnew RecruiteEmployeeForm(manager);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void ManagerForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ str = gcnew String((this->manager->getName() + " " + this->manager->getLastName()).c_str());
		this->name_lbl->Text = str;
	}

};
}
