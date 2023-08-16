#pragma once

using namespace System;

public ref class User {
public:
	int id;
	String^ Name;
	String^ Sex;
	DateTime DateOfBirth;
	String^ Phone;
	String^ Password;
	DateTime RegisterDate;
	String^ Position;
	String^ WorkHour;
	String^ Salary;
};