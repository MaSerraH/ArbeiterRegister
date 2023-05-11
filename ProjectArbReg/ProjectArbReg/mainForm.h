#pragma once

namespace ProjectArbReg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnEscape;
	private: System::Windows::Forms::LinkLabel^ ToadminRegForm;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnEscape = (gcnew System::Windows::Forms::Button());
			this->ToadminRegForm = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// btnEscape
			// 
			this->btnEscape->Location = System::Drawing::Point(172, 272);
			this->btnEscape->Name = L"btnEscape";
			this->btnEscape->Size = System::Drawing::Size(100, 45);
			this->btnEscape->TabIndex = 0;
			this->btnEscape->Text = L"exit";
			this->btnEscape->UseVisualStyleBackColor = true;
			this->btnEscape->Click += gcnew System::EventHandler(this, &mainForm::btnEscape_Click);
			// 
			// ToadminRegForm
			// 
			this->ToadminRegForm->Location = System::Drawing::Point(133, 142);
			this->ToadminRegForm->Name = L"ToadminRegForm";
			this->ToadminRegForm->Size = System::Drawing::Size(231, 57);
			this->ToadminRegForm->TabIndex = 1;
			this->ToadminRegForm->TabStop = true;
			this->ToadminRegForm->Text = L"Admin Register";
			this->ToadminRegForm->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &mainForm::ToadminRegLogForm_LinkClicked);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 354);
			this->Controls->Add(this->ToadminRegForm);
			this->Controls->Add(this->btnEscape);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool To_adminRegForm = false;
	private: System::Void btnEscape_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult Exit;
		Exit = MessageBox::Show("Do you really want to close the application?", "Arb_Reg", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (Exit==System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	private: System::Void ToadminRegLogForm_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_adminRegForm = true;
		this->Close();
	}
		   
	};
}
