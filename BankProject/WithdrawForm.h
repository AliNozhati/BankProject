#pragma once
#include "Client.h"
namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WithdrawForm
	/// </summary>
	public ref class WithdrawForm : public System::Windows::Forms::Form
	{
	public:
		WithdrawForm(Client* c)
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
		~WithdrawForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ accNum_txt;
	private: System::Windows::Forms::Label^ accNum_lbl;
	private: System::Windows::Forms::Label^ amount_lbl;
	private: System::Windows::Forms::TextBox^ amount_txt;
	private: System::Windows::Forms::Button^ withdraw_btn;
	private: System::Windows::Forms::Button^ cancel_btn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WithdrawForm::typeid));
			this->accNum_txt = (gcnew System::Windows::Forms::TextBox());
			this->accNum_lbl = (gcnew System::Windows::Forms::Label());
			this->amount_lbl = (gcnew System::Windows::Forms::Label());
			this->amount_txt = (gcnew System::Windows::Forms::TextBox());
			this->withdraw_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// accNum_txt
			// 
			this->accNum_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->accNum_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->accNum_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accNum_txt->ForeColor = System::Drawing::Color::White;
			this->accNum_txt->Location = System::Drawing::Point(211, 41);
			this->accNum_txt->Name = L"accNum_txt";
			this->accNum_txt->Size = System::Drawing::Size(224, 41);
			this->accNum_txt->TabIndex = 0;
			this->accNum_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// accNum_lbl
			// 
			this->accNum_lbl->AutoSize = true;
			this->accNum_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accNum_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->accNum_lbl->Location = System::Drawing::Point(24, 48);
			this->accNum_lbl->Name = L"accNum_lbl";
			this->accNum_lbl->Size = System::Drawing::Size(181, 28);
			this->accNum_lbl->TabIndex = 2;
			this->accNum_lbl->Text = L"Account number : ";
			// 
			// amount_lbl
			// 
			this->amount_lbl->AutoSize = true;
			this->amount_lbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->amount_lbl->Location = System::Drawing::Point(24, 113);
			this->amount_lbl->Name = L"amount_lbl";
			this->amount_lbl->Size = System::Drawing::Size(103, 28);
			this->amount_lbl->TabIndex = 4;
			this->amount_lbl->Text = L"Amount : ";
			// 
			// amount_txt
			// 
			this->amount_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->amount_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->amount_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount_txt->ForeColor = System::Drawing::Color::White;
			this->amount_txt->Location = System::Drawing::Point(211, 106);
			this->amount_txt->Name = L"amount_txt";
			this->amount_txt->Size = System::Drawing::Size(224, 41);
			this->amount_txt->TabIndex = 3;
			this->amount_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// withdraw_btn
			// 
			this->withdraw_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->withdraw_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdraw_btn->ForeColor = System::Drawing::Color::White;
			this->withdraw_btn->Location = System::Drawing::Point(71, 234);
			this->withdraw_btn->Name = L"withdraw_btn";
			this->withdraw_btn->Size = System::Drawing::Size(156, 55);
			this->withdraw_btn->TabIndex = 5;
			this->withdraw_btn->Text = L"Withdraw";
			this->withdraw_btn->UseVisualStyleBackColor = false;
			this->withdraw_btn->Click += gcnew System::EventHandler(this, &WithdrawForm::withdraw_btn_Click);
			// 
			// cancel_btn
			// 
			this->cancel_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::Color::White;
			this->cancel_btn->Location = System::Drawing::Point(245, 234);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(156, 55);
			this->cancel_btn->TabIndex = 6;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &WithdrawForm::cancel_btn_Click);
			// 
			// WithdrawForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(487, 323);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->withdraw_btn);
			this->Controls->Add(this->amount_lbl);
			this->Controls->Add(this->amount_txt);
			this->Controls->Add(this->accNum_lbl);
			this->Controls->Add(this->accNum_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"WithdrawForm";
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
	private: System::Void withdraw_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// withdraw
		int64_t accnumber = int64_t::Parse(this->accNum_txt->Text);
		int64_t amount = int64_t::Parse(this->amount_txt->Text);
		this->client->withdraw(accnumber,amount);
	//	MessageBox::Show("Withdrew successful.", "withdrow");
		this->Close();
	}
};
}
