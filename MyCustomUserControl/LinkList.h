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
	void deleteNode(Product^ prod);

	// Fuction to search Node
	// Parameter(data-grid-view, String^ Item)
	void SearchNode(DataGridView^ gridView, String^ item);

	// Function Update Node
	// Parameter(data-grid-view, Product^ item_Update)
	void UpdateNode(Product^ prod);

	//Function Sort Node
	// Parameter Option( 1 = ID | 2 = Name | 3 = Type )
	void SortNode(int option);
};

void Linkedlist::deleteNode(Product^ prod)
{
	Node^ temp1 = head;
	Node^ temp2;
	int check = 0;

	if (head == nullptr) {
		MessageBox::Show(L"Product is Empty", L"Product", MessageBoxButtons::OK);
		return;
	}

	// Declare temp1
	temp1 = head;

	// Deleting the head.
	if (temp1->product->id == prod->id && temp1->product->Name == prod->Name) {

		MessageBox::Show("Product Deleted At " + temp1->product->id, "Product", MessageBoxButtons::OK);
		// Update head
		head = head->next;
		delete temp1;
		return;
	}

	while (temp1 != nullptr) {

		if (temp1->product->id == prod->id && temp1->product->Name == prod->Name) {
			if (temp1->next == nullptr) {
				temp2->next = nullptr;
			}
			else {
				temp2->next = temp1->next;
			}
			check++;

			MessageBox::Show("Product Deleted At " + temp1->product->id, "Product", MessageBoxButtons::OK);

			delete temp1;
			break;
		}

		temp2 = temp1;

		temp1 = temp1->next;
	}

	if(check == 0){
		MessageBox::Show("Can't Find Product ID " + prod->id, "Product", MessageBoxButtons::OK);
	}


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

void Linkedlist::UpdateNode(Product^ prod) {
	Node^ current = head;
	int check = 0;

	if (head == nullptr) {
		MessageBox::Show("Product is Empty", "Product", MessageBoxButtons::OK);
		return;
	}

	while (current->next != nullptr) {
		if (current->product->id == prod->id) {
			current->product = prod;

			MessageBox::Show("Updated Product With Product ID = " + prod->id, "Product", MessageBoxButtons::OK);

			return;
		}

		current = current->next;
		check++;
	}
	if (check == 0) {
		MessageBox::Show("Cannot Find Product ID " + prod->id, "Product", MessageBoxButtons::OK);
	}

}


void Linkedlist::SortNode(int option) {
	Node^ current = head;
	Node^ index = nullptr;
	Product^ temp;

	if (option == 1) {

		if (head == nullptr) {
			MessageBox::Show("Product is Empty", "Product", MessageBoxButtons::OK);
			return;
		}
		else {
			while (current != nullptr) {
				index = current->next;
				while (index != nullptr) {
					if (current->product->id > index->product->id) {
						temp = current->product;
						current->product = index->product;
						index->product = temp;
					}
					index = index->next;
				}
				current = current->next;
			}
			MessageBox::Show("Completed Sorting List By ID", "Product", MessageBoxButtons::OK);
		}

	}
	else if (option == 2) {

		if (head == nullptr) {
			MessageBox::Show("Product is Empty", "Product", MessageBoxButtons::OK);
			return;
		}
		else {
			while (current != nullptr) {
				index = current->next;
				while (index != nullptr) {
					if (current->product->id < index->product->id) {
						temp = current->product;
						current->product = index->product;
						index->product = temp;
					}
					index = index->next;
				}
				current = current->next;
			}
			MessageBox::Show("Completed Sorting List By ID", "Product", MessageBoxButtons::OK);
		}
	}
	else if (option == 3) {

		if (head == nullptr) {
			MessageBox::Show("Product is Empty", "Product", MessageBoxButtons::OK);
			return;
		}
		else {
			while (current != nullptr) {
				index = current->next;
				while (index != nullptr) {
					if (current->product->id > index->product->id) {
						temp = current->product;
						current->product = index->product;
						index->product = temp;
					}
					index = index->next;
				}
				current = current->next;
			}
			MessageBox::Show("Completed Sorting List By ID", "Product", MessageBoxButtons::OK);
		}
	}
}

