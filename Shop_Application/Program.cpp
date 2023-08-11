
#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ShopApplication::LoginForm loginform;
	
	
	loginform.ShowDialog();
	User^ user = loginform.user;

	if (user != nullptr) {
		//MessageBox::Show("Login Success", "Program.cpp", MessageBoxButtons::OK);
		ShopApplication::MainForm mainform(user);
		Application::Run(% mainform);
	}

	return 0;
}
