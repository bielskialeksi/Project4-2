#pragma once
#include<iostream>
using namespace std;


class biberon {

protected:

	string label;

	int quant;
	int heure;
	int quantit�_max;
	int quantit�_min;
	int volume_bib;

	bool regurgite = false;


public:

	biberon(string , int , int , int , int , int );
	~biberon();
	void biberon_modif_label(string );
	void biberon_modif_quant(int ajt_qunt);
	void biberon_modif_heure(int );
	void biberon_modif_volume(int );
	void biberon_modif_quantit�_max(int );
	void biberon_modif_quantit�_min(int );
	void biberon_regurgite(bool );
	string biberon_label();
};

