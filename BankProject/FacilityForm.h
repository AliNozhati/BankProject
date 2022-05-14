#pragma once

#include "SearchClient.h"
#include "LeaveForm.h"
#include "OvertimeForm.h"
#include "EmployeeInfoForm.h"
#include "RemoveAccountForm.h"
#include "AddAccountForm.h"
#include "ChangePassForm.h"
#include "DeactiveForm.h"
#include "ReqLoanListForm.h"
#include "LoanStatusForm.h"
#include "Facility.h"
#include "Client.h"

namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::String;

	/// <summary>
	/// Summary for FacilityForm
	/// </summary>
	public ref class FacilityForm : public System::Windows::Forms::Form
	{
	public:
		FacilityForm(Facility* f)
		{
			InitializeComponent();
			facility = f;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacilityForm()
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
	private: System::Windows::Forms::Button^ deactive_btn;
	private: System::Windows::Forms::Button^ reqLoanList_btn;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ changPass_btn;
	private: System::Windows::Forms::Button^ loanStatus_btn;
	private: Facility* facility;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FacilityForm::typeid));
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			this->remove_btn = (gcnew System::Windows::Forms::Button());
			this->addAcc_btn = (gcnew System::Windows::Forms::Button());
			this->myInfo_btn = (gcnew System::Windows::Forms::Button());
			this->clientInfo_btn = (gcnew System::Windows::Forms::Button());
			this->overtime_btn = (gcnew System::Windows::Forms::Button());
			this->leave_btn = (gcnew System::Windows::Forms::Button());
			this->hi_lbl = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->deactive_btn = (gcnew System::Windows::Forms::Button());
			this->reqLoanList_btn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->changPass_btn = (gcnew System::Windows::Forms::Button());
			this->loanStatus_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(516, 1);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(29, 48);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 26;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &FacilityForm::back_pic_Click);
			// 
			// remove_btn
			// 
			this->remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->remove_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove_btn->ForeColor = System::Drawing::Color::White;
			this->remove_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"remove_btn.Image")));
			this->remove_btn->Location = System::Drawing::Point(204, 159);
			this->remove_btn->Name = L"remove_btn";
			this->remove_btn->Size = System::Drawing::Size(153, 130);
			this->remove_btn->TabIndex = 25;
			this->remove_btn->Text = L"Remove An Account";
			this->remove_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->remove_btn->UseVisualStyleBackColor = false;
			this->remove_btn->Click += gcnew System::EventHandler(this, &FacilityForm::remove_btn_Click);
			// 
			// addAcc_btn
			// 
			this->addAcc_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->addAcc_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addAcc_btn->ForeColor = System::Drawing::Color::White;
			this->addAcc_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addAcc_btn.Image")));
			this->addAcc_btn->Location = System::Drawing::Point(36, 159);
			this->addAcc_btn->Name = L"addAcc_btn";
			this->addAcc_btn->Size = System::Drawing::Size(153, 130);
			this->addAcc_btn->TabIndex = 24;
			this->addAcc_btn->Text = L"Add An Account";
			this->addAcc_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->addAcc_btn->UseVisualStyleBackColor = false;
			this->addAcc_btn->Click += gcnew System::EventHandler(this, &FacilityForm::addAcc_btn_Click);
			// 
			// myInfo_btn
			// 
			this->myInfo_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->myInfo_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->myInfo_btn->ForeColor = System::Drawing::Color::White;
			this->myInfo_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myInfo_btn.Image")));
			this->myInfo_btn->Location = System::Drawing::Point(36, 453);
			this->myInfo_btn->Name = L"myInfo_btn";
			this->myInfo_btn->Size = System::Drawing::Size(153, 130);
			this->myInfo_btn->TabIndex = 23;
			this->myInfo_btn->Text = L"My Information";
			this->myInfo_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->myInfo_btn->UseVisualStyleBackColor = false;
			this->myInfo_btn->Click += gcnew System::EventHandler(this, &FacilityForm::myInfo_btn_Click);
			// 
			// clientInfo_btn
			// 
			this->clientInfo_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->clientInfo_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clientInfo_btn->ForeColor = System::Drawing::Color::White;
			this->clientInfo_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientInfo_btn.Image")));
			this->clientInfo_btn->Location = System::Drawing::Point(36, 306);
			this->clientInfo_btn->Name = L"clientInfo_btn";
			this->clientInfo_btn->Size = System::Drawing::Size(153, 130);
			this->clientInfo_btn->TabIndex = 22;
			this->clientInfo_btn->Text = L"Client Information";
			this->clientInfo_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->clientInfo_btn->UseVisualStyleBackColor = false;
			this->clientInfo_btn->Click += gcnew System::EventHandler(this, &FacilityForm::clientInfo_btn_Click);
			// 
			// overtime_btn
			// 
			this->overtime_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->overtime_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overtime_btn->ForeColor = System::Drawing::Color::White;
			this->overtime_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"overtime_btn.Image")));
			this->overtime_btn->Location = System::Drawing::Point(204, 453);
			this->overtime_btn->Name = L"overtime_btn";
			this->overtime_btn->Size = System::Drawing::Size(153, 130);
			this->overtime_btn->TabIndex = 21;
			this->overtime_btn->Text = L"Overtime";
			this->overtime_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->overtime_btn->UseVisualStyleBackColor = false;
			this->overtime_btn->Click += gcnew System::EventHandler(this, &FacilityForm::overtime_btn_Click);
			// 
			// leave_btn
			// 
			this->leave_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->leave_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leave_btn->ForeColor = System::Drawing::Color::White;
			this->leave_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leave_btn.Image")));
			this->leave_btn->Location = System::Drawing::Point(372, 453);
			this->leave_btn->Name = L"leave_btn";
			this->leave_btn->Size = System::Drawing::Size(153, 130);
			this->leave_btn->TabIndex = 20;
			this->leave_btn->Text = L"Leave";
			this->leave_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->leave_btn->UseVisualStyleBackColor = false;
			this->leave_btn->Click += gcnew System::EventHandler(this, &FacilityForm::leave_btn_Click);
			// 
			// hi_lbl
			// 
			this->hi_lbl->AutoSize = true;
			this->hi_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->hi_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hi_lbl->ForeColor = System::Drawing::Color::White;
			this->hi_lbl->Location = System::Drawing::Point(116, 81);
			this->hi_lbl->Name = L"hi_lbl";
			this->hi_lbl->Size = System::Drawing::Size(53, 45);
			this->hi_lbl->TabIndex = 19;
			this->hi_lbl->Text = L"Hi";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 20, System::Drawing::FontStyle::Bold));
			this->name_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->name_lbl->Location = System::Drawing::Point(175, 80);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(269, 46);
			this->name_lbl->TabIndex = 18;
			this->name_lbl->Text = L"Name Lastname";
			// 
			// deactive_btn
			// 
			this->deactive_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->deactive_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deactive_btn->ForeColor = System::Drawing::Color::White;
			this->deactive_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deactive_btn.Image")));
			this->deactive_btn->Location = System::Drawing::Point(372, 159);
			this->deactive_btn->Name = L"deactive_btn";
			this->deactive_btn->Size = System::Drawing::Size(153, 130);
			this->deactive_btn->TabIndex = 28;
			this->deactive_btn->Text = L"Deactive";
			this->deactive_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->deactive_btn->UseVisualStyleBackColor = false;
			this->deactive_btn->Click += gcnew System::EventHandler(this, &FacilityForm::deactive_btn_Click);
			// 
			// reqLoanList_btn
			// 
			this->reqLoanList_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->reqLoanList_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqLoanList_btn->ForeColor = System::Drawing::Color::White;
			this->reqLoanList_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reqLoanList_btn.Image")));
			this->reqLoanList_btn->Location = System::Drawing::Point(204, 306);
			this->reqLoanList_btn->Name = L"reqLoanList_btn";
			this->reqLoanList_btn->Size = System::Drawing::Size(153, 130);
			this->reqLoanList_btn->TabIndex = 27;
			this->reqLoanList_btn->Text = L"Requests Loans List";
			this->reqLoanList_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->reqLoanList_btn->UseVisualStyleBackColor = false;
			this->reqLoanList_btn->Click += gcnew System::EventHandler(this, &FacilityForm::loanReqList_btn_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(286, 601);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 130);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Support";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FacilityForm::button4_Click);
			// 
			// changPass_btn
			// 
			this->changPass_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->changPass_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changPass_btn->ForeColor = System::Drawing::Color::White;
			this->changPass_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"changPass_btn.Image")));
			this->changPass_btn->Location = System::Drawing::Point(116, 601);
			this->changPass_btn->Name = L"changPass_btn";
			this->changPass_btn->Size = System::Drawing::Size(153, 130);
			this->changPass_btn->TabIndex = 31;
			this->changPass_btn->Text = L"Change Password";
			this->changPass_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->changPass_btn->UseVisualStyleBackColor = false;
			this->changPass_btn->Click += gcnew System::EventHandler(this, &FacilityForm::changPass_btn_Click);
			// 
			// loanStatus_btn
			// 
			this->loanStatus_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->loanStatus_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanStatus_btn->ForeColor = System::Drawing::Color::White;
			this->loanStatus_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loanStatus_btn.Image")));
			this->loanStatus_btn->Location = System::Drawing::Point(372, 306);
			this->loanStatus_btn->Name = L"loanStatus_btn";
			this->loanStatus_btn->Size = System::Drawing::Size(153, 130);
			this->loanStatus_btn->TabIndex = 30;
			this->loanStatus_btn->Text = L"Loan Status";
			this->loanStatus_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->loanStatus_btn->UseVisualStyleBackColor = false;
			this->loanStatus_btn->Click += gcnew System::EventHandler(this, &FacilityForm::loanStatus_btn_Click);
			// 
			// FacilityForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(556, 765);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->changPass_btn);
			this->Controls->Add(this->loanStatus_btn);
			this->Controls->Add(this->deactive_btn);
			this->Controls->Add(this->reqLoanList_btn);
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
			this->Name = L"FacilityForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			this->Load += gcnew System::EventHandler(this, &FacilityForm::FacilityForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Call with this number : \n 021-212212", "help and support");
	}
	private: System::Void leave_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LeaveForm^ form = gcnew LeaveForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void overtime_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OvertimeForm^ form = gcnew OvertimeForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void myInfo_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EmployeeInfoForm^ form = gcnew EmployeeInfoForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void remove_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RemoveAccountForm^ form = gcnew RemoveAccountForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void addAcc_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddAccountForm^ form = gcnew AddAccountForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void clientInfo_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{

		SearchClient^ form = gcnew SearchClient(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void changPass_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ChangePassForm^ form = gcnew ChangePassForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void deactive_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DeactiveForm^ form = gcnew DeactiveForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void loanReqList_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ReqLoanListForm^ form = gcnew ReqLoanListForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void loanStatus_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LoanStatusForm^ form = gcnew LoanStatusForm(facility);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void FacilityForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ str = gcnew String((this->facility->getName() + " " + this->facility->getLastName()).c_str());
		this->name_lbl->Text = str;
	}
};
}
