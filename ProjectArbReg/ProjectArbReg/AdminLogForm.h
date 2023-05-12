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
	/// Summary for AdminLogForm
	/// </summary>
	public ref class AdminLogForm : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlconn = gcnew SqlConnection();
	public:

		AdminLogForm(void)
		{
			InitializeComponent();
			sqlconn->ConnectionString = "Data Source=.;Initial Catalog=ArbeiterRegister;Integrated Security=True";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminLogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbpass;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Button^ btn_login;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbpass = (gcnew System::Windows::Forms::TextBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password: ";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(188, 79);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(234, 34);
			this->tbName->TabIndex = 2;
			// 
			// tbpass
			// 
			this->tbpass->Location = System::Drawing::Point(205, 138);
			this->tbpass->Name = L"tbpass";
			this->tbpass->Size = System::Drawing::Size(217, 34);
			this->tbpass->TabIndex = 3;
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(114, 286);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(95, 47);
			this->btn_back->TabIndex = 4;
			this->btn_back->Text = L"back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &AdminLogForm::btn_back_Click);
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(237, 215);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(119, 49);
			this->btn_login->TabIndex = 5;
			this->btn_login->Text = L"login";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &AdminLogForm::btn_login_Click);
			// 
			// AdminLogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 487);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->tbpass);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"AdminLogForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminLogForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool back_ToMain = false;
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->back_ToMain = true;
		this->Close();
	}
private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: void Reset()
{
	this->tbName->Text = "";
	this->tbpass->Text = "";
}
};
}
