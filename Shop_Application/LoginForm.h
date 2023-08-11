#pragma once
#include "user.h"

namespace ShopApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Login;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ UserName;
	private: System::Windows::Forms::TextBox^ Password;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->Login = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::MidnightBlue;
			resources->ApplyResources(this->Login, L"Login");
			this->Login->ForeColor = System::Drawing::Color::White;
			this->Login->Name = L"Login";
			this->Login->UseVisualStyleBackColor = false;
			this->Login->Click += gcnew System::EventHandler(this, &LoginForm::Login_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Crimson;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->Exit, L"Exit");
			this->Exit->ForeColor = System::Drawing::Color::White;
			this->Exit->Name = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &LoginForm::Exit_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Name = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Name = L"label3";
			// 
			// UserName
			// 
			resources->ApplyResources(this->UserName, L"UserName");
			this->UserName->BackColor = System::Drawing::Color::White;
			this->UserName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UserName->ForeColor = System::Drawing::Color::Black;
			this->UserName->Name = L"UserName";
			this->UserName->TextChanged += gcnew System::EventHandler(this, &LoginForm::UserName_TextChanged);
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::White;
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->Password, L"Password");
			this->Password->ForeColor = System::Drawing::Color::Black;
			this->Password->Name = L"Password";
			this->Password->UseSystemPasswordChar = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->Password);
			this->panel1->Controls->Add(this->UserName);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// LoginForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: User^ user = nullptr;
	private: System::Void Login_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->UserName->Text;
		String^ password = this->Password->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Email/Password is Empty !", "Error !", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
			SqlConnection sqlcon(conn);
			sqlcon.Open();

			String^ SqlQuery = "Select * from Employees Where Name=@user AND Password=@pass";
			SqlCommand command(SqlQuery, % sqlcon);
			command.Parameters->AddWithValue("@user", username);
			command.Parameters->AddWithValue("@pass", password);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {

				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->Name = reader->GetString(1);
				user->Age = reader->GetInt32(2);
				user->Sex = reader->GetString(3);
				user->DateOfBirth = reader->GetDateTime(4);
				user->Address = reader->GetString(5);
				user->Phone = reader->GetString(6);
				user->Email = reader->GetString(7);
				user->Password = reader->GetString(8);
				user->RegisterDate = reader->GetDateTime(9);
				user->Position = reader->GetString(10);
				user->WorkHour = reader->GetString(11);
				user->Salary = reader->GetString(12);

				this->Close();
			}
			else {
				MessageBox::Show("UserName Or Password is Incorrect !", "Wrong Detail!", MessageBoxButtons::OK);
				this->UserName->Text = "";
				this->Password->Text = "";
			}
		}
		catch (Exception^ e){
			MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
		}


	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
