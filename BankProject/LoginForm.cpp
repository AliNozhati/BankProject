#include "LoginForm.h"
#include <array>
using namespace std;

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BankProject::LoginForm login;
	Application::Run(% login);
}