#pragma once
#include<iostream>
#include"biberon.h"
using namespace std;


 biberon::biberon(string label, int quant, int heure, int volume_bib, int quantité_max, int quantité_min) {


	this->label = label;
	this->quant = quant;
	this->heure = heure;
	this->volume_bib = volume_bib;
	this->quantité_max = quantité_max;
	this->quantité_min = quantité_min;
}
 biberon::~biberon() {

}

 void biberon::biberon_modif_label(string label) {
	this->label = label;

	cout << "effectue label\n";

}
 void biberon::biberon_modif_quant(int ajt_quant) {
	this->quant = ajt_quant;

	cout << "effectue ajt_quant\n";

}

 void biberon::biberon_modif_heure(int ajt_heure) {
	this->heure = ajt_heure;

	cout << "effectue ajt_heure\n";
}

 void biberon::biberon_modif_volume(int volume) {
	this->volume_bib = volume;

	cout << "effectue volume\n";
}

 void biberon::biberon_modif_quantité_max(int quantité_max) {
	this->quantité_max = quantité_max;

	cout << "effectue quantité_max\n";
}

 void biberon::biberon_modif_quantité_min(int quantité_min) {
	this->quantité_min = quantité_min;

	cout << "effectue volume\n";
}

 void biberon::biberon_regurgite(bool quest_regurgite) {
	this->regurgite = quest_regurgite;

	cout << "effectue regurgite\n";
}

string biberon::biberon_label() {
	return this->label;
}