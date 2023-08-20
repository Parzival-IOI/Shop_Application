#pragma once




using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Drawing;


namespace MyCustomUserControl {

	/// <summary>
	/// Summary for Employee
	/// </summary>
	public ref class Employee : public System::Windows::Forms::UserControl
	{
	public:
		Employee()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			loading_Product();
			loading_Sale();
			//this->user = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Employee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::TextBox^ textBoxSProduct;
	private: System::Windows::Forms::TextBox^ textBoxSTrans;
	private: System::Windows::Forms::Button^ searchProd;
	private: System::Windows::Forms::Button^ SearchTrans;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBoxDateTime;

	private: System::Windows::Forms::TextBox^ textBoxTranId;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxPrice;

	private: System::Windows::Forms::TextBox^ textBoxQty;

	private: System::Windows::Forms::TextBox^ textBoxProdName;

	private: System::Windows::Forms::TextBox^ textBoxProdId;
	private: System::Windows::Forms::Label^ labelTotal;
	private: System::Windows::Forms::Button^ buttonGetTime;
	private: System::Windows::Forms::Button^ calc;













		   //public: Linkedlist_Product^ list_product;
	public: 
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxSProduct = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSTrans = (gcnew System::Windows::Forms::TextBox());
			this->searchProd = (gcnew System::Windows::Forms::Button());
			this->SearchTrans = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->calc = (gcnew System::Windows::Forms::Button());
			this->buttonGetTime = (gcnew System::Windows::Forms::Button());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQty = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProdName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProdId = (gcnew System::Windows::Forms::TextBox());
			this->labelTotal = (gcnew System::Windows::Forms::Label());
			this->textBoxDateTime = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTranId = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 378);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(431, 451);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Employee::dataGridView1_CellDoubleClick);
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
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"Price";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Quantity";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->HeaderText = L"Type";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column6,
					this->Column7, this->Column8, this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->dataGridView2->Location = System::Drawing::Point(430, 378);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(873, 451);
			this->dataGridView2->TabIndex = 1;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column6->HeaderText = L"ID";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column7->HeaderText = L"Emp-Name";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column8->HeaderText = L"Product-Name";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column9->HeaderText = L"Product-Price";
			this->Column9->MinimumWidth = 8;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column10->HeaderText = L"Quantity";
			this->Column10->MinimumWidth = 8;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column11->HeaderText = L"Total-Price";
			this->Column11->MinimumWidth = 8;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column12->HeaderText = L"Date";
			this->Column12->MinimumWidth = 8;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// textBoxSProduct
			// 
			this->textBoxSProduct->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->textBoxSProduct->Location = System::Drawing::Point(14, 338);
			this->textBoxSProduct->Name = L"textBoxSProduct";
			this->textBoxSProduct->Size = System::Drawing::Size(120, 29);
			this->textBoxSProduct->TabIndex = 2;
			// 
			// textBoxSTrans
			// 
			this->textBoxSTrans->Font = (gcnew System::Drawing::Font(L"Consolas", 9));
			this->textBoxSTrans->Location = System::Drawing::Point(462, 340);
			this->textBoxSTrans->Name = L"textBoxSTrans";
			this->textBoxSTrans->Size = System::Drawing::Size(100, 29);
			this->textBoxSTrans->TabIndex = 3;
			// 
			// searchProd
			// 
			this->searchProd->Location = System::Drawing::Point(140, 337);
			this->searchProd->Name = L"searchProd";
			this->searchProd->Size = System::Drawing::Size(90, 35);
			this->searchProd->TabIndex = 4;
			this->searchProd->Text = L"Search";
			this->searchProd->UseVisualStyleBackColor = true;
			this->searchProd->Click += gcnew System::EventHandler(this, &Employee::searchProd_Click);
			// 
			// SearchTrans
			// 
			this->SearchTrans->Location = System::Drawing::Point(568, 339);
			this->SearchTrans->Name = L"SearchTrans";
			this->SearchTrans->Size = System::Drawing::Size(90, 35);
			this->SearchTrans->TabIndex = 5;
			this->SearchTrans->Text = L"Search";
			this->SearchTrans->UseVisualStyleBackColor = true;
			this->SearchTrans->Click += gcnew System::EventHandler(this, &Employee::SearchTrans_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(236, 337);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Employee::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(664, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Refresh";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Employee::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->calc);
			this->panel1->Controls->Add(this->buttonGetTime);
			this->panel1->Controls->Add(this->textBoxPrice);
			this->panel1->Controls->Add(this->textBoxQty);
			this->panel1->Controls->Add(this->textBoxProdName);
			this->panel1->Controls->Add(this->textBoxProdId);
			this->panel1->Controls->Add(this->labelTotal);
			this->panel1->Controls->Add(this->textBoxDateTime);
			this->panel1->Controls->Add(this->textBoxTranId);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(14, 16);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1024, 298);
			this->panel1->TabIndex = 8;
			// 
			// calc
			// 
			this->calc->Location = System::Drawing::Point(743, 201);
			this->calc->Name = L"calc";
			this->calc->Size = System::Drawing::Size(120, 35);
			this->calc->TabIndex = 15;
			this->calc->Text = L"Calculate";
			this->calc->UseVisualStyleBackColor = true;
			this->calc->Click += gcnew System::EventHandler(this, &Employee::calc_Click);
			// 
			// buttonGetTime
			// 
			this->buttonGetTime->Location = System::Drawing::Point(743, 24);
			this->buttonGetTime->Name = L"buttonGetTime";
			this->buttonGetTime->Size = System::Drawing::Size(153, 35);
			this->buttonGetTime->TabIndex = 14;
			this->buttonGetTime->Text = L"Get Current Time";
			this->buttonGetTime->UseVisualStyleBackColor = true;
			this->buttonGetTime->Click += gcnew System::EventHandler(this, &Employee::buttonGetTime_Click);
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrice->Location = System::Drawing::Point(494, 201);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->ReadOnly = true;
			this->textBoxPrice->Size = System::Drawing::Size(207, 29);
			this->textBoxPrice->TabIndex = 13;
			// 
			// textBoxQty
			// 
			this->textBoxQty->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxQty->Location = System::Drawing::Point(126, 201);
			this->textBoxQty->Name = L"textBoxQty";
			this->textBoxQty->Size = System::Drawing::Size(186, 29);
			this->textBoxQty->TabIndex = 12;
			// 
			// textBoxProdName
			// 
			this->textBoxProdName->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxProdName->Location = System::Drawing::Point(494, 110);
			this->textBoxProdName->Name = L"textBoxProdName";
			this->textBoxProdName->ReadOnly = true;
			this->textBoxProdName->Size = System::Drawing::Size(207, 29);
			this->textBoxProdName->TabIndex = 11;
			// 
			// textBoxProdId
			// 
			this->textBoxProdId->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxProdId->Location = System::Drawing::Point(142, 110);
			this->textBoxProdId->Name = L"textBoxProdId";
			this->textBoxProdId->ReadOnly = true;
			this->textBoxProdId->Size = System::Drawing::Size(170, 29);
			this->textBoxProdId->TabIndex = 10;
			// 
			// labelTotal
			// 
			this->labelTotal->AutoSize = true;
			this->labelTotal->BackColor = System::Drawing::Color::DimGray;
			this->labelTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTotal->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelTotal->Location = System::Drawing::Point(928, 251);
			this->labelTotal->Name = L"labelTotal";
			this->labelTotal->Padding = System::Windows::Forms::Padding(5);
			this->labelTotal->Size = System::Drawing::Size(37, 30);
			this->labelTotal->TabIndex = 9;
			this->labelTotal->Text = L"0$";
			// 
			// textBoxDateTime
			// 
			this->textBoxDateTime->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDateTime->Location = System::Drawing::Point(448, 24);
			this->textBoxDateTime->Name = L"textBoxDateTime";
			this->textBoxDateTime->ReadOnly = true;
			this->textBoxDateTime->Size = System::Drawing::Size(273, 29);
			this->textBoxDateTime->TabIndex = 8;
			// 
			// textBoxTranId
			// 
			this->textBoxTranId->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTranId->Location = System::Drawing::Point(142, 24);
			this->textBoxTranId->Name = L"textBoxTranId";
			this->textBoxTranId->ReadOnly = true;
			this->textBoxTranId->Size = System::Drawing::Size(116, 29);
			this->textBoxTranId->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(354, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Price";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(826, 256);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Total Price";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(354, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Product Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Product ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(354, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Date-Time";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Transaction ID";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1114, 31);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 46);
			this->button3->TabIndex = 9;
			this->button3->Text = L"New Transaction";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Employee::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1114, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 46);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Add items";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Employee::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1114, 178);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(148, 46);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Clear";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Employee::button5_Click);
			// 
			// Employee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SearchTrans);
			this->Controls->Add(this->searchProd);
			this->Controls->Add(this->textBoxSTrans);
			this->Controls->Add(this->textBoxSProduct);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Employee";
			this->Size = System::Drawing::Size(1303, 829);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		void loading_Product() {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "Select * from Product";
				SqlCommand command(SqlQuery, % sqlcon);

				SqlDataReader^ reader = command.ExecuteReader();

				while (reader->Read()) {

					dataGridView1->Rows->Add(reader->GetInt32(0).ToString(), reader->GetString(1), reader->GetDouble(2).ToString(), reader->GetInt32(3).ToString(), reader->GetString(4));
					
				}
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
			}
		}
		void loading_Sale() {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "select tra.Id, tra.emp_Name, pro.Product_Name, pro.Product_Price, it.Quantity, it.total_price, tra.date from (transact as tra inner join items as it on tra.Id = it.transaction_Id) inner join product as pro on it.Product_Id = pro.Id ORDER BY it.Id desc;";
				SqlCommand command(SqlQuery, % sqlcon);

				SqlDataReader^ reader = command.ExecuteReader();

				while (reader->Read()) {

					dataGridView2->Rows->Add(reader->GetInt32(0).ToString(), reader->GetString(1), reader->GetString(2), reader->GetDouble(3).ToString(), reader->GetInt32(4).ToString(), reader->GetDouble(5).ToString(), reader->GetString(6));

				}
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
			}
		}
#pragma endregion
	public: int userId;
	public: String^ userName;
	public: void setUser(int userId, String^ userName) {
		this->userId = userId;
		this->userName = userName;
	}
	private: System::Void searchProd_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
			SqlConnection sqlcon(conn);
			sqlcon.Open();

			String^ SqlQuery = "Select * from Product where id = @id";
			SqlCommand command(SqlQuery, % sqlcon);

			command.Parameters->AddWithValue("@id", textBoxSProduct->Text);

			SqlDataReader^ reader = command.ExecuteReader();

			dataGridView1->Rows->Clear();

			while (reader->Read()) {

				dataGridView1->Rows->Add(reader->GetInt32(0).ToString(), reader->GetString(1), reader->GetDouble(2).ToString(), reader->GetInt32(3).ToString(), reader->GetString(4));

			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
			SqlConnection sqlcon(conn);
			sqlcon.Open();

			String^ SqlQuery = "Select * from Product";
			SqlCommand command(SqlQuery, % sqlcon);

			SqlDataReader^ reader = command.ExecuteReader();

			dataGridView1->Rows->Clear();

			while (reader->Read()) {

				dataGridView1->Rows->Add(reader->GetInt32(0).ToString(), reader->GetString(1), reader->GetDouble(2).ToString(), reader->GetInt32(3).ToString(), reader->GetString(4));

			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
		}
	}
	private: System::Void SearchTrans_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
			SqlConnection sqlcon(conn);
			sqlcon.Open();

			String^ SqlQuery = "select tra.Id, tra.emp_Name, pro.Product_Name, pro.Product_Price, it.Quantity, it.total_price, tra.date from (transact as tra inner join items as it on tra.Id = it.transaction_Id) inner join product as pro on it.Product_Id = pro.Id where tra.Id = @id ORDER BY it.Id desc";
			SqlCommand command(SqlQuery, % sqlcon);

			command.Parameters->AddWithValue("@id", textBoxSTrans->Text);

			SqlDataReader^ reader = command.ExecuteReader();

			dataGridView2->Rows->Clear();

			while (reader->Read()) {

				dataGridView2->Rows->Add(reader->GetInt32(0).ToString(), reader->GetString(1), reader->GetString(2), reader->GetDouble(3).ToString(), reader->GetInt32(4).ToString(), reader->GetDouble(5).ToString(), reader->GetString(6));

			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
			SqlConnection sqlcon(conn);
			sqlcon.Open();

			String^ SqlQuery = "select tra.Id, tra.emp_Name, pro.Product_Name, pro.Product_Price, it.Quantity, it.total_price, tra.date from (transact as tra inner join items as it on tra.Id = it.transaction_Id) inner join product as pro on it.Product_Id = pro.Id ORDER BY it.Id desc";
			SqlCommand command(SqlQuery, % sqlcon);

			SqlDataReader^ reader = command.ExecuteReader();

			dataGridView2->Rows->Clear();

			while (reader->Read()) {

				dataGridView2->Rows->Add(reader->GetInt32(0).ToString(), reader->GetString(1), reader->GetString(2), reader->GetDouble(3).ToString(), reader->GetInt32(4).ToString(), reader->GetDouble(5).ToString(), reader->GetString(6));

			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
		}
	}
	private: System::Void buttonGetTime_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBoxDateTime->Text = DateTime::Now.ToString();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxDateTime->Text = "";
		textBoxTranId->Text = "";
		textBoxProdId->Text = "";
		textBoxProdName->Text = "";
		textBoxQty->Text = "";
		textBoxPrice->Text = "";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxDateTime->Text == "") {
			MessageBox::Show("No Date", "Database Error !", MessageBoxButtons::OK);

		}
		else {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "INSERT INTO transact " + "(emp_id, emp_Name, date) VALUES " + "(@empId, @empName, @date)";

				SqlCommand command(SqlQuery, % sqlcon);
				command.Parameters->AddWithValue("@empId", userId);
				command.Parameters->AddWithValue("@empName", userName);
				command.Parameters->AddWithValue("@date", textBoxDateTime->Text);

				command.ExecuteNonQuery();

				try {
					String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
					SqlConnection sqlcon(conn);
					sqlcon.Open();

					String^ SqlQuery = "SELECT Id FROM transact WHERE date = @date";

					SqlCommand command(SqlQuery, % sqlcon);
					command.Parameters->AddWithValue("@date", textBoxDateTime->Text);

					SqlDataReader^ reader = command.ExecuteReader();

					if (reader->Read()) {
						textBoxTranId->Text = reader->GetInt32(0).ToString();
					}
					labelTotal->Text = "0$";
					Total = 0;
				}
				catch (Exception^ e) {
					MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
				}

			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
			}
			this->Total = 0;
			labelTotal->Text = Total.ToString();

		}
		
	}
	private: double ProductPriceT;
	private: int QytPriceT;
	private: double Total = 0;
	private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			int index = e->RowIndex;// get the Row Index             
			DataGridViewRow^ selectedRow = dataGridView1->Rows[index];
			textBoxProdId->Text = selectedRow->Cells[0]->Value->ToString();
			textBoxProdName->Text = selectedRow->Cells[1]->Value->ToString();
			ProductPriceT = System::Convert::ToDouble(selectedRow->Cells[2]->Value);
			QytPriceT = System::Convert::ToInt32(selectedRow->Cells[3]->Value);
		}
	}
	private: System::Void calc_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ProductPriceT == 0) {
			MessageBox::Show("No Price", "ERR", MessageBoxButtons::OK);
		}
		else {
			textBoxPrice->Text = System::Convert::ToString(System::Convert::ToInt32(textBoxQty->Text) * ProductPriceT);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
			SqlConnection sqlcon(conn);
			sqlcon.Open();

			String^ SqlQuery = "INSERT INTO items " + "(transaction_Id, Product_Id, Quantity, total_price) VALUES " + "(@tran, @prod, @qty, @total)";

			SqlCommand command(SqlQuery, % sqlcon);
			command.Parameters->AddWithValue("@tran", System::Convert::ToInt32(textBoxTranId->Text));
			command.Parameters->AddWithValue("@prod", System::Convert::ToInt32(textBoxProdId->Text));
			command.Parameters->AddWithValue("@qty", System::Convert::ToInt32(textBoxQty->Text));
			command.Parameters->AddWithValue("@total", System::Convert::ToDouble(System::Convert::ToInt32(textBoxQty->Text) * ProductPriceT));

			command.ExecuteNonQuery();

			dataGridView2->Rows->Clear();
			loading_Sale();

			Total += System::Convert::ToInt32(textBoxQty->Text) * ProductPriceT;
			labelTotal->Text = Total.ToString() + "$";
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
		}
	}
};
}
