#pragma once
#include "Facility.h"

namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeactiveForm
	/// </summary>
	public ref class DeactiveForm : public System::Windows::Forms::Form
	{
	public:
		DeactiveForm(Facility* f)
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
		~DeactiveForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ deactive_btn;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ nationalCode_txt;
	private: Facility* facility = nullptr;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeactiveForm::typeid));
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->deactive_btn = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->nationalCode_txt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cancel_btn
			// 
			this->cancel_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::Color::White;
			this->cancel_btn->Location = System::Drawing::Point(258, 145);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(156, 55);
			this->cancel_btn->TabIndex = 45;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &DeactiveForm::cancel_btn_Click);
			// 
			// deactive_btn
			// 
			this->deactive_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->deactive_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deactive_btn->ForeColor = System::Drawing::Color::White;
			this->deactive_btn->Location = System::Drawing::Point(84, 145);
			this->deactive_btn->Name = L"deactive_btn";
			this->deactive_btn->Size = System::Drawing::Size(156, 55);
			this->deactive_btn->TabIndex = 44;
			this->deactive_btn->Text = L"Deactive";
			this->deactive_btn->UseVisualStyleBackColor = false;
			this->deactive_btn->Click += gcnew System::EventHandler(this, &DeactiveForm::deactive_btn_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Location = System::Drawing::Point(35, 62);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(205, 28);
			this->lbl1->TabIndex = 43;
			this->lbl1->Text = L"Enter national code : ";
			// 
			// nationalCode_txt
			// 
			this->nationalCode_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->nationalCode_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nationalCode_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nationalCode_txt->ForeColor = System::Drawing::Color::White;
			this->nationalCode_txt->Location = System::Drawing::Point(253, 55);
			this->nationalCode_txt->Name = L"nationalCode_txt";
			this->nationalCode_txt->Size = System::Drawing::Size(218, 41);
			this->nationalCode_txt->TabIndex = 42;
			this->nationalCode_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DeactiveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(487, 254);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->deactive_btn);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->nationalCode_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DeactiveForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void deactive_btn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int64_t natCode = int64_t::Parse(this->nationalCode_txt->Text);
		facility->deActivateAllAcc(natCode);
		MessageBox::Show("All Accounts deactivated.", "deactive");
		this->Close();
	}
	private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
};
}
