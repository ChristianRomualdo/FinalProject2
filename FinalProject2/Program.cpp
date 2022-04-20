#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FinalProject2::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		/*MessageBox::Show("seccessfull Authentication Of " + user->name,
			"Program.cpp", MessageBoxButtons::OK);*/
		FinalProject2::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication Canceled", 
			"Program.cpp", MessageBoxButtons::OK);
	}


}