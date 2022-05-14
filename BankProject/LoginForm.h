#pragma once

#include "ClientForm.h"
#include "EmployeeForm.h"
#include "FacilityForm.h"
#include "ManagerForm.h"
#include "Bank.h"
#include <msclr\marshal_cppstd.h>
#include "Manager.h"
#include "Date.h"
#include "Facility.h"
//#include "Exception.h"
using namespace msclr::interop;

namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	///bank//??????
	//Manager* manager = new Manager("iman", "mehranfar", Date(2, 2, 2), 123, "user1234", "user12344", b, 2000, 1000);
	//Facility* facility = new Facility("mahdi", "mmm", Date(2, 2, 2), 456, "alialiali","alialiali", b, 2000, 1000);
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			bank = new Bank("21 Bank", 21);
	//Manager* manager = new Manager("iman", "mehranfarrr", Date(2, 2, 2), 123, "user1234", "user12344", bank, 2000, 0);
	//Facility* facility = new Facility("mahdi", "mmm", Date(2, 2, 2), 456, "alialiali","alialiali", bank, 2000, 0);
	//bank->setManagerAndFacility(manager, facility);
		}

	protected:
		~LoginForm()
		{
			delete bank;
			if (components)
			{

				delete components;
			}
		}

	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::PictureBox^ signin_pic;
	private: System::Windows::Forms::PictureBox^ user_pic;
	private: System::Windows::Forms::PictureBox^ pass_pic;
	private: System::Windows::Forms::TextBox^ user_txt;
	private: System::Windows::Forms::TextBox^ pass_txt;
	private: System::Windows::Forms::Button^ login_btn;
	private: System::Windows::Forms::Button^ register_btn;
	private: System::Windows::Forms::Button^ forget_btn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Bank* bank = nullptr;

	private: System::Windows::Forms::ComboBox^ comboBox;



#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			   this->signin_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->user_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->pass_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->user_txt = (gcnew System::Windows::Forms::TextBox());
			   this->pass_txt = (gcnew System::Windows::Forms::TextBox());
			   this->login_btn = (gcnew System::Windows::Forms::Button());
			   this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->register_btn = (gcnew System::Windows::Forms::Button());
			   this->forget_btn = (gcnew System::Windows::Forms::Button());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->signin_pic))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_pic))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pass_pic))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // signin_pic
			   // 
			   this->signin_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signin_pic.Image")));
			   this->signin_pic->Location = System::Drawing::Point(-3, 12);
			   this->signin_pic->Name = L"signin_pic";
			   this->signin_pic->Size = System::Drawing::Size(395, 90);
			   this->signin_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->signin_pic->TabIndex = 0;
			   this->signin_pic->TabStop = false;
			   // 
			   // user_pic
			   // 
			   this->user_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"user_pic.Image")));
			   this->user_pic->Location = System::Drawing::Point(22, 180);
			   this->user_pic->Name = L"user_pic";
			   this->user_pic->Size = System::Drawing::Size(343, 90);
			   this->user_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->user_pic->TabIndex = 1;
			   this->user_pic->TabStop = false;
			   // 
			   // pass_pic
			   // 
			   this->pass_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pass_pic.Image")));
			   this->pass_pic->Location = System::Drawing::Point(22, 267);
			   this->pass_pic->Name = L"pass_pic";
			   this->pass_pic->Size = System::Drawing::Size(343, 90);
			   this->pass_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pass_pic->TabIndex = 2;
			   this->pass_pic->TabStop = false;
			   // 
			   // user_txt
			   // 
			   this->user_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				   static_cast<System::Int32>(static_cast<System::Byte>(236)));
			   this->user_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->user_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->user_txt->ForeColor = System::Drawing::Color::White;
			   this->user_txt->Location = System::Drawing::Point(94, 208);
			   this->user_txt->Name = L"user_txt";
			   this->user_txt->Size = System::Drawing::Size(235, 27);
			   this->user_txt->TabIndex = 3;
			   // 
			   // pass_txt
			   // 
			   this->pass_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				   static_cast<System::Int32>(static_cast<System::Byte>(236)));
			   this->pass_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->pass_txt->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->pass_txt->ForeColor = System::Drawing::Color::White;
			   this->pass_txt->Location = System::Drawing::Point(94, 297);
			   this->pass_txt->Name = L"pass_txt";
			   this->pass_txt->Size = System::Drawing::Size(235, 24);
			   this->pass_txt->TabIndex = 4;
			   this->pass_txt->UseSystemPasswordChar = true;
			   // 
			   // login_btn
			   // 
			   this->login_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				   static_cast<System::Int32>(static_cast<System::Byte>(236)));
			   this->login_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->login_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->login_btn->ForeColor = System::Drawing::Color::Transparent;
			   this->login_btn->Location = System::Drawing::Point(62, 388);
			   this->login_btn->Name = L"login_btn";
			   this->login_btn->Size = System::Drawing::Size(267, 50);
			   this->login_btn->TabIndex = 5;
			   this->login_btn->Text = L"Login";
			   this->login_btn->UseVisualStyleBackColor = false;
			   this->login_btn->Click += gcnew System::EventHandler(this, &LoginForm::login_btn_Click);
			   // 
			   // comboBox
			   // 
			   this->comboBox->DropDownHeight = 150;
			   this->comboBox->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->comboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				   static_cast<System::Int32>(static_cast<System::Byte>(236)));
			   this->comboBox->FormattingEnabled = true;
			   this->comboBox->IntegralHeight = false;
			   this->comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Client", L"Employee" });
			   this->comboBox->Location = System::Drawing::Point(85, 125);
			   this->comboBox->Name = L"comboBox";
			   this->comboBox->Size = System::Drawing::Size(203, 36);
			   this->comboBox->TabIndex = 6;
			   this->comboBox->Text = L"Role";
			   // 
			   // register_btn
			   // 
			   this->register_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				   static_cast<System::Int32>(static_cast<System::Byte>(236)));
			   this->register_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->register_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->register_btn->ForeColor = System::Drawing::Color::Transparent;
			   this->register_btn->Location = System::Drawing::Point(62, 444);
			   this->register_btn->Name = L"register_btn";
			   this->register_btn->Size = System::Drawing::Size(99, 50);
			   this->register_btn->TabIndex = 7;
			   this->register_btn->Text = L"Register";
			   this->register_btn->UseVisualStyleBackColor = false;
			   this->register_btn->Click += gcnew System::EventHandler(this, &LoginForm::exit_btn_Click);
			   // 
			   // forget_btn
			   // 
			   this->forget_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				   static_cast<System::Int32>(static_cast<System::Byte>(236)));
			   this->forget_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->forget_btn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->forget_btn->ForeColor = System::Drawing::Color::Transparent;
			   this->forget_btn->Location = System::Drawing::Point(167, 444);
			   this->forget_btn->Name = L"forget_btn";
			   this->forget_btn->Size = System::Drawing::Size(162, 50);
			   this->forget_btn->TabIndex = 8;
			   this->forget_btn->Text = L"Forget password";
			   this->forget_btn->UseVisualStyleBackColor = false;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				   static_cast<System::Int32>(static_cast<System::Byte>(236)));
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(305, 290);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(36, 36);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 9;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &LoginForm::pictureBox1_MouseLeave);
			   this->pictureBox1->MouseHover += gcnew System::EventHandler(this, &LoginForm::pictureBox1_MouseHover);
			   // 
			   // LoginForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			   this->BackColor = System::Drawing::Color::White;
			   this->ClientSize = System::Drawing::Size(390, 514);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->forget_btn);
			   this->Controls->Add(this->register_btn);
			   this->Controls->Add(this->comboBox);
			   this->Controls->Add(this->login_btn);
			   this->Controls->Add(this->pass_txt);
			   this->Controls->Add(this->user_txt);
			   this->Controls->Add(this->pass_pic);
			   this->Controls->Add(this->user_pic);
			   this->Controls->Add(this->signin_pic);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"LoginForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"21 Bank";
			   this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->signin_pic))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_pic))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pass_pic))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		string user = marshal_as <std::string>(this->user_txt->Text);
		string pass = marshal_as <std::string>(this->pass_txt->Text);

		if (comboBox->Text == "Employee")
		{
			Facility* fac = bank->getFacility(user, pass);
			if (fac != nullptr)
			{
				FacilityForm^ form = gcnew FacilityForm(fac);
				this->Hide();
				form->ShowDialog();
				this->Show();
			}
			else
			{
				Manager* mngr = bank->getManager(user, pass);
				if (mngr != nullptr)
				{
					ManagerForm^ form = gcnew ManagerForm(mngr);
					this->Hide();
					form->ShowDialog();
					this->Show();
				}
				else
				{
					Employee* emp = bank->getEmployee(user, pass);
					if (emp != nullptr)
					{
						EmployeeForm^ form = gcnew EmployeeForm(emp);
						this->Hide();
						form->ShowDialog();
						this->Show();
					}
					else
						MessageBox::Show("Inccorct information", "warnning");
				}
			}
		}
		else if (comboBox->Text == "Client")
		{
			Client* client = bank->getClient(user, pass);
			if (client != nullptr)
			{
				ClientForm^ form = gcnew ClientForm(client);
				this->Hide();
				form->ShowDialog();
				this->Show();
			}
			else
				MessageBox::Show("Inccorct information", "warnning");
		}
		else
			MessageBox::Show("Please first choose a role!", "warning");
	}
	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
	private: System::Void pictureBox1_MouseHover(System::Object^ sender, System::EventArgs^ e)
	{
		this->pass_txt->UseSystemPasswordChar = false;
	}
	private: System::Void pictureBox1_MouseLeave(System::Object^ sender, System::EventArgs^ e)
	{
		this->pass_txt->UseSystemPasswordChar = true;
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
