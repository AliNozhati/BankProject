#pragma once
#include "Client.h"
#include <cliext/vector>
#include "Account.h"
#include "Loan.h"
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
	/// Summary for ClientInfoFrom
	/// </summary>
	public ref class ClientInfoFrom : public System::Windows::Forms::Form
	{
	public:
		ClientInfoFrom(Client* c)
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
		~ClientInfoFrom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl1;
	protected:
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::Label^ lastname_lbl;
	private: System::Windows::Forms::Label^ nationalCode_lbl;
	private: System::Windows::Forms::Label^ bdate_lbl;
	private: System::Windows::Forms::Label^ lbl4;
	private: System::Windows::Forms::Label^ lbl3;




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ComboBox^ account_cmb;
	private: System::Windows::Forms::Label^ lbl7;
	private: System::Windows::Forms::Label^ lbl8;
	private: System::Windows::Forms::ComboBox^ loan_cmb;
	private: System::Windows::Forms::Label^ lbl9;
	private: System::Windows::Forms::Label^ lbl10;
	private: System::Windows::Forms::Label^ lbl11;
	private: System::Windows::Forms::Label^ balance_lbl;
	private: System::Windows::Forms::Label^ accDate_lbl;
	private: System::Windows::Forms::Label^ activeDays_lbl;
	private: System::Windows::Forms::Label^ AccNum_lbl;
	private: System::Windows::Forms::Label^ lbl12;
	private: System::Windows::Forms::Label^ reDate_lbl;
	private: System::Windows::Forms::Label^ lbl13;
	private: System::Windows::Forms::Label^ loanAmount_lbl;
	private: System::Windows::Forms::Label^ lbl14;
	private: System::Windows::Forms::Label^ interest_lbl;
	private: System::Windows::Forms::Label^ lbl15;
	private: System::Windows::Forms::Label^ amountIns_lbl;
	private: System::Windows::Forms::Label^ lbl16;
	private: System::Windows::Forms::Label^ lbl17;
	private: System::Windows::Forms::Label^ allins_lbl;
	private: System::Windows::Forms::Label^ lbl18;
	private: System::Windows::Forms::Label^ paid_lbl;
	private: System::Windows::Forms::Label^ lbl19;
	private: System::Windows::Forms::Label^ overdu_lbl;
	private: System::Windows::Forms::PictureBox^ back_pic;
	private: System::Windows::Forms::Label^ lbl20;
	private: System::Windows::Forms::Label^ forfiet_lbl;
	private: Client* client;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientInfoFrom::typeid));
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->lastname_lbl = (gcnew System::Windows::Forms::Label());
			this->nationalCode_lbl = (gcnew System::Windows::Forms::Label());
			this->bdate_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->account_cmb = (gcnew System::Windows::Forms::ComboBox());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->loan_cmb = (gcnew System::Windows::Forms::ComboBox());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->lbl11 = (gcnew System::Windows::Forms::Label());
			this->balance_lbl = (gcnew System::Windows::Forms::Label());
			this->accDate_lbl = (gcnew System::Windows::Forms::Label());
			this->activeDays_lbl = (gcnew System::Windows::Forms::Label());
			this->AccNum_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl12 = (gcnew System::Windows::Forms::Label());
			this->reDate_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl13 = (gcnew System::Windows::Forms::Label());
			this->loanAmount_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl14 = (gcnew System::Windows::Forms::Label());
			this->interest_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl15 = (gcnew System::Windows::Forms::Label());
			this->amountIns_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl16 = (gcnew System::Windows::Forms::Label());
			this->lbl17 = (gcnew System::Windows::Forms::Label());
			this->allins_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl18 = (gcnew System::Windows::Forms::Label());
			this->paid_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl19 = (gcnew System::Windows::Forms::Label());
			this->overdu_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl20 = (gcnew System::Windows::Forms::Label());
			this->forfiet_lbl = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::White;
			this->lbl1->Location = System::Drawing::Point(111, 36);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(67, 23);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"name : ";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->ForeColor = System::Drawing::Color::White;
			this->lbl2->Location = System::Drawing::Point(111, 80);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(93, 23);
			this->lbl2->TabIndex = 1;
			this->lbl2->Text = L"lastname : ";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_lbl->ForeColor = System::Drawing::Color::Black;
			this->name_lbl->Location = System::Drawing::Point(210, 27);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(76, 31);
			this->name_lbl->TabIndex = 2;
			this->name_lbl->Text = L"Name";
			// 
			// lastname_lbl
			// 
			this->lastname_lbl->AutoSize = true;
			this->lastname_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname_lbl->ForeColor = System::Drawing::Color::Black;
			this->lastname_lbl->Location = System::Drawing::Point(210, 72);
			this->lastname_lbl->Name = L"lastname_lbl";
			this->lastname_lbl->Size = System::Drawing::Size(112, 31);
			this->lastname_lbl->TabIndex = 3;
			this->lastname_lbl->Text = L"Lastname";
			// 
			// nationalCode_lbl
			// 
			this->nationalCode_lbl->AutoSize = true;
			this->nationalCode_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nationalCode_lbl->ForeColor = System::Drawing::Color::Black;
			this->nationalCode_lbl->Location = System::Drawing::Point(653, 73);
			this->nationalCode_lbl->Name = L"nationalCode_lbl";
			this->nationalCode_lbl->Size = System::Drawing::Size(126, 31);
			this->nationalCode_lbl->TabIndex = 7;
			this->nationalCode_lbl->Text = L"123456789";
			// 
			// bdate_lbl
			// 
			this->bdate_lbl->AutoSize = true;
			this->bdate_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdate_lbl->ForeColor = System::Drawing::Color::Black;
			this->bdate_lbl->Location = System::Drawing::Point(653, 29);
			this->bdate_lbl->Name = L"bdate_lbl";
			this->bdate_lbl->Size = System::Drawing::Size(108, 31);
			this->bdate_lbl->TabIndex = 6;
			this->bdate_lbl->Text = L"1380/5/4";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl4->ForeColor = System::Drawing::Color::White;
			this->lbl4->Location = System::Drawing::Point(519, 81);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(128, 23);
			this->lbl4->TabIndex = 5;
			this->lbl4->Text = L"national code : ";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->ForeColor = System::Drawing::Color::White;
			this->lbl3->Location = System::Drawing::Point(519, 36);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(88, 23);
			this->lbl3->TabIndex = 4;
			this->lbl3->Text = L"birthday : ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel1->Controls->Add(this->back_pic);
			this->panel1->Controls->Add(this->lbl1);
			this->panel1->Controls->Add(this->lbl2);
			this->panel1->Controls->Add(this->name_lbl);
			this->panel1->Controls->Add(this->lastname_lbl);
			this->panel1->Controls->Add(this->lbl3);
			this->panel1->Controls->Add(this->nationalCode_lbl);
			this->panel1->Controls->Add(this->lbl4);
			this->panel1->Controls->Add(this->bdate_lbl);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(938, 132);
			this->panel1->TabIndex = 12;
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(893, 3);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(42, 50);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 12;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &ClientInfoFrom::back_pic_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(439, 130);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(12, 553);
			this->panel2->TabIndex = 13;
			// 
			// account_cmb
			// 
			this->account_cmb->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->account_cmb->FormattingEnabled = true;
			this->account_cmb->Location = System::Drawing::Point(86, 195);
			this->account_cmb->Name = L"account_cmb";
			this->account_cmb->Size = System::Drawing::Size(250, 31);
			this->account_cmb->TabIndex = 14;
			this->account_cmb->Text = L"Accounts";
			this->account_cmb->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientInfoFrom::account_cmb_SelectedIndexChanged);
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->BackColor = System::Drawing::Color::White;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl7->Location = System::Drawing::Point(160, 146);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(99, 31);
			this->lbl7->TabIndex = 12;
			this->lbl7->Text = L"Account";
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->BackColor = System::Drawing::Color::White;
			this->lbl8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl8->Location = System::Drawing::Point(659, 146);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(64, 31);
			this->lbl8->TabIndex = 16;
			this->lbl8->Text = L"Loan";
			// 
			// loan_cmb
			// 
			this->loan_cmb->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loan_cmb->FormattingEnabled = true;
			this->loan_cmb->Location = System::Drawing::Point(563, 195);
			this->loan_cmb->Name = L"loan_cmb";
			this->loan_cmb->Size = System::Drawing::Size(250, 31);
			this->loan_cmb->TabIndex = 17;
			this->loan_cmb->Text = L"Loans";
			this->loan_cmb->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientInfoFrom::loan_cmb_SelectedIndexChanged);
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->BackColor = System::Drawing::Color::White;
			this->lbl9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl9->Location = System::Drawing::Point(28, 282);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(112, 31);
			this->lbl9->TabIndex = 18;
			this->lbl9->Text = L"Balance : ";
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->BackColor = System::Drawing::Color::White;
			this->lbl10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl10->Location = System::Drawing::Point(28, 344);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(167, 31);
			this->lbl10->TabIndex = 19;
			this->lbl10->Text = L"Opening date :";
			// 
			// lbl11
			// 
			this->lbl11->AutoSize = true;
			this->lbl11->BackColor = System::Drawing::Color::White;
			this->lbl11->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl11->Location = System::Drawing::Point(28, 407);
			this->lbl11->Name = L"lbl11";
			this->lbl11->Size = System::Drawing::Size(150, 31);
			this->lbl11->TabIndex = 20;
			this->lbl11->Text = L"Active days : ";
			// 
			// balance_lbl
			// 
			this->balance_lbl->AutoSize = true;
			this->balance_lbl->BackColor = System::Drawing::Color::White;
			this->balance_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balance_lbl->ForeColor = System::Drawing::Color::Black;
			this->balance_lbl->Location = System::Drawing::Point(250, 282);
			this->balance_lbl->Name = L"balance_lbl";
			this->balance_lbl->Size = System::Drawing::Size(131, 31);
			this->balance_lbl->TabIndex = 21;
			this->balance_lbl->Text = L"200000000";
			this->balance_lbl->Visible = false;
			// 
			// accDate_lbl
			// 
			this->accDate_lbl->AutoSize = true;
			this->accDate_lbl->BackColor = System::Drawing::Color::White;
			this->accDate_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accDate_lbl->ForeColor = System::Drawing::Color::Black;
			this->accDate_lbl->Location = System::Drawing::Point(250, 344);
			this->accDate_lbl->Name = L"accDate_lbl";
			this->accDate_lbl->Size = System::Drawing::Size(108, 31);
			this->accDate_lbl->TabIndex = 22;
			this->accDate_lbl->Text = L"1390/2/2";
			this->accDate_lbl->Visible = false;
			// 
			// activeDays_lbl
			// 
			this->activeDays_lbl->AutoSize = true;
			this->activeDays_lbl->BackColor = System::Drawing::Color::White;
			this->activeDays_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->activeDays_lbl->ForeColor = System::Drawing::Color::Black;
			this->activeDays_lbl->Location = System::Drawing::Point(250, 407);
			this->activeDays_lbl->Name = L"activeDays_lbl";
			this->activeDays_lbl->Size = System::Drawing::Size(49, 31);
			this->activeDays_lbl->TabIndex = 23;
			this->activeDays_lbl->Text = L"100";
			this->activeDays_lbl->Visible = false;
			// 
			// AccNum_lbl
			// 
			this->AccNum_lbl->AutoSize = true;
			this->AccNum_lbl->BackColor = System::Drawing::Color::White;
			this->AccNum_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccNum_lbl->ForeColor = System::Drawing::Color::Black;
			this->AccNum_lbl->Location = System::Drawing::Point(763, 257);
			this->AccNum_lbl->Name = L"AccNum_lbl";
			this->AccNum_lbl->Size = System::Drawing::Size(75, 31);
			this->AccNum_lbl->TabIndex = 25;
			this->AccNum_lbl->Text = L"12345";
			this->AccNum_lbl->Visible = false;
			// 
			// lbl12
			// 
			this->lbl12->AutoSize = true;
			this->lbl12->BackColor = System::Drawing::Color::White;
			this->lbl12->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl12->Location = System::Drawing::Point(471, 257);
			this->lbl12->Name = L"lbl12";
			this->lbl12->Size = System::Drawing::Size(204, 31);
			this->lbl12->TabIndex = 24;
			this->lbl12->Text = L"Account number : ";
			// 
			// reDate_lbl
			// 
			this->reDate_lbl->AutoSize = true;
			this->reDate_lbl->BackColor = System::Drawing::Color::White;
			this->reDate_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reDate_lbl->ForeColor = System::Drawing::Color::Black;
			this->reDate_lbl->Location = System::Drawing::Point(763, 302);
			this->reDate_lbl->Name = L"reDate_lbl";
			this->reDate_lbl->Size = System::Drawing::Size(108, 31);
			this->reDate_lbl->TabIndex = 27;
			this->reDate_lbl->Text = L"1390/8/5";
			this->reDate_lbl->Visible = false;
			// 
			// lbl13
			// 
			this->lbl13->AutoSize = true;
			this->lbl13->BackColor = System::Drawing::Color::White;
			this->lbl13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl13->Location = System::Drawing::Point(471, 302);
			this->lbl13->Name = L"lbl13";
			this->lbl13->Size = System::Drawing::Size(177, 31);
			this->lbl13->TabIndex = 26;
			this->lbl13->Text = L"Recieved date : ";
			// 
			// loanAmount_lbl
			// 
			this->loanAmount_lbl->AutoSize = true;
			this->loanAmount_lbl->BackColor = System::Drawing::Color::White;
			this->loanAmount_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanAmount_lbl->ForeColor = System::Drawing::Color::Black;
			this->loanAmount_lbl->Location = System::Drawing::Point(763, 348);
			this->loanAmount_lbl->Name = L"loanAmount_lbl";
			this->loanAmount_lbl->Size = System::Drawing::Size(131, 31);
			this->loanAmount_lbl->TabIndex = 29;
			this->loanAmount_lbl->Text = L"200000000";
			this->loanAmount_lbl->Visible = false;
			// 
			// lbl14
			// 
			this->lbl14->AutoSize = true;
			this->lbl14->BackColor = System::Drawing::Color::White;
			this->lbl14->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl14->Location = System::Drawing::Point(471, 348);
			this->lbl14->Name = L"lbl14";
			this->lbl14->Size = System::Drawing::Size(168, 31);
			this->lbl14->TabIndex = 28;
			this->lbl14->Text = L"Loan amount : ";
			// 
			// interest_lbl
			// 
			this->interest_lbl->AutoSize = true;
			this->interest_lbl->BackColor = System::Drawing::Color::White;
			this->interest_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->interest_lbl->ForeColor = System::Drawing::Color::Black;
			this->interest_lbl->Location = System::Drawing::Point(763, 398);
			this->interest_lbl->Name = L"interest_lbl";
			this->interest_lbl->Size = System::Drawing::Size(79, 31);
			this->interest_lbl->TabIndex = 31;
			this->interest_lbl->Text = L"50000";
			this->interest_lbl->Visible = false;
			// 
			// lbl15
			// 
			this->lbl15->AutoSize = true;
			this->lbl15->BackColor = System::Drawing::Color::White;
			this->lbl15->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl15->Location = System::Drawing::Point(471, 398);
			this->lbl15->Name = L"lbl15";
			this->lbl15->Size = System::Drawing::Size(160, 31);
			this->lbl15->TabIndex = 30;
			this->lbl15->Text = L"Loan interest :";
			// 
			// amountIns_lbl
			// 
			this->amountIns_lbl->AutoSize = true;
			this->amountIns_lbl->BackColor = System::Drawing::Color::White;
			this->amountIns_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amountIns_lbl->ForeColor = System::Drawing::Color::Black;
			this->amountIns_lbl->Location = System::Drawing::Point(763, 448);
			this->amountIns_lbl->Name = L"amountIns_lbl";
			this->amountIns_lbl->Size = System::Drawing::Size(75, 31);
			this->amountIns_lbl->TabIndex = 33;
			this->amountIns_lbl->Text = L"10000";
			this->amountIns_lbl->Visible = false;
			// 
			// lbl16
			// 
			this->lbl16->AutoSize = true;
			this->lbl16->BackColor = System::Drawing::Color::White;
			this->lbl16->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl16->Location = System::Drawing::Point(471, 448);
			this->lbl16->Name = L"lbl16";
			this->lbl16->Size = System::Drawing::Size(229, 31);
			this->lbl16->TabIndex = 32;
			this->lbl16->Text = L"Amount installment :";
			// 
			// lbl17
			// 
			this->lbl17->AutoSize = true;
			this->lbl17->BackColor = System::Drawing::Color::White;
			this->lbl17->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl17->Location = System::Drawing::Point(471, 495);
			this->lbl17->Name = L"lbl17";
			this->lbl17->Size = System::Drawing::Size(173, 31);
			this->lbl17->TabIndex = 34;
			this->lbl17->Text = L"All installment :";
			// 
			// allins_lbl
			// 
			this->allins_lbl->AutoSize = true;
			this->allins_lbl->BackColor = System::Drawing::Color::White;
			this->allins_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->allins_lbl->ForeColor = System::Drawing::Color::Black;
			this->allins_lbl->Location = System::Drawing::Point(763, 495);
			this->allins_lbl->Name = L"allins_lbl";
			this->allins_lbl->Size = System::Drawing::Size(27, 31);
			this->allins_lbl->TabIndex = 35;
			this->allins_lbl->Text = L"5";
			this->allins_lbl->Visible = false;
			// 
			// lbl18
			// 
			this->lbl18->AutoSize = true;
			this->lbl18->BackColor = System::Drawing::Color::White;
			this->lbl18->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl18->Location = System::Drawing::Point(471, 542);
			this->lbl18->Name = L"lbl18";
			this->lbl18->Size = System::Drawing::Size(207, 31);
			this->lbl18->TabIndex = 36;
			this->lbl18->Text = L"Paid installments : ";
			// 
			// paid_lbl
			// 
			this->paid_lbl->AutoSize = true;
			this->paid_lbl->BackColor = System::Drawing::Color::White;
			this->paid_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paid_lbl->ForeColor = System::Drawing::Color::Black;
			this->paid_lbl->Location = System::Drawing::Point(763, 542);
			this->paid_lbl->Name = L"paid_lbl";
			this->paid_lbl->Size = System::Drawing::Size(27, 31);
			this->paid_lbl->TabIndex = 37;
			this->paid_lbl->Text = L"2";
			this->paid_lbl->Visible = false;
			// 
			// lbl19
			// 
			this->lbl19->AutoSize = true;
			this->lbl19->BackColor = System::Drawing::Color::White;
			this->lbl19->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl19->Location = System::Drawing::Point(471, 590);
			this->lbl19->Name = L"lbl19";
			this->lbl19->Size = System::Drawing::Size(239, 31);
			this->lbl19->TabIndex = 38;
			this->lbl19->Text = L"Overdu installments : ";
			// 
			// overdu_lbl
			// 
			this->overdu_lbl->AutoSize = true;
			this->overdu_lbl->BackColor = System::Drawing::Color::White;
			this->overdu_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overdu_lbl->ForeColor = System::Drawing::Color::Black;
			this->overdu_lbl->Location = System::Drawing::Point(763, 590);
			this->overdu_lbl->Name = L"overdu_lbl";
			this->overdu_lbl->Size = System::Drawing::Size(23, 31);
			this->overdu_lbl->TabIndex = 39;
			this->overdu_lbl->Text = L"1";
			this->overdu_lbl->Visible = false;
			// 
			// lbl20
			// 
			this->lbl20->AutoSize = true;
			this->lbl20->BackColor = System::Drawing::Color::White;
			this->lbl20->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl20->Location = System::Drawing::Point(471, 634);
			this->lbl20->Name = L"lbl20";
			this->lbl20->Size = System::Drawing::Size(101, 31);
			this->lbl20->TabIndex = 40;
			this->lbl20->Text = L"Forfiet : ";
			// 
			// forfiet_lbl
			// 
			this->forfiet_lbl->AutoSize = true;
			this->forfiet_lbl->BackColor = System::Drawing::Color::White;
			this->forfiet_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forfiet_lbl->ForeColor = System::Drawing::Color::Black;
			this->forfiet_lbl->Location = System::Drawing::Point(763, 634);
			this->forfiet_lbl->Name = L"forfiet_lbl";
			this->forfiet_lbl->Size = System::Drawing::Size(62, 31);
			this->forfiet_lbl->TabIndex = 41;
			this->forfiet_lbl->Text = L"1000";
			this->forfiet_lbl->Visible = false;
			// 
			// ClientInfoFrom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(938, 678);
			this->Controls->Add(this->forfiet_lbl);
			this->Controls->Add(this->lbl20);
			this->Controls->Add(this->lbl19);
			this->Controls->Add(this->overdu_lbl);
			this->Controls->Add(this->lbl18);
			this->Controls->Add(this->paid_lbl);
			this->Controls->Add(this->lbl17);
			this->Controls->Add(this->allins_lbl);
			this->Controls->Add(this->lbl16);
			this->Controls->Add(this->amountIns_lbl);
			this->Controls->Add(this->interest_lbl);
			this->Controls->Add(this->lbl15);
			this->Controls->Add(this->loanAmount_lbl);
			this->Controls->Add(this->lbl14);
			this->Controls->Add(this->reDate_lbl);
			this->Controls->Add(this->lbl13);
			this->Controls->Add(this->AccNum_lbl);
			this->Controls->Add(this->lbl12);
			this->Controls->Add(this->activeDays_lbl);
			this->Controls->Add(this->accDate_lbl);
			this->Controls->Add(this->balance_lbl);
			this->Controls->Add(this->lbl11);
			this->Controls->Add(this->lbl10);
			this->Controls->Add(this->lbl9);
			this->Controls->Add(this->loan_cmb);
			this->Controls->Add(this->lbl8);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->account_cmb);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ClientInfoFrom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"21 Bank";
			this->Load += gcnew System::EventHandler(this, &ClientInfoFrom::ClientInfoFrom_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void account_cmb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		int64_t accNum = int64_t::Parse(this->account_cmb->Text);
		Account* account = this->client->getAcc(accNum);

		this->balance_lbl->Text = account->getBalance().ToString();
		this->accDate_lbl->Text = account->getOpenAccDate().getMonth() + "/"
			+ account->getOpenAccDate().getDay() + "/"
			+ account->getOpenAccDate().getYear();
		this->activeDays_lbl->Text = account->getActiveDays().ToString();

		this->balance_lbl->Visible = true;
		this->accDate_lbl->Visible = true;
		this->activeDays_lbl->Visible = true;
	}
	private: System::Void loan_cmb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		int64_t loanNum = int64_t::Parse(this->loan_cmb->Text);
		const Loan* loan = this->client->getLoan(loanNum);

		this->AccNum_lbl->Text = loan->getAccNumber().ToString();
		this->reDate_lbl->Text = loan->getDateReceived().getMonth() + "/" +
			loan->getDateReceived().getDay() + "/" +
			loan->getDateReceived().getYear();
		this->loanAmount_lbl->Text = loan->getLoanAmount().ToString();
		this->interest_lbl->Text = loan->getLoanInterest().ToString();
		this->amountIns_lbl->Text = loan->getAmountInstallments().ToString();
		this->allins_lbl->Text = loan->getAllInstallments().ToString();
		this->paid_lbl->Text = loan->getPaidInstallments().ToString();
		this->overdu_lbl->Text = loan->getOverdueInstallments().ToString();
		this->forfiet_lbl->Text = loan->getForfeit().ToString();

		this->AccNum_lbl->Visible = true;
		this->reDate_lbl->Visible = true;
		this->loanAmount_lbl->Visible = true;
		this->interest_lbl->Visible = true;
		this->amountIns_lbl->Visible = true;
		this->allins_lbl->Visible = true;
		this->paid_lbl->Visible = true;
		this->overdu_lbl->Visible = true;
		this->forfiet_lbl->Visible = true;
	}
	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}

	private: System::Void ClientInfoFrom_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ str = gcnew String(client->getName().c_str());
		this->name_lbl->Text = str;

		str = gcnew String(client->getLastName().c_str());
		this->lastname_lbl->Text = str;
	
		this->bdate_lbl->Text = client->getbDate().getMonth() + "/" +
			client->getbDate().getDay() + "/" +
			client->getbDate().getYear();

		this->nationalCode_lbl->Text = client->getNatCode().ToString();

		vector<Account*> accountList =  this->client->getAccList();
		for (int i = 0; i < accountList.size(); i++)
			this->account_cmb->Items->Add(accountList[i]->getAccNumber());

		vector<Loan*> loanList = this->client->getLoans();
		for (int i = 0; i < loanList.size(); i++)
			this->loan_cmb->Items->Add(loanList[i]->getSerialNumber());
	}

};
}
