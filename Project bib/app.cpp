#include<iostream>
#include <vector>
#include"app.h"



app::~app() {

}
app::app() {
	/*
	if (dimension_L != 0) {
		//recupéré les dimensionsde l'écran
		this->dimension_L = dimension_Longeur_ecran;
		this->dimension_l = dimension_largeur_ecran;

	}
	//ouvrir l'app avec les dimensions
*/


}



int app::heure_rappel() {

	return 0;

}




void app::sup_rappel() {

	

	int sup;
	int test_rep = 0;
	do {
		if (test_rep == 0) {
			cout << "qu'elle rappel voulez vous suprimez. \n";
		}
		else {
			cout << "Veuillez rechoisir, car ce rappel n'existe pas. \n";
		}
		cout << this->bib.size();
		cin >> sup;


		test_rep++;
	} while (this->bib.size()+1 < sup || sup <= 0);
	


	vector <biberon> tpm;

	for (int i = 0; i < sup + 1; i++)
	{
		int size = this->bib.size();
		tpm.push_back(this->bib[size - 1]);
		this->bib.pop_back();

	}
	this->bib.pop_back();
	int size_tpm = tpm.size();
	for (int i = 0; i < size_tpm; i++)
	{
		int size = tpm.size();
		this->bib.push_back(tpm[size - 1]);
		tpm.pop_back();

	}





}



void app::New_rappel() {
	string label;
	int quant;
	int heure;
	int volume_bib;
	int quantité_max;
	int quantité_min;

	cout << "label\n";
	cin >> label;

	cout << "quant biberon\n";
	cin >> quant;

	cout << "heure du rappel\n";
	cin >> heure;

	cout << "volume du biberon\n";
	cin >> volume_bib;

	cout << "quantite max\n";
	cin >> quantité_max;

	cout << "quantite min\n";
	cin >> quantité_min;


	biberon bib(label, quant, heure, volume_bib, quantité_max, quantité_min);

	this->bib.push_back(bib);

}



void app::New_course() {
	string object;
	int nombre;

	cout << "nom de l'objet à acheter\n";
	cin >> object;
	cout << "quantité\n";
	cin >> nombre;
	Course element(nombre, object);
	this->Liste.push_back(element);

}

void app::Liste_de_rappel() {

	for (biberon var : this->bib)
	{
		cout << var.biberon_label() << "\n";
	}

}

void app::Liste_de_course() {

	for (Course var : this->Liste)
	{
		cout << var.return_nombre() << " - " << var.return_object() << "\n";
	}

}