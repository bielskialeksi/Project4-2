#include<iostream>
#include"Course.h"
using namespace std;

Course::~Course() {

}
Course::Course(int nombre, string name) {
	this->nombre = nombre;
	this->object = name;
}

int Course::return_nombre() {
	return this->nombre;
}
string Course::return_object() {
	return this->object;
}

