#pragma once
#include "Facility.h"
#include <cliext/vector>
#include "Account.h"
namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReqLoanListForm
	/// </summary>
	public ref class ReqLoanListForm : public System::Windows::Forms::Form
	{
	public:
		ReqLoanListForm(Facility* f)
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
		~ReqLoanListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ reqLoanList_dgv;
	private: System::Windows::Forms::PictureBox^ back_pic;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ accountNumber;
	private: System::Windows::Forms::Button^ accept_btn;

	private: Facility* facility;
	private: System::Windows::Forms::Label^ lbl2;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReqLoanListForm::typeid));
			this->reqLoanList_dgv = (gcnew System::Windows::Forms::DataGridView());
			this->accountNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->accept_btn = (gcnew System::Windows::Forms::Button());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reqLoanList_dgv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// reqLoanList_dgv
			// 
			this->reqLoanList_dgv->AllowUserToAddRows = false;
			this->reqLoanList_dgv->AllowUserToDeleteRows = false;
			this->reqLoanList_dgv->AllowUserToResizeColumns = false;
			this->reqLoanList_dgv->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			this->reqLoanList_dgv->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->reqLoanList_dgv->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::ButtonShadow;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::ControlDarkDark;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->reqLoanList_dgv->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->reqLoanList_dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->reqLoanList_dgv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->accountNumber });
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->reqLoanList_dgv->DefaultCellStyle = dataGridViewCellStyle4;
			this->reqLoanList_dgv->GridColor = System::Drawing::Color::White;
			this->reqLoanList_dgv->Location = System::Drawing::Point(12, 115);
			this->reqLoanList_dgv->Name = L"reqLoanList_dgv";
			this->reqLoanList_dgv->ReadOnly = true;
			this->reqLoanList_dgv->RowHeadersWidth = 51;
			this->reqLoanList_dgv->RowTemplate->Height = 24;
			this->reqLoanList_dgv->RowTemplate->ReadOnly = true;
			this->reqLoanList_dgv->Size = System::Drawing::Size(389, 393);
			this->reqLoanList_dgv->TabIndex = 0;
			// 
			// accountNumber
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountNumber->DefaultCellStyle = dataGridViewCellStyle3;
			this->accountNumber->HeaderText = L"Account Number";
			this->accountNumber->MinimumWidth = 6;
			this->accountNumber->Name = L"accountNumber";
			this->accountNumber->ReadOnly = true;
			this->accountNumber->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->accountNumber->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->accountNumber->Width = 295;
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(372, 3);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(29, 48);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 27;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &ReqLoanListForm::back_pic_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Location = System::Drawing::Point(58, 63);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(293, 38);
			this->lbl1->TabIndex = 28;
			this->lbl1->Text = L"List of loan requested";
			// 
			// accept_btn
			// 
			this->accept_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->accept_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10, System::Drawing::FontStyle::Bold));
			this->accept_btn->Location = System::Drawing::Point(39, 526);
			this->accept_btn->Name = L"accept_btn";
			this->accept_btn->Size = System::Drawing::Size(107, 45);
			this->accept_btn->TabIndex = 29;
			this->accept_btn->Text = L"Accept";
			this->accept_btn->UseVisualStyleBackColor = false;
			this->accept_btn->Click += gcnew System::EventHandler(this, &ReqLoanListForm::accept_btn_Click);
			// 
			// lbl2
			// 
			this->lbl2->Location = System::Drawing::Point(170, 531);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(196, 33);
			this->lbl2->TabIndex = 30;
			this->lbl2->Text = L"for accept a loan first click it on the list and then press accept.";
			// 
			// ReqLoanListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(413, 604);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->accept_btn);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->back_pic);
			this->Controls->Add(this->reqLoanList_dgv);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ReqLoanListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			this->Load += gcnew System::EventHandler(this, &ReqLoanListForm::ReqLoanListForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reqLoanList_dgv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void ReqLoanListForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		vector<Account*> loanList = facility->getReqLoans();
		for(int i=0 ; i<loanList.size() ; i++)
			this->reqLoanList_dgv->Rows->Add(loanList[i]->getAccNumber().ToString());
	}
	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void accept_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int index = reqLoanList_dgv->CurrentRow->Index;
		facility->reviewReqLoan(index);
	}
};
}
