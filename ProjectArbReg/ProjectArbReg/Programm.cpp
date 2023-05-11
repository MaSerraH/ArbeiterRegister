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
		}




		break;

	}

}