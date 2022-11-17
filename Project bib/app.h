#pragma once
#include<iostream>
#include <vector>
#include"biberon.h"
#include"Course.h"
#include "constants.h"


using namespace std;


class app {

protected:


	int dimension_L = 0;
	int dimension_l = 0;
	int nombre_enfants = 0;
	vector <Course> Liste;
	vector <biberon> bib;

public:


	~app();

	app();

	int heure_rappel();

	void sup_rappel();

	void New_rappel();

	void New_course();

	void Liste_de_rappel();

	void Liste_de_course();


};