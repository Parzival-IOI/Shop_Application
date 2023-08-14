#pragma once
#include "LinkList.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


namespace MyCustomUserControl {

	/// <summary>
	/// Summary for Manage
	/// </summary>
	public ref class Manage : public System::Windows::Forms::UserControl
	{
	public:
		Manage(void)
		{
			InitializeComponent();

			loadingData();

			list.printList(dataGridView2);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Manage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView2;





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Update;

	private: System::Windows::Forms::Button^ Insert;
	private: System::Windows::Forms::TextBox^ searchTextBox;


	private: System::Windows::Forms::Button^ seachProduct;
	public: Linkedlist list;
	private: Product^ product;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Delete;


	private: System::Windows::Forms::Button^ Sort;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel3;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxType;





	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::NumericUpDown^ NumberPrice;
	private: System::Windows::Forms::NumericUpDown^ NumberQuantity;
	private: System::Windows::Forms::Label^ ProductID;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;





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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->Insert = (gcnew System::Windows::Forms::Button());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->seachProduct = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ProductID = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->NumberPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->NumberQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumberPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumberQuantity))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Gainsboro;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView2->Location = System::Drawing::Point(0, 377);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(1303, 452);
			this->dataGridView2->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Delete);
			this->panel1->Controls->Add(this->Update);
			this->panel1->Controls->Add(this->Insert);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->ForeColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(1002, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(301, 377);
			this->panel1->TabIndex = 3;
			// 
			// Delete
			// 
			this->Delete->ForeColor = System::Drawing::Color::Black;
			this->Delete->Location = System::Drawing::Point(63, 272);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(163, 56);
			this->Delete->TabIndex = 2;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = true;
			// 
			// Update
			// 
			this->Update->ForeColor = System::Drawing::Color::Black;
			this->Update->Location = System::Drawing::Point(63, 148);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(163, 56);
			this->Update->TabIndex = 1;
			this->Update->Text = L"Update";
			this->Update->UseVisualStyleBackColor = true;
			// 
			// Insert
			// 
			this->Insert->ForeColor = System::Drawing::Color::Black;
			this->Insert->Location = System::Drawing::Point(63, 42);
			this->Insert->Name = L"Insert";
			this->Insert->Size = System::Drawing::Size(163, 49);
			this->Insert->TabIndex = 0;
			this->Insert->Text = L"Insert";
			this->Insert->UseVisualStyleBackColor = true;
			this->Insert->Click += gcnew System::EventHandler(this, &Manage::Insert_Click);
			// 
			// searchTextBox
			// 
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTextBox->ForeColor = System::Drawing::Color::Black;
			this->searchTextBox->Location = System::Drawing::Point(14, 339);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(189, 29);
			this->searchTextBox->TabIndex = 4;
			// 
			// seachProduct
			// 
			this->seachProduct->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seachProduct->ForeColor = System::Drawing::Color::Black;
			this->seachProduct->Location = System::Drawing::Point(213, 339);
			this->seachProduct->Name = L"seachProduct";
			this->seachProduct->Size = System::Drawing::Size(87, 35);
			this->seachProduct->TabIndex = 6;
			this->seachProduct->Text = L"Search";
			this->seachProduct->UseVisualStyleBackColor = true;
			this->seachProduct->Click += gcnew System::EventHandler(this, &Manage::seachProduct_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gainsboro;
			this->panel2->Controls->Add(this->ProductID);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->NumberPrice);
			this->panel2->Controls->Add(this->NumberQuantity);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBoxType);
			this->panel2->Controls->Add(this->textBoxName);
			this->panel2->Location = System::Drawing::Point(14, 14);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(931, 303);
			this->panel2->TabIndex = 7;
			// 
			// ProductID
			// 
			this->ProductID->AutoSize = true;
			this->ProductID->BackColor = System::Drawing::Color::White;
			this->ProductID->Location = System::Drawing::Point(164, 28);
			this->ProductID->Name = L"ProductID";
			this->ProductID->Padding = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->ProductID->Size = System::Drawing::Size(80, 26);
			this->ProductID->TabIndex = 11;
			this->ProductID->Text = L"Unknown";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(53, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Product Id";
			// 
			// NumberPrice
			// 
			this->NumberPrice->Location = System::Drawing::Point(610, 94);
			this->NumberPrice->Name = L"NumberPrice";
			this->NumberPrice->Size = System::Drawing::Size(206, 26);
			this->NumberPrice->TabIndex = 9;
			// 
			// NumberQuantity
			// 
			this->NumberQuantity->Location = System::Drawing::Point(140, 190);
			this->NumberQuantity->Name = L"NumberQuantity";
			this->NumberQuantity->Size = System::Drawing::Size(206, 26);
			this->NumberQuantity->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(546, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Type";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(546, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Price";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(53, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Quantity";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(53, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Name";
			// 
			// textBoxType
			// 
			this->textBoxType->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxType->Location = System::Drawing::Point(610, 190);
			this->textBoxType->Name = L"textBoxType";
			this->textBoxType->Size = System::Drawing::Size(206, 26);
			this->textBoxType->TabIndex = 3;
			// 
			// textBoxName
			// 
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Location = System::Drawing::Point(140, 94);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(206, 26);
			this->textBoxName->TabIndex = 0;
			// 
			// Sort
			// 
			this->Sort->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort->ForeColor = System::Drawing::Color::Black;
			this->Sort->Location = System::Drawing::Point(858, 339);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(87, 35);
			this->Sort->TabIndex = 8;
			this->Sort->Text = L"Sort";
			this->Sort->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ID", L"Name", L"Type" });
			this->comboBox1->Location = System::Drawing::Point(697, 339);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(149, 30);
			this->comboBox1->TabIndex = 9;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SlateGray;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(992, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 377);
			this->panel3->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(318, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 35);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Manage::button1_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 250;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Price";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Quantity";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Type";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 200;
			// 
			// Manage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->seachProduct);
			this->Controls->Add(this->searchTextBox);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView2);
			this->Name = L"Manage";
			this->Size = System::Drawing::Size(1303, 829);
			this->Load += gcnew System::EventHandler(this, &Manage::Manage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumberPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumberQuantity))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void loadingData() {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "Select * from Product";
				SqlCommand command(SqlQuery, % sqlcon);

				SqlDataReader^ reader = command.ExecuteReader();

				int count = 0;

				Product^ product;

				while (reader->Read()) {

					product = gcnew Product;
					product->id = reader->GetInt32(0);
					product->Name = reader->GetString(1);
					product->Price = reader->GetDouble(2);
					product->Quantity = reader->GetInt32(3);
					product->Type = reader->GetString(4);

					this->list.insertNode(product);


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
#pragma endregion
	private: System::Void Manage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void seachProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ item = this->searchTextBox->Text;
		list.SearchNode(dataGridView2, item);
		this->searchTextBox->Text = "";
	}
	private: System::Void Insert_Click(System::Object^ sender, System::EventArgs^ e) {

		Product^ prod = gcnew Product();
		prod->id = 0;
		prod->Name = this->textBoxName->Text;
		prod->Price = System::Convert::ToDouble(this->NumberPrice->Value);
		prod->Quantity = System::Convert::ToInt32(this->NumberQuantity->Value);
		prod->Type = this->textBoxType->Text;

		if (prod->Name == "" || prod->Price == 0 || prod->Quantity == 0 || prod->Type == "") {
			MessageBox::Show("Empty Field, Please Fill The Complete Form", "Product", MessageBoxButtons::OK);
		}
		else {
			try {
				String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
				SqlConnection sqlcon(conn);
				sqlcon.Open();

				String^ SqlQuery = "INSERT INTO Product " + "(Product_Name, Product_Price, Product_Quantity, Product_Type) VALUES " + "(@Name, @Price, @Quantity, @Type)";

				SqlCommand command(SqlQuery, % sqlcon);
				command.Parameters->AddWithValue("@Name", prod->Name);
				command.Parameters->AddWithValue("@Price", prod->Price);
				command.Parameters->AddWithValue("@Quantity", prod->Quantity);
				command.Parameters->AddWithValue("@Type", prod->Type);

				command.ExecuteNonQuery();

				try {
					String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
					SqlConnection sqlcon(conn);
					sqlcon.Open();

					String^ SqlQuery = "SELECT Id FROM Product WHERE Product_Name=@Name";

					SqlCommand command(SqlQuery, % sqlcon);
					command.Parameters->AddWithValue("@Name", prod->Name);

					SqlDataReader^ reader = command.ExecuteReader();

					if (reader->Read()) {
						prod->id = reader->GetInt32(0);
					}
					
					list.insertNode(prod);
					list.printList(dataGridView2);

					this->textBoxName->Text = "";
					this->textBoxType->Name = "";
					this->NumberPrice->Value = 0;
					this->NumberQuantity->Value = 0;

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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		list.printList(dataGridView2);
		this->ProductID->Text = "Unknown";
		this->textBoxName->Text = "";
		this->textBoxType->Name = "";
		this->NumberPrice->Value = 0;
		this->NumberQuantity->Value = 0;
	}
};
}
