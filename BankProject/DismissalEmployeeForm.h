#pragma once
#include "Manager.h"
namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DismissalEmployeeForm
	/// </summary>
	public ref class DismissalEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		DismissalEmployeeForm(Manager* m)
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
		~DismissalEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancel_btn;
	private: System::Windows::Forms::Button^ dismiss_btn;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ perNum_txt;

	private: Manager* manager;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DismissalEmployeeForm::typeid));
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->dismiss_btn = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->perNum_txt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cancel_btn
			// 
			this->cancel_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::Color::White;
			this->cancel_btn->Location = System::Drawing::Point(261, 157);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(156, 55);
			this->cancel_btn->TabIndex = 41;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &DismissalEmployeeForm::cancel_btn_Click);
			// 
			// dismiss_btn
			// 
			this->dismiss_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->dismiss_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dismiss_btn->ForeColor = System::Drawing::Color::White;
			this->dismiss_btn->Location = System::Drawing::Point(87, 157);
			this->dismiss_btn->Name = L"dismiss_btn";
			this->dismiss_btn->Size = System::Drawing::Size(156, 55);
			this->dismiss_btn->TabIndex = 40;
			this->dismiss_btn->Text = L"Dismiss";
			this->dismiss_btn->UseVisualStyleBackColor = false;
			this->dismiss_btn->Click += gcnew System::EventHandler(this, &DismissalEmployeeForm::dismiss_btn_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Location = System::Drawing::Point(12, 68);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(245, 28);
			this->lbl1->TabIndex = 39;
			this->lbl1->Text = L"Enter personnel number :";
			// 
			// perNum_txt
			// 
			this->perNum_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->perNum_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->perNum_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perNum_txt->ForeColor = System::Drawing::Color::White;
			this->perNum_txt->Location = System::Drawing::Point(262, 61);
			this->perNum_txt->Name = L"perNum_txt";
			this->perNum_txt->Size = System::Drawing::Size(218, 41);
			this->perNum_txt->TabIndex = 38;
			this->perNum_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DismissalEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(506, 254);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->dismiss_btn);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->perNum_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DismissalEmployeeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"21 Bank";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void dismiss_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int64_t perNum = int64_t::Parse(this->perNum_txt->Text);
		manager->DismissalEmployee(perNum);
		this->Close();
	}
};
}
