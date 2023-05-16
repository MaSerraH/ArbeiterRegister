#include "Headers.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	while (true)
	{

		ProjectArbReg::mainForm mainform;
		mainform.ShowDialog();

		if (mainform.To_adminRegForm)
		{
			ProjectArbReg::AdminRegForm adminRegForm;
			adminRegForm.ShowDialog();
			if (adminRegForm.back_toMain)
			{
				continue;
			}

		}
		if (mainform.To_adminLogForm)
		{
			ProjectArbReg::AdminLogForm adminLogForm;
			adminLogForm.ShowDialog(); 
			Admin^ admin = adminLogForm.admin;
			if (adminLogForm.back_ToMain)
			{
				continue;
			}
			if (adminLogForm.back_ToLogin)
			{
				adminLogForm.ShowDialog();
			}
			if (admin!=nullptr)
			{
				ProjectArbReg::RegisterForm registerForm;
				registerForm.ShowDialog();
				if (registerForm.backToMain)
				{
					continue;
				}

			}

		}



		break;

	}

}