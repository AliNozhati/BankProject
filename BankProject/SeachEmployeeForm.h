#pragma once
# include "EmployeeInfoForm.h"
#include"Manager.h" 
#include"Employee.h"
namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SeachEmployeeForm
	/// </summary>
	public ref class SeachEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		SeachEmployeeForm(Manager* m)
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
		~SeachEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancel_btn;
	protected:
	private: System::Windows::Forms::Button^ search_btn;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::TextBox^ perNum_txt;

	private: Manager* manager = nullptr;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SeachEmployeeForm::typeid));
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->search_btn = (gcnew System::Windows::Forms::Button());
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
			this->cancel_btn->Location = System::Drawing::Point(262, 145);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(156, 55);
			this->cancel_btn->TabIndex = 37;
			this->cancel_btn->Text = L"Cancel";
			this->cancel_btn->UseVisualStyleBackColor = false;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &SeachEmployeeForm::cancel_btn_Click);
			// 
			// search_btn
			// 
			this->search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->search_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_btn->ForeColor = System::Drawing::Color::White;
			this->search_btn->Location = System::Drawing::Point(88, 145);
			this->search_btn->Name = L"search_btn";
			this->search_btn->Size = System::Drawing::Size(156, 55);
			this->search_btn->TabIndex = 36;
			this->search_btn->Text = L"Search";
			this->search_btn->UseVisualStyleBackColor = false;
			this->search_btn->Click += gcnew System::EventHandler(this, &SeachEmployeeForm::search_btn_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->lbl1->Location = System::Drawing::Point(12, 62);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(241, 28);
			this->lbl1->TabIndex = 35;
			this->lbl1->Text = L"Enter perssonal number :";
			// 
			// perNum_txt
			// 
			this->perNum_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->perNum_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->perNum_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perNum_txt->ForeColor = System::Drawing::Color::White;
			this->perNum_txt->Location = System::Drawing::Point(256, 55);
			this->perNum_txt->Name = L"perNum_txt";
			this->perNum_txt->Size = System::Drawing::Size(218, 41);
			this->perNum_txt->TabIndex = 34;
			this->perNum_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SeachEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(501, 254);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->search_btn);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->perNum_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SeachEmployeeForm";
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
	private: System::Void search_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int64_t perNum = int64_t::Parse(this->perNum_txt->Text);
		Employee* employee = manager->showInfEmp(perNum);

		if (employee != nullptr)
		{
			EmployeeInfoForm^ form = gcnew EmployeeInfoForm(employee);
			this->Hide();
			form->ShowDialog();
			this->Close();
		}
	}
};
}
