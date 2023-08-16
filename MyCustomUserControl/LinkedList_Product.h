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

public ref class Node_Product {
public:
	Product^ product;
	Node_Product^ next;

	// Default constructor
	Node_Product()
	{
		product = nullptr;
		next = nullptr;
	}

	// Parameterised Constructor
	Node_Product(Product^ product)
	{
		this->product = product;
		this->next = nullptr;
	}
};

// Linked list class to
// implement a linked list.
public ref class Linkedlist_Product {
	Node_Product^ head;

public:
	// Default constructor
	Linkedlist_Product() { head = nullptr; }

	// Function to insert a
	// Node_Product at the end of the
	// linked list.
	void insertNode_Product(Product^ prod);

	// Function to print the
	// linked list.
	void printList(DataGridView^ gridView);

	// Function to delete the
	// Node_Product at given position
	void deleteNode_Product(Product^ prod);

	// Fuction to search Node_Product
	// Parameter(data-grid-view, String^ Item)
	void SearchNode_Product(DataGridView^ gridView, String^ item);

	// Function Update Node_Product
	// Parameter(data-grid-view, Product^ item_Update)
	void UpdateNode_Product(Product^ prod);

	//Function Sort Node_Product
	// Parameter Option( 1 = ID | 2 = Name | 3 = Type )
	void SortNode_Product(int option);
};

void Linkedlist_Product::deleteNode_Product(Product^ prod)
{
	Node_Product^ temp1 = head;
	Node_Product^ temp2;
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

// Function to insert a new Node_Product.
void Linkedlist_Product::insertNode_Product(Product^ prod)
{
	// Create the new Node_Product.
	Node_Product^ newNode_Product = gcnew Node_Product(prod);

	// Assign to head
	if (head == nullptr) {
		head = newNode_Product;
		return;
	}

	// Traverse till end of list
	Node_Product^ temp = head;
	while (temp->next != nullptr) {

		// Update temp
		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode_Product;
}

// Function to print the
// Node_Products of the linked list.
void Linkedlist_Product::printList(DataGridView^ gridView)
{
	Node_Product^ temp = head;

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

void Linkedlist_Product::SearchNode_Product(DataGridView^ gridView, String^ item) {
	Node_Product^ temp = head;
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

void Linkedlist_Product::UpdateNode_Product(Product^ prod) {
	Node_Product^ current = head;
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


void Linkedlist_Product::SortNode_Product(int option) {
	Node_Product^ current = head;
	Node_Product^ index = nullptr;
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

