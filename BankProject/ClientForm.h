#pragma once

#include "WithdrawForm.h"
#include "DepositForm.h"
#include "RequestLoanForm.h"
#include "ChangePassForm.h"
#include "ClientInfoFrom.h"
#include "Client.h"

#include <iostream>

namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for ClientForm
	/// </summary>
	public ref class ClientForm : public System::Windows::Forms::Form
	{
	public:
		ClientForm(Client* c)
		{
			InitializeComponent();
			client = c;
			//this->name_lbl->Text = s.ToString();
			//MessageBox::Show(client.ToString());
			//
			//TODO: Add the constructor code here
			//
		}
		//void setClient(int a) { client = a; }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::Label^ hi_lbl;

	private: System::Windows::Forms::Button^ withdraw_btn;
	private: System::Windows::Forms::Button^ deposit_btn;
	private: System::Windows::Forms::Button^ loan_btn;
	private: System::Windows::Forms::Button^ info_btn;
	private: System::Windows::Forms::Button^ changePass_btn;
	private: System::Windows::Forms::Button^ support_btn;
	private: System::Windows::Forms::PictureBox^ back_pic;
	private: Client* client = nullptr;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientForm::typeid));
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->hi_lbl = (gcnew System::Windows::Forms::Label());
			this->withdraw_btn = (gcnew System::Windows::Forms::Button());
			this->deposit_btn = (gcnew System::Windows::Forms::Button());
			this->loan_btn = (gcnew System::Windows::Forms::Button());
			this->info_btn = (gcnew System::Windows::Forms::Button());
			this->changePass_btn = (gcnew System::Windows::Forms::Button());
			this->support_btn = (gcnew System::Windows::Forms::Button());
			this->back_pic = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 20, System::Drawing::FontStyle::Bold));
			this->name_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->name_lbl->Location = System::Drawing::Point(103, 74);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(269, 46);
			this->name_lbl->TabIndex = 0;
			this->name_lbl->Text = L"Name Lastname";
			// 
			// hi_lbl
			// 
			this->hi_lbl->AutoSize = true;
			this->hi_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->hi_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hi_lbl->ForeColor = System::Drawing::Color::White;
			this->hi_lbl->Location = System::Drawing::Point(52, 77);
			this->hi_lbl->Name = L"hi_lbl";
			this->hi_lbl->Size = System::Drawing::Size(48, 41);
			this->hi_lbl->TabIndex = 1;
			this->hi_lbl->Text = L"Hi";
			// 
			// withdraw_btn
			// 
			this->withdraw_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->withdraw_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdraw_btn->ForeColor = System::Drawing::Color::White;
			this->withdraw_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"withdraw_btn.Image")));
			this->withdraw_btn->Location = System::Drawing::Point(50, 148);
			this->withdraw_btn->Name = L"withdraw_btn";
			this->withdraw_btn->Size = System::Drawing::Size(153, 130);
			this->withdraw_btn->TabIndex = 2;
			this->withdraw_btn->Text = L"Withdraw";
			this->withdraw_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->withdraw_btn->UseVisualStyleBackColor = false;
			this->withdraw_btn->Click += gcnew System::EventHandler(this, &ClientForm::withdraw_btn_Click);
			// 
			// deposit_btn
			// 
			this->deposit_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->deposit_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deposit_btn->ForeColor = System::Drawing::Color::White;
			this->deposit_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deposit_btn.Image")));
			this->deposit_btn->Location = System::Drawing::Point(218, 148);
			this->deposit_btn->Name = L"deposit_btn";
			this->deposit_btn->Size = System::Drawing::Size(153, 130);
			this->deposit_btn->TabIndex = 3;
			this->deposit_btn->Text = L"Deposit";
			this->deposit_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->deposit_btn->UseVisualStyleBackColor = false;
			this->deposit_btn->Click += gcnew System::EventHandler(this, &ClientForm::deposit_btn_Click);
			// 
			// loan_btn
			// 
			this->loan_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->loan_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loan_btn->ForeColor = System::Drawing::Color::White;
			this->loan_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loan_btn.Image")));
			this->loan_btn->Location = System::Drawing::Point(50, 295);
			this->loan_btn->Name = L"loan_btn";
			this->loan_btn->Size = System::Drawing::Size(153, 130);
			this->loan_btn->TabIndex = 4;
			this->loan_btn->Text = L"Request Loan";
			this->loan_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->loan_btn->UseVisualStyleBackColor = false;
			this->loan_btn->Click += gcnew System::EventHandler(this, &ClientForm::loan_btn_Click);
			// 
			// info_btn
			// 
			this->info_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->info_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->info_btn->ForeColor = System::Drawing::Color::White;
			this->info_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"info_btn.Image")));
			this->info_btn->Location = System::Drawing::Point(218, 295);
			this->info_btn->Name = L"info_btn";
			this->info_btn->Size = System::Drawing::Size(153, 130);
			this->info_btn->TabIndex = 5;
			this->info_btn->Text = L"My Information";
			this->info_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->info_btn->UseVisualStyleBackColor = false;
			this->info_btn->Click += gcnew System::EventHandler(this, &ClientForm::info_btn_Click);
			// 
			// changePass_btn
			// 
			this->changePass_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->changePass_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changePass_btn->ForeColor = System::Drawing::Color::White;
			this->changePass_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"changePass_btn.Image")));
			this->changePass_btn->Location = System::Drawing::Point(50, 441);
			this->changePass_btn->Name = L"changePass_btn";
			this->changePass_btn->Size = System::Drawing::Size(153, 130);
			this->changePass_btn->TabIndex = 6;
			this->changePass_btn->Text = L"Change Password";
			this->changePass_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->changePass_btn->UseVisualStyleBackColor = false;
			this->changePass_btn->Click += gcnew System::EventHandler(this, &ClientForm::changePass_btn_Click);
			// 
			// support_btn
			// 
			this->support_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->support_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->support_btn->ForeColor = System::Drawing::Color::White;
			this->support_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"support_btn.Image")));
			this->support_btn->Location = System::Drawing::Point(218, 441);
			this->support_btn->Name = L"support_btn";
			this->support_btn->Size = System::Drawing::Size(153, 130);
			this->support_btn->TabIndex = 7;
			this->support_btn->Text = L"Support";
			this->support_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->support_btn->UseVisualStyleBackColor = false;
			this->support_btn->Click += gcnew System::EventHandler(this, &ClientForm::support_btn_Click);
			// 
			// back_pic
			// 
			this->back_pic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pic.Image")));
			this->back_pic->Location = System::Drawing::Point(395, 0);
			this->back_pic->Name = L"back_pic";
			this->back_pic->Size = System::Drawing::Size(25, 46);
			this->back_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->back_pic->TabIndex = 8;
			this->back_pic->TabStop = false;
			this->back_pic->Click += gcnew System::EventHandler(this, &ClientForm::back_pic_Click);
			// 
			// ClientForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(422, 597);
			this->Controls->Add(this->back_pic);
			this->Controls->Add(this->support_btn);
			this->Controls->Add(this->changePass_btn);
			this->Controls->Add(this->info_btn);
			this->Controls->Add(this->loan_btn);
			this->Controls->Add(this->deposit_btn);
			this->Controls->Add(this->withdraw_btn);
			this->Controls->Add(this->hi_lbl);
			this->Controls->Add(this->name_lbl);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ClientForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"21 Bank";
			this->Load += gcnew System::EventHandler(this, &ClientForm::ClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void back_pic_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
		   // Support
	private: System::Void support_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Call with this number : \n 021-212212", "help and support");
	}
		   //withdraw
	private: System::Void withdraw_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		WithdrawForm^ form = gcnew WithdrawForm(client);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
		   //deposit
	private: System::Void deposit_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DepositForm^ form = gcnew DepositForm(client);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
		   //request loan
	private: System::Void loan_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RequestLoanForm^ form = gcnew RequestLoanForm(client);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void changePass_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ChangePassForm^ form = gcnew ChangePassForm(client);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}

	private: System::Void info_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClientInfoFrom^ form = gcnew ClientInfoFrom(client);
		this->Hide();
		form->ShowDialog();
		this->Show();
	}
	private: System::Void ClientForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ str = gcnew String((this->client->getName() + " " + this->client->getLastName()).c_str());
		this->name_lbl->Text = str;
	}
};
}
