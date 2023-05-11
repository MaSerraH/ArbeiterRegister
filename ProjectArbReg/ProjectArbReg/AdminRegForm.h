#pragma once


namespace ProjectArbReg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SqlClient;
	using namespace Sql;

	/// <summary>
	/// Summary for AdminRegForm
	/// </summary>
	public ref class AdminRegForm : public System::Windows::Forms::Form
	{
	public:
		AdminRegForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminRegForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb1;
	private: System::Windows::Forms::TextBox^ tb2;
	private: System::Windows::Forms::Button^ btn_register;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminRegForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_register = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// tb1
			// 
			resources->ApplyResources(this->tb1, L"tb1");
			this->tb1->Name = L"tb1";
			// 
			// tb2
			// 
			resources->ApplyResources(this->tb2, L"tb2");
			this->tb2->Name = L"tb2";
			// 
			// btn_register
			// 
			resources->ApplyResources(this->btn_register, L"btn_register");
			this->btn_register->Name = L"btn_register";
			this->btn_register->UseVisualStyleBackColor = true;
			this->btn_register->Click += gcnew System::EventHandler(this, &AdminRegForm::btn_register_Click);
			// 
			// AdminRegForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_register);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdminRegForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_register_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ sqlconn = gcnew SqlConnection();
		sqlconn->ConnectionString = "Data Source=.;Initial Catalog=ArbeiterRegister;Integrated Security=True";

		String^ name = this->tb1->Text;
		String^ passwort = this->tb2->Text;

		if (name->Length == 0 || passwort->Length == 0)
		{
			MessageBox::Show("the fields Name and Passwort are empty!", "please write the information!", MessageBoxButtons::OK);
			return;
		}
		sqlconn->Open();

		String^ query = "declare @pass nvarchar(20) set @pass = convert(nvarchar(32), HashBytes('MD5', '" + passwort + "'), 2) insert into adminLogin(Name, Passwort)" + "values('" + name + "', @pass)";
		
		SqlCommand^ sqlcmd =gcnew SqlCommand(query, sqlconn);
		sqlcmd->ExecuteNonQuery();
	}

	};
}
