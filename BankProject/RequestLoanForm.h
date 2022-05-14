#pragma once
#include "Client.h";
#include "Loan.h"
namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RequestLoanForm
	/// </summary>
	public ref class RequestLoanForm : public System::Windows::Forms::Form
	{
	public:
		RequestLoanForm(Client* c)
		{
			InitializeComponent();
			client = c;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RequestLoanForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancel_btn;
	protected:
	private: System::Windows::Forms::Button^ request_btn;
	private: System::Windows::Forms::Label^ accNum_lbl;
	private: System::Windows::Forms::TextBox^ accNum_txt;
	private: System::Windows::Forms::ComboBox^ loanType_cmb;


	private: System::Windows::Forms::Label^ loanType_lbl;
	private: Client* client = nullptr;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RequestLoanForm::typeid));
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->request_btn = (gcnew System::Windows::Forms::Button());
			this->accNum_lbl = (gcnew System::Windows::Forms::Label());
			this->accNum_txt = (gcnew System::Windows::Forms::TextBox());
			this->loanType_cmb = (gcnew System::Windows::Forms::ComboBox());
			this->loanType_lbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cancel_btn
			// 
			this->cancel_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::Color::White;
			this->cancel_btn->Location = System::Drawing::Point(259, 230);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(156, 55);
			this->cancel_btn->TabIndex = 18;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &RequestLoanForm::cancel_btn_Click);
			// 
			// request_btn
			// 
			this->request_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->request_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->request_btn->ForeColor = System::Drawing::Color::White;
			this->request_btn->Location = System::Drawing::Point(85, 230);
			this->request_btn->Name = L"request_btn";
			this->request_btn->Size = System::Drawing::Size(156, 55);
			this->request_btn->TabIndex = 17;
			this->request_btn->Text = L"Request";
			this->request_btn->UseVisualStyleBackColor = false;
			this->request_btn->Click += gcnew System::EventHandler(this, &RequestLoanForm::request_btn_Click);
			// 
			// accNum_lbl
			// 
			this->accNum_lbl->AutoSize = true;
			this->accNum_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accNum_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->accNum_lbl->Location = System::Drawing::Point(38, 44);
			this->accNum_lbl->Name = L"accNum_lbl";
			this->accNum_lbl->Size = System::Drawing::Size(181, 28);
			this->accNum_lbl->TabIndex = 14;
			this->accNum_lbl->Text = L"Account number : ";
			// 
			// accNum_txt
			// 
			this->accNum_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->accNum_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->accNum_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accNum_txt->ForeColor = System::Drawing::Color::White;
			this->accNum_txt->Location = System::Drawing::Point(225, 37);
			this->accNum_txt->Name = L"accNum_txt";
			this->accNum_txt->Size = System::Drawing::Size(224, 41);
			this->accNum_txt->TabIndex = 13;
			this->accNum_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// loanType_cmb
			// 
			this->loanType_cmb->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanType_cmb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->loanType_cmb->FormattingEnabled = true;
			this->loanType_cmb->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"12-month repayment", L"24-month repayment",
					L"36-month repayment"
			});
			this->loanType_cmb->Location = System::Drawing::Point(225, 115);
			this->loanType_cmb->Name = L"loanType_cmb";
			this->loanType_cmb->Size = System::Drawing::Size(224, 36);
			this->loanType_cmb->TabIndex = 19;
			// 
			// loanType_lbl
			// 
			this->loanType_lbl->AutoSize = true;
			this->loanType_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanType_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->loanType_lbl->Location = System::Drawing::Point(38, 123);
			this->loanType_lbl->Name = L"loanType_lbl";
			this->loanType_lbl->Size = System::Drawing::Size(119, 28);
			this->loanType_lbl->TabIndex = 20;
			this->loanType_lbl->Text = L"Loan type : ";
			// 
			// RequestLoanForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(487, 323);
			this->Controls->Add(this->loanType_lbl);
			this->Controls->Add(this->loanType_cmb);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->request_btn);
			this->Controls->Add(this->accNum_lbl);
			this->Controls->Add(this->accNum_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RequestLoanForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"21 Bank";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void request_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// request loan 
		int64_t accNumber = int64_t::Parse(this->accNum_txt->Text);
		LoanType lt;
		if (this->loanType_cmb->Text == "12-month repayment")
			lt = month_12;
		else if (this->loanType_cmb->Text == "24-month repayment")
			lt = month_24;
		else if (this->loanType_cmb->Text == "36-month repayment")
			lt = month_36;
		else
			MessageBox::Show("Please choose loan type.");

		this->client->requestLoan(accNumber, lt);

	//	MessageBox::Show("Loan requested", "loan");
		this->Close();
	}

};
}
