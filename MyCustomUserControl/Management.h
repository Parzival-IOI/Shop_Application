#pragma once
//#include "_Product_.h"
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
	/// Summary for Management
	/// </summary>
	public ref class Management : public System::Windows::Forms::UserControl
	{
	public:
		Management(void)
		{
			InitializeComponent();
			
			loadingData();

			list.printList(listView1);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Management()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	public: Linkedlist list;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 207);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1000, 622);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			this->columnHeader1->Width = 100;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			this->columnHeader2->Width = 200;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Price";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 100;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Quantity";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 130;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Type";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 130;
			// 
			// Management
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->listView1);
			this->Name = L"Management";
			this->Size = System::Drawing::Size(1303, 832);
			this->ResumeLayout(false);

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

					list.insertNode(product);

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
	};
}
