#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

public ref class Product {
	public:
		int id;
		String^ Name;
		double Price;
		int Quantity;
		String^ Type;
		
};

public ref class Node {
public:
	Product^ product;
	Node^ next;

	// Default constructor
	Node()
	{
		product = nullptr;
		next = nullptr;
	}

	// Parameterised Constructor
	Node(Product^ product)
	{
		this->product = product;
		this->next = nullptr;
	}
};

// Linked list class to
// implement a linked list.
public ref class Linkedlist {
	Node^ head;

public:
	// Default constructor
	Linkedlist() { head = nullptr; }

	// Function to insert a
	// node at the end of the
	// linked list.
	void insertNode(Product^ prod);

	// Function to print the
	// linked list.
	void printList(ListView^ listView);

	// Function to delete the
	// node at given position
	void deleteNode(int);
};

void Linkedlist::deleteNode(int nodeOffset)
{
	Node^ temp1 = head;
	Node^ temp2 = nullptr;
	int check = 0;

	if (head == nullptr) {
		MessageBox::Show(L"Product is Empty", L"Product", MessageBoxButtons::OK);
		return;
	}

	// Find length of the linked-list.
	while (temp1 != nullptr) {
		temp1 = temp1->next;
		check++;
	}

	// Check if the position to be
	// deleted is greater than the length
	// of the linked list.
	if (check < nodeOffset) {
		MessageBox::Show(L"Product is out of Range", L"Product", MessageBoxButtons::OK);
		return;
	}

	// Declare temp1
	temp1 = head;

	// Deleting the head.
	if (nodeOffset == 1) {

		// Update head
		head = head->next;
		delete temp1;
		return;
	}

	// Traverse the list to
	// find the node to be deleted.
	while (nodeOffset-- > 1) {

		// Update temp2
		temp2 = temp1;

		// Update temp1
		temp1 = temp1->next;
	}

	// Change the next pointer
	// of the previous node.
	temp2->next = temp1->next;

	// Delete the node
	delete temp1;
}

// Function to insert a new node.
void Linkedlist::insertNode(Product^ prod)
{
	// Create the new Node.
	Node^ newNode = gcnew Node(prod);

	// Assign to head
	if (head == nullptr) {
		head = newNode;
		return;
	}

	// Traverse till end of list
	Node^ temp = head;
	while (temp->next != nullptr) {

		// Update temp
		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode;
}

// Function to print the
// nodes of the linked list.
void Linkedlist::printList(ListView^ listView)
{
	Node^ temp = head;

	// Check for empty list.
	if (head == nullptr) {
		MessageBox::Show(L"Product is Empty", L"Product", MessageBoxButtons::OK);
		return;
	}

	// Traverse the list.
	while (temp != nullptr) {

		ListViewItem^ items = gcnew ListViewItem(temp->product->id.ToString());
		items->SubItems->Add(temp->product->Name);
		items->SubItems->Add(temp->product->Price.ToString());
		items->SubItems->Add(temp->product->Quantity.ToString());
		items->SubItems->Add(temp->product->Type);

		listView->Items->Add(items);
		delete items;

		temp = temp->next;
	}
}





/*public ref class NodeProduct {
	public:	
		Product product;
		NodeProduct^ next;
		NodeProduct() {
			this->next = nullptr;
		}
};

NodeProduct^ getNode() {
	NodeProduct^ p = gcnew NodeProduct();
	return p;
}

void freeNode(NodeProduct^ p) {
	delete p;
}

NodeProduct^ createList(NodeProduct^ plist) {
	NodeProduct^ p;
	NodeProduct^ ptr;
	//Product product;
	try {
		String^ conn = "Data Source=DESKTOP-20OQ4HO\\DBSERVER;Initial Catalog=ShopApplication;Integrated Security=True";
		SqlConnection sqlcon(conn);
		sqlcon.Open();

		String^ SqlQuery = "Select * from Product";
		SqlCommand command(SqlQuery, % sqlcon);

		SqlDataReader^ reader = command.ExecuteReader();

		while (reader->Read()) {

			p = getNode();

			if (reader->Read()) {
				p->product.id = reader->GetInt32(0);
				p->product.Name = reader->GetString(1);
				p->product.Price = reader->GetDouble(2);
				p->product.Quantity = reader->GetInt32(3);
				p->product.Type = reader->GetString(4);
			}

			p->next = nullptr;
			
			if (plist == nullptr) {
				plist = p;
				ptr = plist;
			}
			else {
				if (p != nullptr) {
					ptr->next = p;
					ptr = p;
				}
			}

		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Database Error !", MessageBoxButtons::OK);
	}
	for (int i = 0; i < n; i++) {
		cout << "\n\tEnter Info Number " << i + 1 << " : ";
		cin >> Item;
		p = getNode();
		p->info = Item;
		p->next = NULL;
		if (plist == NULL) {
			plist = p;
			ptr = plist;
		}
		else {
			ptr->next = p;
			ptr = p;
		}
	}
return (plist);
}


void traverse(NodeProduct^ plist, ListView^ listView) {
	NodeProduct^ ptr;
	ptr = plist;
	int count = 1;
	while (ptr->next != nullptr) {

		ListViewItem^ items = gcnew ListViewItem(ptr->product.id.ToString());
		items->SubItems->Add(ptr->product.Name);
		items->SubItems->Add(ptr->product.Price.ToString());
		items->SubItems->Add(ptr->product.Quantity.ToString());
		items->SubItems->Add(ptr->product.Type);

		listView->Items->Add(items);
		delete items;
		count++;
		ptr = ptr->next;
	}
}*/


