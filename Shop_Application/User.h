#pragma once

using namespace System;

public ref class User {
public:
	int id;
	String^ Name;
	int Age;
	String^ Sex;
	DateTime DateOfBirth;
	String^ Address;
	String^ Phone;
	String^ Email;
	String^ Password;
	DateTime RegisterDate;
	String^ Position;
	String^ WorkHour;
	String^ Salary;
};