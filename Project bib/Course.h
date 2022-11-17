#pragma once
#include<iostream>
using namespace std;



class Course {

protected:

	int nombre;
	string object;

public:

	~Course();

	Course(int nombre, string name);

	int return_nombre();

	string return_object();
};
