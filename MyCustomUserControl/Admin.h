#pragma once
#include "LinkedList_Admin.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace MyCustomUserControl {

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::UserControl
	{
	public:
		Admin(void)
		{
			InitializeComponent();

			comboBoxSort->SelectedIndex = 0;

			comboBoxSex->SelectedIndex = 0;

			loadingData_Admin();

			list.printList(dataGridView1);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;













	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ Search_Admin_Box;

	private: System::Windows::Forms::Button^ Search_Admin;
	private: System::Windows::Forms::Button^ Refresh;










	private: System::Windows::Forms::Button^ Delete_Employee;

	private: System::Windows::Forms::Button^ Update_Employee;

	private: System::Windows::Forms::Button^ Insert_Employee;
	private: System::Windows::Forms::Label^ EmployeeID;
	private: System::Windows::Forms::Label^ Employee_ID;

	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxSalary;

	private: System::Windows::Forms::TextBox^ textBoxHour;

	private: System::Windows::Forms::TextBox^ textBoxPosition;
	private: System::Windows::Forms::TextBox^ textBoxRegister;


	private: System::Windows::Forms::TextBox^ textBoxPassword;

	private: System::Windows::Forms::TextBox^ textBoxPhone;
	private: System::Windows::Forms::TextBox^ textBoxDOB;
	private: System::Windows::Forms::ComboBox^ comboBoxSort;



	private: System::Windows::Forms::Button^ Sort_Admin;

	public: Linkedlist_Admin list;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::ComboBox^ comboBoxSex;















































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBoxSex = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxSalary = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHour = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPosition = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRegister = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDOB = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->Employee_ID = (gcnew System::Windows::Forms::Label());
			this->EmployeeID = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Delete_Employee = (gcnew System::Windows::Forms::Button());
			this->Update_Employee = (gcnew System::Windows::Forms::Button());
			this->Insert_Employee = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Search_Admin_Box = (gcnew System::Windows::Forms::TextBox());
			this->Search_Admin = (gcnew System::Windows::Forms::Button());
			this->Refresh = (gcnew System::Windows::Forms::Button());
			this->comboBoxSort = (gcnew System::Windows::Forms::ComboBox());
			this->Sort_Admin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column2, this->Column4, this->Column5, this->Column7, this->Column9, this->Column10, this->Column11, this->Column12, this->Column13
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 382);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1303, 450);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Admin::dataGridView1_CellDoubleClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Name";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Sex";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->HeaderText = L"BirthDate";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column7->HeaderText = L"Phone";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column9->HeaderText = L"Password";
			this->Column9->MinimumWidth = 8;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column10->HeaderText = L"Register";
			this->Column10->MinimumWidth = 8;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column11->HeaderText = L"Position";
			this->Column11->MinimumWidth = 8;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column12->HeaderText = L"Hours";
			this->Column12->MinimumWidth = 8;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column13->HeaderText = L"Salary";
			this->Column13->MinimumWidth = 8;
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->comboBoxSex);
			this->panel1->Controls->Add(this->textBoxSalary);
			this->panel1->Controls->Add(this->textBoxHour);
			this->panel1->Controls->Add(this->textBoxPosition);
			this->panel1->Controls->Add(this->textBoxRegister);
			this->panel1->Controls->Add(this->textBoxPassword);
			this->panel1->Controls->Add(this->textBoxPhone);
			this->panel1->Controls->Add(this->textBoxDOB);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBoxName);
			this->panel1->Controls->Add(this->Employee_ID);
			this->panel1->Controls->Add(this->EmployeeID);
			this->panel1->Location = System::Drawing::Point(14, 14);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(930, 300);
			this->panel1->TabIndex = 1;
			// 
			// comboBoxSex
			// 
			this->comboBoxSex->ForeColor = System::Drawing::Color::Black;
			this->comboBoxSex->FormattingEnabled = true;
			this->comboBoxSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M", L"F" });
			this->comboBoxSex->Location = System::Drawing::Point(367, 60);
			this->comboBoxSex->Name = L"comboBoxSex";
			this->comboBoxSex->Size = System::Drawing::Size(150, 28);
			this->comboBoxSex->TabIndex = 8;
			// 
			// textBoxSalary
			// 
			this->textBoxSalary->Location = System::Drawing::Point(686, 233);
			this->textBoxSalary->Name = L"textBoxSalary";
			this->textBoxSalary->Size = System::Drawing::Size(164, 26);
			this->textBoxSalary->TabIndex = 18;
			// 
			// textBoxHour
			// 
			this->textBoxHour->Location = System::Drawing::Point(367, 233);
			this->textBoxHour->Name = L"textBoxHour";
			this->textBoxHour->Size = System::Drawing::Size(170, 26);
			this->textBoxHour->TabIndex = 17;
			// 
			// textBoxPosition
			// 
			this->textBoxPosition->Location = System::Drawing::Point(84, 233);
			this->textBoxPosition->Name = L"textBoxPosition";
			this->textBoxPosition->Size = System::Drawing::Size(149, 26);
			this->textBoxPosition->TabIndex = 16;
			// 
			// textBoxRegister
			// 
			this->textBoxRegister->ForeColor = System::Drawing::Color::Black;
			this->textBoxRegister->Location = System::Drawing::Point(686, 145);
			this->textBoxRegister->Name = L"textBoxRegister";
			this->textBoxRegister->Size = System::Drawing::Size(164, 26);
			this->textBoxRegister->TabIndex = 15;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(367, 148);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(149, 26);
			this->textBoxPassword->TabIndex = 14;
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->Location = System::Drawing::Point(84, 148);
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(149, 26);
			this->textBoxPhone->TabIndex = 13;
			// 
			// textBoxDOB
			// 
			this->textBoxDOB->Location = System::Drawing::Point(686, 60);
			this->textBoxDOB->Name = L"textBoxDOB";
			this->textBoxDOB->Size = System::Drawing::Size(164, 26);
			this->textBoxDOB->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(614, 236);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 20);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Salary";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(283, 236);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 20);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Hours";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(14, 236);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 20);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Position";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(551, 151);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Resgister Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(283, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(14, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Phone";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(565, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Date Of Birth";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(283, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Sex";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(18, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(84, 60);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(149, 26);
			this->textBoxName->TabIndex = 2;
			// 
			// Employee_ID
			// 
			this->Employee_ID->AutoSize = true;
			this->Employee_ID->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Employee_ID->Location = System::Drawing::Point(131, 19);
			this->Employee_ID->Name = L"Employee_ID";
			this->Employee_ID->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Employee_ID->Size = System::Drawing::Size(22, 26);
			this->Employee_ID->TabIndex = 1;
			this->Employee_ID->Text = L"0";
			// 
			// EmployeeID
			// 
			this->EmployeeID->AutoSize = true;
			this->EmployeeID->Location = System::Drawing::Point(18, 19);
			this->EmployeeID->Name = L"EmployeeID";
			this->EmployeeID->Size = System::Drawing::Size(96, 20);
			this->EmployeeID->TabIndex = 0;
			this->EmployeeID->Text = L"EmployeeID";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Delete_Employee);
			this->panel2->Controls->Add(this->Update_Employee);
			this->panel2->Controls->Add(this->Insert_Employee);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(1002, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(301, 382);
			this->panel2->TabIndex = 2;
			// 
			// Delete_Employee
			// 
			this->Delete_Employee->ForeColor = System::Drawing::Color::Black;
			this->Delete_Employee->Location = System::Drawing::Point(60, 250);
			this->Delete_Employee->Name = L"Delete_Employee";
			this->Delete_Employee->Size = System::Drawing::Size(160, 50);
			this->Delete_Employee->TabIndex = 2;
			this->Delete_Employee->Text = L"Delete";
			this->Delete_Employee->UseVisualStyleBackColor = true;
			this->Delete_Employee->Click += gcnew System::EventHandler(this, &Admin::Delete_Employee_Click);
			// 
			// Update_Employee
			// 
			this->Update_Employee->ForeColor = System::Drawing::Color::Black;
			this->Update_Employee->Location = System::Drawing::Point(60, 150);
			this->Update_Employee->Name = L"Update_Employee";
			this->Update_Employee->Size = System::Drawing::Size(160, 50);
			this->Update_Employee->TabIndex = 1;
			this->Update_Employee->Text = L"Update";
			this->Update_Employee->UseVisualStyleBackColor = true;
			this->Update_Employee->Click += gcnew System::EventHandler(this, &Admin::Update_Employee_Click);
			// 
			// Insert_Employee
			// 
			this->Insert_Employee->ForeColor = System::Drawing::Color::Black;
			this->Insert_Employee->Location = System::Drawing::Point(60, 50);
			this->Insert_Employee->Name = L"Insert_Employee";
			this->Insert_Employee->Size = System::Drawing::Size(160, 50);
			this->Insert_Employee->TabIndex = 0;
			this->Insert_Employee->Text = L"Insert";
			this->Insert_Employee->UseVisualStyleBackColor = true;
			this->Insert_Employee->Click += gcnew System::EventHandler(this, &Admin::Insert_Employee_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SlateGray;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(992, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 382);
			this->panel3->TabIndex = 3;
			// 
			// Search_Admin_Box
			// 
			this->Search_Admin_Box->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search_Admin_Box->ForeColor = System::Drawing::Color::Black;
			this->Search_Admin_Box->Location = System::Drawing::Point(14, 339);
			this->Search_Admin_Box->Name = L"Search_Admin_Box";
			this->Search_Admin_Box->Size = System::Drawing::Size(189, 29);
			this->Search_Admin_Box->TabIndex = 0;
			// 
			// Search_Admin
			// 
			this->Search_Admin->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search_Admin->ForeColor = System::Drawing::Color::Black;
			this->Search_Admin->Location = System::Drawing::Point(213, 339);
			this->Search_Admin->Name = L"Search_Admin";
			this->Search_Admin->Size = System::Drawing::Size(87, 35);
			this->Search_Admin->TabIndex = 4;
			this->Search_Admin->Text = L"Search";
			this->Search_Admin->UseVisualStyleBackColor = true;
			this->Search_Admin->Click += gcnew System::EventHandler(this, &Admin::Search_Admin_Click);
			// 
			// Refresh
			// 
			this->Refresh->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Refresh->ForeColor = System::Drawing::Color::Black;
			this->Refresh->Location = System::Drawing::Point(318, 339);
			this->Refresh->Name = L"Refresh";
			this->Refresh->Size = System::Drawing::Size(113, 35);
			this->Refresh->TabIndex = 5;
			this->Refresh->Text = L"Refresh";
			this->Refresh->UseVisualStyleBackColor = true;
			this->Refresh->Click += gcnew System::EventHandler(this, &Admin::Refresh_Click);
			// 
			// comboBoxSort
			// 
			this->comboBoxSort->ForeColor = System::Drawing::Color::Black;
			this->comboBoxSort->FormattingEnabled = true;
			this->comboBoxSort->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Name", L"Sex", L"Position" });
			this->comboBoxSort->Location = System::Drawing::Point(700, 340);
			this->comboBoxSort->Name = L"comboBoxSort";
			this->comboBoxSort->Size = System::Drawing::Size(150, 28);
			this->comboBoxSort->TabIndex = 6;
			// 
			// Sort_Admin
			// 
			this->Sort_Admin->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort_Admin->ForeColor = System::Drawing::Color::Black;
			this->Sort_Admin->Location = System::Drawing::Point(860, 340);
			this->Sort_Admin->Name = L"Sort_Admin";
			this->Sort_Admin->Size = System::Drawing::Size(90, 35);
			this->Sort_Admin->TabIndex = 7;
			this->Sort_Admin->Text = L"Sort";
			this->Sort_Admin->UseVisualStyleBackColor = true;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Sort_Admin);
			this->Controls->Add(this->comboBoxSort);
			this->Controls->Add(this->Refresh);
			this->Controls->Add(this->Search_Admin);
			this->Controls->Add(this->Search_Admin_Box);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Admin";
			this->Size = System::Drawing::Size(1303, 832);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void loadingData_Admin() {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "Select * from Employees";
				SqlCommand command(SqlQuery, % sqlcon);

				SqlDataReader^ reader = command.ExecuteReader();

				int count = 0;

				Employee^ employee;

				while (reader->Read()) {

					employee = gcnew Employee;
					employee->id = reader->GetInt32(0);
					employee->Name = reader->GetString(1);
					employee->Sex = reader->GetString(2);
					employee->DateOfBirth = reader->GetString(3);
					employee->Phone = reader->GetString(4);
					employee->Password = reader->GetString(5);
					employee->RegisterDate = reader->GetString(6);
					employee->Position = reader->GetString(7);
					employee->WorkHour = reader->GetString(8);
					employee->Salary = reader->GetString(9);

					this->list.insertNode_Admin(employee);

					delete employee;

					/*ListViewItem^ items = gcnew ListViewItem(product->id.ToString());
					items->SubItems->Add(product->Name);
					items->SubItems->Add(product->Price.ToString());
					items->SubItems->Add(product->Quantity.ToString());
					items->SubItems->Add(product->Type);

					this->listView1->Items->Add(items);*/

					count++;
				}
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
			}
		}
		void refresh_Input() {

			list.printList(dataGridView1);
			
			Employee_ID->Text = "0";
			comboBoxSex->SelectedIndex = 0;
			textBoxName->Text = "";
			textBoxDOB->Text = "";
			textBoxPhone->Text = "";
			textBoxPassword->Text = "";
			textBoxRegister->Text = "";
			textBoxPosition->Text = "";
			textBoxHour->Text = "";
			textBoxSalary->Text = "";
		}
#pragma endregion
	private: System::Void Search_Admin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ search = this->Search_Admin_Box->Text;
		list.SearchNode_Admin(dataGridView1, search);
		this->Search_Admin_Box->Text = "";
	}
	private: System::Void Insert_Employee_Click(System::Object^ sender, System::EventArgs^ e) {

		Employee^ emp = gcnew Employee();

		emp->id = 0;
		emp->Name = this->textBoxName->Text;
		emp->Sex = this->comboBoxSex->SelectedItem->ToString();
		emp->DateOfBirth = this->textBoxDOB->Text;
		emp->Phone = this->textBoxPhone->Text;
		emp->Password = this->textBoxPassword->Text;
		emp->RegisterDate = this->textBoxRegister->Text;
		emp->Position = this->textBoxPosition->Text;
		emp->WorkHour = this->textBoxHour->Text;
		emp->Salary = this->textBoxSalary->Text;


		if ( emp->Name == "" || emp->Sex == "" || emp->Phone == "" || emp->Password == "" || emp->Position == "" || emp->WorkHour == "" || emp->Salary == "" || emp->DateOfBirth == "" || emp->RegisterDate == "") {
			MessageBox::Show("Empty Field, Please Fill The Complete Form", "Employee", MessageBoxButtons::OK);
		}
		else {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "INSERT INTO Employees " + "(Name, Sex, DateOfBirth, Phone, Password, RegisterDate, Position, WorkHour, Salary) VALUES " + "(@Name, @Sex, @DOB, @Phone, @Pass, @Regis, @Position, @Hour, @Salary)";

				SqlCommand command(SqlQuery, % sqlcon);
				command.Parameters->AddWithValue("@Name", emp->Name);
				command.Parameters->AddWithValue("@Sex", emp->Sex);
				command.Parameters->AddWithValue("@DOB", emp->DateOfBirth);
				command.Parameters->AddWithValue("@Phone", emp->Phone);
				command.Parameters->AddWithValue("@Pass", emp->Password);
				command.Parameters->AddWithValue("@Regis", emp->RegisterDate);
				command.Parameters->AddWithValue("@Position", emp->Position);
				command.Parameters->AddWithValue("@Hour", emp->WorkHour);
				command.Parameters->AddWithValue("@Salary", emp->Salary);

				command.ExecuteNonQuery();

				try {
					String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
					SqlConnection sqlcon(conn);
					sqlcon.Open();

					String^ SqlQuery = "SELECT Id FROM Employees WHERE Password=@Pass";

					SqlCommand command(SqlQuery, % sqlcon);
					command.Parameters->AddWithValue("@Pass", emp->Password);

					SqlDataReader^ reader = command.ExecuteReader();

					if (reader->Read()) {
						emp->id = reader->GetInt32(0);
					}

					list.insertNode_Admin(emp);
					
					refresh_Input();

				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
				}

			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
			}
		}
		}
	private: System::Void Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		refresh_Input();
	}
	private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			int index = e->RowIndex;// get the Row Index             
			DataGridViewRow^ selectedRow = dataGridView1->Rows[index];
			Employee_ID->Text = selectedRow->Cells[0]->Value->ToString();
			textBoxName->Text = selectedRow->Cells[1]->Value->ToString();

			String^ temp = selectedRow->Cells[2]->Value->ToString();
			if (temp == "M") {
				comboBoxSex->SelectedIndex = 0;
			}
			else if (temp == "F") {
				comboBoxSex->SelectedIndex = 1;
			}

			textBoxDOB->Text = selectedRow->Cells[3]->Value->ToString();
			textBoxPhone->Text = selectedRow->Cells[4]->Value->ToString();
			textBoxPassword->Text = selectedRow->Cells[5]->Value->ToString();
			textBoxRegister->Text = selectedRow->Cells[6]->Value->ToString();
			textBoxPosition->Text = selectedRow->Cells[7]->Value->ToString();
			textBoxHour->Text = selectedRow->Cells[8]->Value->ToString();
			textBoxSalary->Text = selectedRow->Cells[9]->Value->ToString();
		}
	}
	private: System::Void Delete_Employee_Click(System::Object^ sender, System::EventArgs^ e) {

		Employee^ emp = gcnew Employee();

		emp->id = System::Convert::ToInt32(this->Employee_ID->Text);
		emp->Name = this->textBoxName->Text;
		emp->Sex = this->comboBoxSex->SelectedItem->ToString();
		emp->DateOfBirth = this->textBoxDOB->Text;
		emp->Phone = this->textBoxPhone->Text;
		emp->Password = this->textBoxPassword->Text;
		emp->RegisterDate = this->textBoxRegister->Text;
		emp->Position = this->textBoxPosition->Text;
		emp->WorkHour = this->textBoxHour->Text;
		emp->Salary = this->textBoxSalary->Text;

		if (emp->Name == "" || emp->Sex == "" || emp->Phone == "" || emp->Password == "" || emp->Position == "" || emp->WorkHour == "" || emp->Salary == "" || emp->DateOfBirth == "" || emp->RegisterDate == "") {
			MessageBox::Show("Empty Field, Please Fill The Complete Form", "Employee", MessageBoxButtons::OK);
		}
		else if (emp->id == 0) {
			MessageBox::Show("Failed To Get ID", "Employee", MessageBoxButtons::OK);
		}
		else {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "DELETE FROM Employees " + "WHERE Id = @id AND Password = @Pass";

				SqlCommand command(SqlQuery, % sqlcon);
				command.Parameters->AddWithValue("@id", emp->id);
				command.Parameters->AddWithValue("@Pass", emp->Password);

				command.ExecuteNonQuery();

				list.deleteNode_Admin(emp);

				refresh_Input();

			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
			}
		}
		delete emp;
	}
	private: System::Void Update_Employee_Click(System::Object^ sender, System::EventArgs^ e) {
		Employee^ emp = gcnew Employee();

		emp->id = System::Convert::ToInt32(this->Employee_ID->Text);
		emp->Name = this->textBoxName->Text;
		emp->Sex = this->comboBoxSex->SelectedItem->ToString();
		emp->DateOfBirth = this->textBoxDOB->Text;
		emp->Phone = this->textBoxPhone->Text;
		emp->Password = this->textBoxPassword->Text;
		emp->RegisterDate = this->textBoxRegister->Text;
		emp->Position = this->textBoxPosition->Text;
		emp->WorkHour = this->textBoxHour->Text;
		emp->Salary = this->textBoxSalary->Text;

		if (emp->Name == "" || emp->Sex == "" || emp->Phone == "" || emp->Password == "" || emp->Position == "" || emp->WorkHour == "" || emp->Salary == "" || emp->DateOfBirth == "" || emp->RegisterDate == "") {
			MessageBox::Show("Empty Field, Please Fill The Complete Form", "Employee", MessageBoxButtons::OK);
		}
		else if (emp->id == 0) {
			MessageBox::Show("Failed To Get ID", "Employee", MessageBoxButtons::OK);
		}
		else {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "UPDATE Employees " + "SET Name = @Name, Sex = @Sex, DateOfBirth = @DOB, Phone = @Phone, Password = @Pass, RegisterDate = @Regis, Position = @Position, WorkHour = @Hour, Salary = @Salary " + "WHERE Id = @id";

				SqlCommand command(SqlQuery, % sqlcon);
				command.Parameters->AddWithValue("@Name", emp->Name);
				command.Parameters->AddWithValue("@Sex", emp->Sex);
				command.Parameters->AddWithValue("@DOB", emp->DateOfBirth);
				command.Parameters->AddWithValue("@Phone", emp->Phone);
				command.Parameters->AddWithValue("@Pass", emp->Password);
				command.Parameters->AddWithValue("@Regis", emp->RegisterDate);
				command.Parameters->AddWithValue("@Position", emp->Position);
				command.Parameters->AddWithValue("@Hour", emp->WorkHour);
				command.Parameters->AddWithValue("@Salary", emp->Salary);

				command.Parameters->AddWithValue("@id", emp->id);

				command.ExecuteNonQuery();

				list.UpdateNode_Admin(emp);

				refresh_Input();

			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
			}
		}
		delete emp;
	}
};
}
