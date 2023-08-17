#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

public ref class Employee {
	public:
		int id;
		String^ Name;
		String^ Sex;
		String^ DateOfBirth;
		String^ Phone;
		String^ Password;
		String^ RegisterDate;
		String^ Position;
		String^ WorkHour;
		String^ Salary;
};

public ref class Node_Admin {
public:
	Employee^ employee;
	Node_Admin^ next;

	// Default constructor
	Node_Admin()
	{
		employee = nullptr;
		next = nullptr;
	}

	// Parameterised Constructor
	Node_Admin(Employee^ emp)
	{
		this->employee = emp;
		this->next = nullptr;
	}
};

// Linked list class to
// implement a linked list.
public ref class Linkedlist_Admin {
	Node_Admin^ head;

public:
	// Default constructor
	Linkedlist_Admin() { head = nullptr; }

	// Function to insert a
	// Node_Admin at the end of the
	// linked list.
	void insertNode_Admin(Employee^ emp);

	// Function to print the
	// linked list.
	void printList(DataGridView^ gridView);

	// Function to delete the
	// Node_Admin at given position
	void deleteNode_Admin(Employee^ emp);

	// Fuction to search Node_Admin
	// Parameter(data-grid-view, String^ Item)
	void SearchNode_Admin(DataGridView^ gridView, String^ item);

	// Function Update Node_Admin
	// Parameter(data-grid-view, Product^ item_Update)
	void UpdateNode_Admin(Employee^ emp);

	//Function Sort Node_Admin
	// Parameter Option( 1 = ID | 2 = Name | 3 = Type )
	void SortNode_Admin(int option);
};

void Linkedlist_Admin::deleteNode_Admin(Employee^ emp)
{
	Node_Admin^ temp1 = head;
	Node_Admin^ temp2;
	int check = 0;

	if (head == nullptr) {
		MessageBox::Show(L"Employee is Empty", L"Employee", MessageBoxButtons::OK);
		return;
	}

	// Declare temp1
	temp1 = head;

	// Deleting the head.
	if (temp1->employee->id == emp->id) {

		MessageBox::Show("Employee Deleted At " + temp1->employee->id, "Employee", MessageBoxButtons::OK);
		// Update head
		head = head->next;
		delete temp1;
		return;
	}

	while (temp1 != nullptr) {

		if (temp1->employee->id == emp->id) {
			if (temp1->next == nullptr) {
				temp2->next = nullptr;
			}
			else {
				temp2->next = temp1->next;
			}
			check++;

			MessageBox::Show("Employee Deleted At " + temp1->employee->id, "Employee", MessageBoxButtons::OK);

			delete temp1;
			break;
		}

		temp2 = temp1;

		temp1 = temp1->next;
	}

	if (check == 0) {
		MessageBox::Show("Can't Find Employee ID " + emp->id, "Employee", MessageBoxButtons::OK);
	}


}

// Function to insert a new Node_Admin.
void Linkedlist_Admin::insertNode_Admin(Employee^ emp)
{
	// Create the new Node_Admin.
	Node_Admin^ newNode_Admin = gcnew Node_Admin(emp);

	// Assign to head
	if (head == nullptr) {
		head = newNode_Admin;
		return;
	}

	// Traverse till end of list
	Node_Admin^ temp = head;
	while (temp->next != nullptr) {

		// Update temp
		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode_Admin;
}

// Function to print the
// Node_Admins of the linked list.
void Linkedlist_Admin::printList(DataGridView^ gridView)
{
	Node_Admin^ temp = head;

	// Check for empty list.
	if (head == nullptr) {
		MessageBox::Show("Employee is Empty", "Employee", MessageBoxButtons::OK);
		return;
	}
	gridView->Rows->Clear();
	// Traverse the list.
	while (temp != nullptr) {

		gridView->Rows->Add(temp->employee->id.ToString(), temp->employee->Name, temp->employee->Sex, temp->employee->DateOfBirth, temp->employee->Phone, temp->employee->Password, temp->employee->RegisterDate, temp->employee->Position, temp->employee->WorkHour, temp->employee->Salary);

		temp = temp->next;
	}
}

void Linkedlist_Admin::SearchNode_Admin(DataGridView^ gridView, String^ item) {
	Node_Admin^ temp = head;
	bool check = true;

	if (head == nullptr) {
		MessageBox::Show("Employee is Empty", "Employee", MessageBoxButtons::OK);
		return;
	}

	while (temp != nullptr) {

		if (temp->employee->id.ToString() == item || temp->employee->Name == item || temp->employee->Position == item) {
			if (check) {
				check = false;
				gridView->Rows->Clear();
			}
			gridView->Rows->Add(temp->employee->id.ToString(), temp->employee->Name, temp->employee->Sex, temp->employee->DateOfBirth, temp->employee->Phone, temp->employee->Password, temp->employee->RegisterDate, temp->employee->Position, temp->employee->WorkHour, temp->employee->Salary);

		}

		temp = temp->next;
	}

	if (check) {
		MessageBox::Show("Cannot Find Employee " + item, "Employee", MessageBoxButtons::OK);
	}

}

void Linkedlist_Admin::UpdateNode_Admin(Employee^ emp) {
	Node_Admin^ current = head;
	int check = 0;

	if (head == nullptr) {
		MessageBox::Show("Employee is Empty", "Employee", MessageBoxButtons::OK);
		return;
	}

	while (current->next != nullptr) {
		if (current->employee->id == emp->id) {
			current->employee = emp;

			MessageBox::Show("Updated Employee With Employee ID = " + emp->id, "Employee", MessageBoxButtons::OK);

			return;
		}

		current = current->next;
		check++;
	}
	if (check == 0) {
		MessageBox::Show("Cannot Find Employee ID " + emp->id, "Employee", MessageBoxButtons::OK);
	}

}


void Linkedlist_Admin::SortNode_Admin(int option) {
	Node_Admin^ current = head;
	Node_Admin^ index = nullptr;
	Employee^ temp;

	if (option == 1) {

		if (head == nullptr) {
			MessageBox::Show("Employee is Empty", "Employee", MessageBoxButtons::OK);
			return;
		}
		else {
			while (current != nullptr) {
				index = current->next;
				while (index != nullptr) {
					if (current->employee->id > index->employee->id) {
						temp = current->employee;
						current->employee = index->employee;
						index->employee = temp;
					}
					index = index->next;
				}
				current = current->next;
			}
			MessageBox::Show("Completed Sorting List By ID", "Employee", MessageBoxButtons::OK);
		}

	}
	else if (option == 2) {

		if (head == nullptr) {
			MessageBox::Show("Employee is Empty", "Employee", MessageBoxButtons::OK);
			return;
		}
		else {
			while (current != nullptr) {
				index = current->next;
				while (index != nullptr) {
					if ((String::Compare(current->employee->Name, index->employee->Name) > 0)) {
						temp = current->employee;
						current->employee = index->employee;
						index->employee = temp;
					}
					index = index->next;
				}
				current = current->next;
			}
			MessageBox::Show("Completed Sorting List By Name", "Employee", MessageBoxButtons::OK);
		}
	}
	else if (option == 3) {

		if (head == nullptr) {
			MessageBox::Show("Employee is Empty", "Employee", MessageBoxButtons::OK);
			return;
		}
		else {
			while (current != nullptr) {
				index = current->next;
				while (index != nullptr) {
					if ((String::Compare(current->employee->Sex, index->employee->Sex) > 0)) {
						temp = current->employee;
						current->employee = index->employee;
						index->employee = temp;
					}
					index = index->next;
				}
				current = current->next;
			}
			MessageBox::Show("Completed Sorting List By Sex", "Employee", MessageBoxButtons::OK);
		}
	}
	else if (option == 4) {

		if (head == nullptr) {
			MessageBox::Show("Employee is Empty", "Employee", MessageBoxButtons::OK);
			return;
		}
		else {
			while (current != nullptr) {
				index = current->next;
				while (index != nullptr) {
					if ((String::Compare(current->employee->Position, index->employee->Position) > 0)) {
						temp = current->employee;
						current->employee = index->employee;
						index->employee = temp;
					}
					index = index->next;
				}
				current = current->next;
			}
			MessageBox::Show("Completed Sorting List By Position", "Employee", MessageBoxButtons::OK);
		}
	}
}