#pragma once
#include<iostream>
#include "User.h"

namespace ShopApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user, bool System_Check)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->label1->Text = user->Name;

			employee1->BringToFront();

			this->Control_Admin->Enabled = false;
			this->Conrol_Management->Enabled = false;

			if (System_Check) {
				this->Control_Employee->Enabled = false;
				this->Control_Admin->Enabled = true;
				this->Conrol_Management->Enabled = true;
				this->admin1->BringToFront();
				this->panel3->Location = this->Control_Admin->Location;
			}

			if (user->Position == "Admin") {
				this->Control_Admin->Enabled = true;
				this->Conrol_Management->Enabled = true;
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Control_Employee;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Conrol_Management;

	private: System::Windows::Forms::Button^ Control_Admin;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: MyCustomUserControl::Employee^ employee1;
	private: MyCustomUserControl::Admin^ admin1;
	private: MyCustomUserControl::Manage^ manage1;




		   //private: ShopApplication::EmployeeUserControl^ ob;
	

	protected:






	protected:




	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Conrol_Management = (gcnew System::Windows::Forms::Button());
			this->Control_Admin = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Control_Employee = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->employee1 = (gcnew MyCustomUserControl::Employee());
			this->admin1 = (gcnew MyCustomUserControl::Admin());
			this->manage1 = (gcnew MyCustomUserControl::Manage());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SlateGray;
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->Conrol_Management);
			this->panel1->Controls->Add(this->Control_Admin);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Control_Employee);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 844);
			this->panel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(175, 156);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1203, 513);
			this->panel4->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel3->BackColor = System::Drawing::Color::Crimson;
			this->panel3->Location = System::Drawing::Point(0, 90);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 60);
			this->panel3->TabIndex = 2;
			// 
			// Conrol_Management
			// 
			this->Conrol_Management->FlatAppearance->BorderSize = 0;
			this->Conrol_Management->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Conrol_Management->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Conrol_Management->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Conrol_Management->Location = System::Drawing::Point(0, 222);
			this->Conrol_Management->Name = L"Conrol_Management";
			this->Conrol_Management->Size = System::Drawing::Size(172, 60);
			this->Conrol_Management->TabIndex = 3;
			this->Conrol_Management->Text = L"Management";
			this->Conrol_Management->UseVisualStyleBackColor = true;
			this->Conrol_Management->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// Control_Admin
			// 
			this->Control_Admin->FlatAppearance->BorderSize = 0;
			this->Control_Admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Control_Admin->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Control_Admin->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Control_Admin->Location = System::Drawing::Point(0, 156);
			this->Control_Admin->Name = L"Control_Admin";
			this->Control_Admin->Size = System::Drawing::Size(172, 60);
			this->Control_Admin->TabIndex = 2;
			this->Control_Admin->Text = L"Admin";
			this->Control_Admin->UseVisualStyleBackColor = true;
			this->Control_Admin->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SandyBrown;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Unknown";
			// 
			// Control_Employee
			// 
			this->Control_Employee->FlatAppearance->BorderSize = 0;
			this->Control_Employee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Control_Employee->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Control_Employee->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Control_Employee->Location = System::Drawing::Point(0, 90);
			this->Control_Employee->Name = L"Control_Employee";
			this->Control_Employee->Size = System::Drawing::Size(172, 60);
			this->Control_Employee->TabIndex = 1;
			this->Control_Employee->Text = L"Employee";
			this->Control_Employee->UseVisualStyleBackColor = true;
			this->Control_Employee->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SlateGray;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(175, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1303, 10);
			this->panel2->TabIndex = 1;
			// 
			// employee1
			// 
			this->employee1->Location = System::Drawing::Point(175, 12);
			this->employee1->Name = L"employee1";
			this->employee1->Size = System::Drawing::Size(1303, 829);
			this->employee1->TabIndex = 2;
			// 
			// admin1
			// 
			this->admin1->Location = System::Drawing::Point(175, 12);
			this->admin1->Name = L"admin1";
			this->admin1->Size = System::Drawing::Size(1303, 829);
			this->admin1->TabIndex = 3;
			// 
			// manage1
			// 
			this->manage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->manage1->Location = System::Drawing::Point(175, 12);
			this->manage1->Name = L"manage1";
			this->manage1->Size = System::Drawing::Size(1303, 829);
			this->manage1->TabIndex = 4;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1478, 844);
			this->Controls->Add(this->manage1);
			this->Controls->Add(this->admin1);
			this->Controls->Add(this->employee1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::DimGray;
			this->MaximumSize = System::Drawing::Size(1500, 900);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->employee1->BringToFront();
		this->panel3->Location = this->Control_Employee->Location;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->admin1->BringToFront();
		this->panel3->Location = this->Control_Admin->Location;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->manage1->BringToFront();
		this->panel3->Location = this->Conrol_Management->Location;
	}
};
}
