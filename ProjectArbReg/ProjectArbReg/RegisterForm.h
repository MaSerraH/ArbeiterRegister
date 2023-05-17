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
	using namespace System::IO;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlconn = gcnew SqlConnection();
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			sqlconn->ConnectionString = "Data Source=.;Initial Catalog=ArbeiterRegister;Integrated Security=True";
			getData();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::TextBox^ tb1;
	private: System::Windows::Forms::TextBox^ tb2;
	private: System::Windows::Forms::TextBox^ tb3;
	private: System::Windows::Forms::TextBox^ tb4;
	private: System::Windows::Forms::TextBox^ tb5;
	private: System::Windows::Forms::TextBox^ tb6;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnExport;
	private: System::Windows::Forms::Button^ btnBackMain;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnReset;
	protected:


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->tb3 = (gcnew System::Windows::Forms::TextBox());
			this->tb4 = (gcnew System::Windows::Forms::TextBox());
			this->tb5 = (gcnew System::Windows::Forms::TextBox());
			this->tb6 = (gcnew System::Windows::Forms::TextBox());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnExport = (gcnew System::Windows::Forms::Button());
			this->btnBackMain = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Location = System::Drawing::Point(28, 213);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1275, 467);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RegisterForm::dataGridView1_CellClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"First Name: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Last Name: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(142, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 26);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Age:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(486, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Phone Number:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(553, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 26);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(527, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 26);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Profession:";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(118, 24);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(36, 26);
			this->label->TabIndex = 7;
			this->label->Text = L"Id:";
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(224, 63);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(209, 34);
			this->tb1->TabIndex = 8;
			// 
			// tb2
			// 
			this->tb2->Location = System::Drawing::Point(224, 109);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(209, 34);
			this->tb2->TabIndex = 9;
			// 
			// tb3
			// 
			this->tb3->Location = System::Drawing::Point(224, 154);
			this->tb3->Name = L"tb3";
			this->tb3->Size = System::Drawing::Size(66, 34);
			this->tb3->TabIndex = 10;
			// 
			// tb4
			// 
			this->tb4->Location = System::Drawing::Point(681, 46);
			this->tb4->Name = L"tb4";
			this->tb4->Size = System::Drawing::Size(209, 34);
			this->tb4->TabIndex = 11;
			// 
			// tb5
			// 
			this->tb5->Location = System::Drawing::Point(681, 93);
			this->tb5->Name = L"tb5";
			this->tb5->Size = System::Drawing::Size(209, 34);
			this->tb5->TabIndex = 12;
			// 
			// tb6
			// 
			this->tb6->Location = System::Drawing::Point(681, 146);
			this->tb6->Name = L"tb6";
			this->tb6->Size = System::Drawing::Size(209, 34);
			this->tb6->TabIndex = 13;
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Location = System::Drawing::Point(165, 24);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(30, 26);
			this->labelID->TabIndex = 14;
			this->labelID->Text = L"...";
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Wheat;
			this->btnAdd->Location = System::Drawing::Point(981, 37);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(173, 38);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"add Worker()";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &RegisterForm::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::Wheat;
			this->btnDelete->Location = System::Drawing::Point(981, 89);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(187, 40);
			this->btnDelete->TabIndex = 16;
			this->btnDelete->Text = L"delete Worker()";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &RegisterForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::Wheat;
			this->btnUpdate->Location = System::Drawing::Point(981, 154);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(187, 34);
			this->btnUpdate->TabIndex = 17;
			this->btnUpdate->Text = L"update Table()";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &RegisterForm::btnUpdate_Click);
			// 
			// btnExport
			// 
			this->btnExport->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnExport->Location = System::Drawing::Point(1203, 37);
			this->btnExport->Name = L"btnExport";
			this->btnExport->Size = System::Drawing::Size(162, 38);
			this->btnExport->TabIndex = 18;
			this->btnExport->Text = L"export Table()";
			this->btnExport->UseVisualStyleBackColor = false;
			this->btnExport->Click += gcnew System::EventHandler(this, &RegisterForm::btnExport_Click);
			// 
			// btnBackMain
			// 
			this->btnBackMain->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnBackMain->Location = System::Drawing::Point(1203, 93);
			this->btnBackMain->Name = L"btnBackMain";
			this->btnBackMain->Size = System::Drawing::Size(186, 42);
			this->btnBackMain->TabIndex = 19;
			this->btnBackMain->Text = L"back to Main()";
			this->btnBackMain->UseVisualStyleBackColor = false;
			this->btnBackMain->Click += gcnew System::EventHandler(this, &RegisterForm::btnBackMain_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnExit->Location = System::Drawing::Point(1203, 154);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(144, 34);
			this->btnExit->TabIndex = 20;
			this->btnExit->Text = L"exit()";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &RegisterForm::btnExit_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnReset->Location = System::Drawing::Point(569, 706);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(176, 42);
			this->btnReset->TabIndex = 21;
			this->btnReset->Text = L"reset Table()";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &RegisterForm::btnReset_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1414, 760);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnBackMain);
			this->Controls->Add(this->btnExport);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->labelID);
			this->Controls->Add(this->tb6);
			this->Controls->Add(this->tb5);
			this->Controls->Add(this->tb4);
			this->Controls->Add(this->tb3);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool backToMain = false;
	//this private function retrieves the Data from DB, and shows it to the User
	private: System::Void getData()
	{
		try
		{
			sqlconn->Open();
			String^ query = "select * from workerRegister";
			SqlCommand^ cmd = gcnew SqlCommand(query, sqlconn);
			SqlDataReader^ datareader = cmd->ExecuteReader();
			DataTable^ sqldta = gcnew DataTable();
			sqldta->Load(datareader);
			datareader->Close();
			dataGridView1->DataSource = sqldta;

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Application", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			sqlconn->Close();
		}
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try
		{
			labelID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
			tb1->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
			tb2->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
			tb3->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
			tb4->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
			tb5->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
			tb6->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Application", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void Reset()
	{
		this->labelID->Text = "...";
		this->tb1->Text = "";
		this->tb2->Text = "";
		this->tb3->Text = "";
		this->tb4->Text = "";
		this->tb5->Text = "";
		this->tb6->Text = "";
	}
	//this function allows the user to register an employee
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlconn->Open();
			String^ firstName = tb1->Text;
			String^ lastName = tb2->Text;
			String^ age = tb3->Text;
			String^ phoneNumber = tb4->Text;
			String^ address = tb5->Text;
			String^ profession = tb6->Text;

			String^ query = "insert into workerRegister(FirstName, LastName, Age, PhoneNumber, Address, Profession)" + "values('" + firstName + "','" + lastName + "','" + age + "','" + phoneNumber + "','" + address + "','" + profession + "')";
			SqlCommand^ cmd = gcnew SqlCommand(query, sqlconn);
			cmd->ExecuteNonQuery();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Application", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Exit();
		}
		finally
		{
			sqlconn->Close();
			Reset();
			getData();
		}
	}
	//this function allows to delete an employee
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		String^ id = labelID->Text;
		sqlconn->Open();
		String^ query = "delete from workerRegister where Id = '" + id + "'";
		SqlCommand^ cmd = gcnew SqlCommand(query, sqlconn);
		cmd->ExecuteNonQuery();
		MessageBox::Show("the Worker has been deleted!", "Application", MessageBoxButtons::OK);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Application", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Application::Exit();
	}
	finally
	{
		sqlconn->Close();
		Reset();
		getData();
	}
}
	   //this function allows to update the Information of an employee
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		sqlconn->Open();
		String^ id = labelID->Text;
		String^ firstName = tb1->Text;
		String^ lastName = tb2->Text;
		String^ age = tb3->Text;
		String^ phoneNumber = tb4->Text;
		String^ address = tb5->Text;
		String^ profession = tb6->Text;

		String^ query = "update workerRegister set FirstName = '" + firstName + "', LastName = '" + lastName + "', Age = '" + age + "', PhoneNumber = '" + phoneNumber + "', Address = '" + address + "', Profession = '" + profession + "' where Id = '" + id + "'";
		SqlCommand^ cmd = gcnew SqlCommand(query, sqlconn);
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Application", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Application::Exit();
	}
	finally
	{
		sqlconn->Close();
		Reset();
		getData();
	}
}
	 //this function allows the Information in the DB to be exported as a .csv file
private: System::Void btnExport_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		sqlconn->Open();
		String^ query = "select * from workerRegister";
		StreamWriter^ file = gcnew StreamWriter("C:/Users/Mauricio/Desktop/export/daten.csv");
		SqlCommand^ cmd = gcnew SqlCommand(query, sqlconn);
		SqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read())
		{
			file->WriteLine(reader->GetName(0) + ";" + reader->GetName(1) + ";" + reader->GetName(2) + ";" + reader->GetName(3) + ";" + reader->GetName(4) + ";" + reader->GetName(5) + ";" + reader->GetName(6));
			file->WriteLine(reader[0]->ToString() + ";" + reader[1]->ToString() + ";" + reader[2]->ToString() + ";" + reader[3]->ToString() + ";" + reader[4]->ToString() + ";" + reader[5]->ToString() + ";" + reader[6]->ToString());
		}
		reader->Close();
		file->Close();
		MessageBox::Show("the Table has been exported!", "Information", MessageBoxButtons::OK);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Application", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	finally
	{
		sqlconn->Close();
	}
}
private: System::Void btnBackMain_Click(System::Object^ sender, System::EventArgs^ e) {
	this->backToMain = true;
	this->Close();
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult Exit;
	Exit = MessageBox::Show("Do you really want to close the application?", "Arb_Reg", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (Exit == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
	   //this function allows the table to be reseted
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		sqlconn->Open();
		String^ query = "truncate table workerRegister";
		SqlCommand^ cmd = gcnew SqlCommand(query, sqlconn);
		cmd->ExecuteNonQuery();
		MessageBox::Show("the Table has been reseted!", "Information", MessageBoxButtons::OK);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Application", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Application::Exit();
	}
	finally
	{
		sqlconn->Close();
		getData();
	}
}
};
}