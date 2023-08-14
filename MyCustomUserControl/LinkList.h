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
	void printList(DataGridView^ gridView);

	// Function to delete the
	// node at given position
	void deleteNode(int);

	// Fuction to search Node
	// listview
	void SearchNode(DataGridView^ gridView, String^ item);
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
		MessageBox::Show("Product is out of Range", "Product", MessageBoxButtons::OK);
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
	if (temp1->next == nullptr) {
		temp2->next = nullptr;
	}
	else {
		temp2->next = temp1->next;
	}

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
void Linkedlist::printList(DataGridView^ gridView)
{
	Node^ temp = head;

	// Check for empty list.
	if (head == nullptr) {
		MessageBox::Show("Product is Empty", "Product", MessageBoxButtons::OK);
		return;
	}
	gridView->Rows->Clear();
	// Traverse the list.
	while (temp != nullptr) {

		gridView->Rows->Add(temp->product->id.ToString(), temp->product->Name, temp->product->Price.ToString(), temp->product->Quantity.ToString(), temp->product->Type);

		temp = temp->next;
	}
}

void Linkedlist::SearchNode(DataGridView^ gridView, String^ item) {
	Node^ temp = head;
	bool check = true;

	if (head == nullptr) {
		MessageBox::Show("Product is Empty", "Product", MessageBoxButtons::OK);
		return;
	}

	while (temp != nullptr) {

		if (temp->product->id.ToString() == item || temp->product->Name == item || temp->product->Type == item) {
			if (check) {
				check = false;
				gridView->Rows->Clear();
			}
			gridView->Rows->Add(temp->product->id.ToString(), temp->product->Name, temp->product->Price.ToString(), temp->product->Quantity.ToString(), temp->product->Type);
			
		}

		temp = temp->next;
	}

	if (check) {
		MessageBox::Show("Cannot Find Product " + item, "Product", MessageBoxButtons::OK);
	}

}


