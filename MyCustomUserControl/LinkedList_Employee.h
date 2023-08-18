#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

public ref class Sale {
	int id;
	String^ Emp_id;
	String^ Emp_Name;
	String^ date;
};

public ref class Node_Sale {
public:
	Sale^ sale;
	Node_Sale^ next;

	// Default constructor
	Node_Sale()
	{
		sale = nullptr;
		next = nullptr;
	}

	// Parameterised Constructor
	Node_Sale(Sale^ sale)
	{
		this->sale = sale;
		this->next = nullptr;
	}
};