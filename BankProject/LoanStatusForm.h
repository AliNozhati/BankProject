#pragma once
#include "Facility.h"
#include "Loan.h"
namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoanStatusForm
	/// </summary>
	public ref class LoanStatusForm : public System::Windows::Forms::Form
	{
	public:
		LoanStatusForm(Facility* f)
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
		~LoanStatusForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl8;
	private: System::Windows::Forms::Label^ overdu_lbl;
	private: System::Windows::Forms::Label^ lbl7;
	private: System::Windows::Forms::Label^ paid_lbl;
	private: System::Windows::Forms::Label^ lbl6;
	private: System::Windows::Forms::Label^ allins_lbl;
	private: System::Windows::Forms::Label^ lbl5;
	private: System::Windows::Forms::Label^ amountIns_lbl;
	private: System::Windows::Forms::Label^ interset_lbl;
	private: System::Windows::Forms::Label^ lbl4;
	private: System::Windows::Forms::Label^ loanAmount_lbl;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::Label^ reDate_lbl;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ AccNum_lbl;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ loanNumber_txt;


	private: System::Windows::Forms::Button^ search_btn;
	private: System::Windows::Forms::PictureBox^ back_pic;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::Label^ lastname_lbl;

	private: Facility* facility = nullptr;
	private: System::Windows::Forms::Label^ lbl9;
	private: System::Windows::Forms::Label^ forfiet_lbl;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoanStatusForm::typeid));
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->overdu_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->paid_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->allins_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->amountIns_lbl = (gcnew System::Windows::Forms::Label());
			this->interset_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->loanAmount_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->reDate_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->AccNum_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->loanNumber_txt = (gcnew System::Windows::Forms::TextBox());
			this->search_btn = (gcnew System::Windows::Forms::Button());
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->lastname_lbl = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->forfiet_lbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->BackColor = System::Drawing::Color::White;
			this->lbl8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl8->Location = System::Drawing::Point(57, 567);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(239, 31);
			this->lbl8->TabIndex = 56;
			this->lbl8->Text = L"Overdu installments : ";
			// 
			// overdu_lbl
			// 
			this->overdu_lbl->AutoSize = true;
			this->overdu_lbl->BackColor = System::Drawing::Color::White;
			this->overdu_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->overdu_lbl->ForeColor = System::Drawing::Color::Black;
			this->overdu_lbl->Location = System::Drawing::Point(349, 567);
			this->overdu_lbl->Name = L"overdu_lbl";
			this->overdu_lbl->Size = System::Drawing::Size(23, 31);
			this->overdu_lbl->TabIndex = 57;
			this->overdu_lbl->Text = L"1";
			this->overdu_lbl->Visible = false;
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->BackColor = System::Drawing::Color::White;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl7->Location = System::Drawing::Point(57, 519);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(207, 31);
			this->lbl7->TabIndex = 54;
			this->lbl7->Text = L"Paid installments : ";
			// 
			// paid_lbl
			// 
			this->paid_lbl->AutoSize = true;
			this->paid_lbl->BackColor = System::Drawing::Color::White;
			this->paid_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paid_lbl->ForeColor = System::Drawing::Color::Black;
			this->paid_lbl->Location = System::Drawing::Point(349, 519);
			this->paid_lbl->Name = L"paid_lbl";
			this->paid_lbl->Size = System::Drawing::Size(27, 31);
			this->paid_lbl->TabIndex = 55;
			this->paid_lbl->Text = L"2";
			this->paid_lbl->Visible = false;
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->BackColor = System::Drawing::Color::White;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl6->Location = System::Drawing::Point(57, 472);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(173, 31);
			this->lbl6->TabIndex = 52;
			this->lbl6->Text = L"All installment :";
			// 
			// allins_lbl
			// 
			this->allins_lbl->AutoSize = true;
			this->allins_lbl->BackColor = System::Drawing::Color::White;
			this->allins_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->allins_lbl->ForeColor = System::Drawing::Color::Black;
			this->allins_lbl->Location = System::Drawing::Point(349, 472);
			this->allins_lbl->Name = L"allins_lbl";
			this->allins_lbl->Size = System::Drawing::Size(27, 31);
			this->allins_lbl->TabIndex = 53;
			this->allins_lbl->Text = L"5";
			this->allins_lbl->Visible = false;
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->BackColor = System::Drawing::Color::White;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl5->Location = System::Drawing::Point(57, 425);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(229, 31);
			this->lbl5->TabIndex = 50;
			this->lbl5->Text = L"Amount installment :";
			// 
			// amountIns_lbl
			// 
			this->amountIns_lbl->AutoSize = true;
			this->amountIns_lbl->BackColor = System::Drawing::Color::White;
			this->amountIns_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amountIns_lbl->ForeColor = System::Drawing::Color::Black;
			this->amountIns_lbl->Location = System::Drawing::Point(349, 425);
			this->amountIns_lbl->Name = L"amountIns_lbl";
			this->amountIns_lbl->Size = System::Drawing::Size(75, 31);
			this->amountIns_lbl->TabIndex = 51;
			this->amountIns_lbl->Text = L"10000";
			this->amountIns_lbl->Visible = false;
			// 
			// interset_lbl
			// 
			this->interset_lbl->AutoSize = true;
			this->interset_lbl->BackColor = System::Drawing::Color::White;
			this->interset_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->interset_lbl->ForeColor = System::Drawing::Color::Black;
			this->interset_lbl->Location = System::Drawing::Point(349, 375);
			this->interset_lbl->Name = L"interset_lbl";
			this->interset_lbl->Size = System::Drawing::Size(79, 31);
			this->interset_lbl->TabIndex = 49;
			this->interset_lbl->Text = L"50000";
			this->interset_lbl->Visible = false;
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->BackColor = System::Drawing::Color::White;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl4->Location = System::Drawing::Point(57, 375);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(160, 31);
			this->lbl4->TabIndex = 48;
			this->lbl4->Text = L"Loan interest :";
			// 
			// loanAmount_lbl
			// 
			this->loanAmount_lbl->AutoSize = true;
			this->loanAmount_lbl->BackColor = System::Drawing::Color::White;
			this->loanAmount_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanAmount_lbl->ForeColor = System::Drawing::Color::Black;
			this->loanAmount_lbl->Location = System::Drawing::Point(349, 325);
			this->loanAmount_lbl->Name = L"loanAmount_lbl";
			this->loanAmount_lbl->Size = System::Drawing::Size(131, 31);
			this->loanAmount_lbl->TabIndex = 47;
			this->loanAmount_lbl->Text = L"200000000";
			this->loanAmount_lbl->Visible = false;
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->BackColor = System::Drawing::Color::White;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl3->Location = System::Drawing::Point(57, 325);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(168, 31);
			this->lbl3->TabIndex = 46;
			this->lbl3->Text = L"Loan amount : ";
			// 
			// reDate_lbl
			// 
			this->reDate_lbl->AutoSize = true;
			this->reDate_lbl->BackColor = System::Drawing::Color::White;
			this->reDate_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reDate_lbl->ForeColor = System::Drawing::Color::Black;
			this->reDate_lbl->Location = System::Drawing::Point(349, 279);
			this->reDate_lbl->Name = L"reDate_lbl";
			this->reDate_lbl->Size = System::Drawing::Size(108, 31);
			this->reDate_lbl->TabIndex = 45;
			this->reDate_lbl->Text = L"1390/8/5";
			this->reDate_lbl->Visible = false;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->BackColor = System::Drawing::Color::White;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl2->Location = System::Drawing::Point(57, 279);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(177, 31);
			this->lbl2->TabIndex = 44;
			this->lbl2->Text = L"Recieved date : ";
			// 
			// AccNum_lbl
			// 
			this->AccNum_lbl->AutoSize = true;
			this->AccNum_lbl->BackColor = System::Drawing::Color::White;
			this->AccNum_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccNum_lbl->ForeColor = System::Drawing::Color::Black;
			this->AccNum_lbl->Location = System::Drawing::Point(349, 234);
			this->AccNum_lbl->Name = L"AccNum_lbl";
			this->AccNum_lbl->Size = System::Drawing::Size(75, 31);
			this->AccNum_lbl->TabIndex = 43;
			this->AccNum_lbl->Text = L"12345";
			this->AccNum_lbl->Visible = false;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->BackColor = System::Drawing::Color::White;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Location = System::Drawing::Point(57, 234);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(204, 31);
			this->lbl1->TabIndex = 42;
			this->lbl1->Text = L"Account number : ";
			// 
			// loanNumber_txt
			// 
			this->loanNumber_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->loanNumber_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->loanNumber_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loanNumber_txt->ForeColor = System::Drawing::Color::White;
			this->loanNumber_txt->Location = System::Drawing::Point(93, 43);
			this->loanNumber_txt->Name = L"loanNumber_txt";
			this->loanNumber_txt->Size = System::Drawing::Size(218, 31);
			this->loanNumber_txt->TabIndex = 59;
			this->loanNumber_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// search_btn
			// 
			this->search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->search_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_btn->ForeColor = System::Drawing::Color::White;
			this->search_btn->Location = System::Drawing::Point(317, 44);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(92, 31);
			this->search_btn->TabIndex = 60;
			this->search_btn->Text = L"search";
			this->search_btn->UseVisualStyleBackColor = false;
			this->search_btn->Click += gcnew System::EventHandler(this, &LoanStatusForm::search_btn_Click);
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(472, 5);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(29, 48);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 61;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &LoanStatusForm::back_pic_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->name_lbl);
			this->panel1->Controls->Add(this->lastname_lbl);
			this->panel1->Location = System::Drawing::Point(0, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(521, 82);
			this->panel1->TabIndex = 62;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(26, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 23);
			this->label1->TabIndex = 63;
			this->label1->Text = L"name : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(255, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 23);
			this->label2->TabIndex = 64;
			this->label2->Text = L"lastname : ";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_lbl->ForeColor = System::Drawing::Color::Black;
			this->name_lbl->Location = System::Drawing::Point(125, 27);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(76, 31);
			this->name_lbl->TabIndex = 65;
			this->name_lbl->Text = L"Name";
			// 
			// lastname_lbl
			// 
			this->lastname_lbl->AutoSize = true;
			this->lastname_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname_lbl->ForeColor = System::Drawing::Color::Black;
			this->lastname_lbl->Location = System::Drawing::Point(354, 27);
			this->lastname_lbl->Name = L"lastname_lbl";
			this->lastname_lbl->Size = System::Drawing::Size(112, 31);
			this->lastname_lbl->TabIndex = 66;
			this->lastname_lbl->Text = L"Lastname";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->label10->Location = System::Drawing::Point(120, 19);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 25);
			this->label10->TabIndex = 58;
			this->label10->Text = L"loan serial number ";
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->BackColor = System::Drawing::Color::White;
			this->lbl9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl9->Location = System::Drawing::Point(57, 613);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(101, 31);
			this->lbl9->TabIndex = 63;
			this->lbl9->Text = L"Forfiet : ";
			// 
			// forfiet_lbl
			// 
			this->forfiet_lbl->AutoSize = true;
			this->forfiet_lbl->BackColor = System::Drawing::Color::White;
			this->forfiet_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forfiet_lbl->ForeColor = System::Drawing::Color::Black;
			this->forfiet_lbl->Location = System::Drawing::Point(349, 613);
			this->forfiet_lbl->Name = L"forfiet_lbl";
			this->forfiet_lbl->Size = System::Drawing::Size(62, 31);
			this->forfiet_lbl->TabIndex = 64;
			this->forfiet_lbl->Text = L"1000";
			this->forfiet_lbl->Visible = false;
			// 
			// LoanStatusForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(511, 673);
			this->Controls->Add(this->lbl9);
			this->Controls->Add(this->forfiet_lbl);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->back_pic);
			this->Controls->Add(this->search_btn);
			this->Controls->Add(this->loanNumber_txt);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lbl8);
			this->Controls->Add(this->overdu_lbl);
			this->Controls->Add(this->lbl7);
			this->Controls->Add(this->paid_lbl);
			this->Controls->Add(this->lbl6);
			this->Controls->Add(this->allins_lbl);
			this->Controls->Add(this->lbl5);
			this->Controls->Add(this->amountIns_lbl);
			this->Controls->Add(this->interset_lbl);
			this->Controls->Add(this->lbl4);
			this->Controls->Add(this->loanAmount_lbl);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->reDate_lbl);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->AccNum_lbl);
			this->Controls->Add(this->lbl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoanStatusForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}

	private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int64_t loanNumber = int64_t::Parse(this->loanNumber_txt->Text);
		Loan loan = facility->viewLoanStatus(loanNumber);

		this->AccNum_lbl->Text = loan.getAccNumber().ToString();
		this->reDate_lbl->Text = loan.getDateReceived().getMonth() + "/" + loan.getDateReceived().getDay() + "/" + loan.getDateReceived().getYear();
		this->loanAmount_lbl->Text = loan.getLoanAmount().ToString();
		this->interset_lbl->Text = loan.getLoanInterest().ToString();
		this->amountIns_lbl->Text = loan.getAmountInstallments().ToString();
		this->allins_lbl->Text = loan.getAllInstallments().ToString();
		this->paid_lbl->Text = loan.getPaidInstallments().ToString();
		this->overdu_lbl->Text = loan.getOverdueInstallments().ToString();
		this->forfiet_lbl->Text = loan.getForfeit().ToString();

		this->AccNum_lbl->Visible = true;
		this->reDate_lbl->Visible = true;
		this->loanAmount_lbl->Visible = true;
		this->interset_lbl->Visible = true;
		this->amountIns_lbl->Visible = true;
		this->allins_lbl->Visible = true;
		this->paid_lbl->Visible = true;
		this->overdu_lbl->Visible = true;
		this->forfiet_lbl->Visible = true;
	}
};
}
