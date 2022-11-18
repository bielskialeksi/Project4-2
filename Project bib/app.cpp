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
			cout << "qu'elle rappel voulez vous suprimez.(0:annuler) \n";
		}
		else {
			cout << "Veuillez rechoisir, car ce rappel n'existe pas. \n";
		}
		cout << this->bib.size()<<"\n";
		cin >> sup;


		test_rep++;
	} while (this->bib.size() < sup || sup < 0);
	

	if (sup == 0) {
		cout << "operation annuler\n";
	}
	else {


		vector <biberon> tpm;
		cout << "phase1";

		for (int i = sup; i > 0 + 1; i--)
		{
			cout << "phase1.1";
			tpm.push_back(this->bib[i]);

			cout << "phase1.2";

			this->bib.pop_back();

			cout << "phase1.3";

		}
		
		this->bib.pop_back();
		
		int size_tpm = tpm.size();
		
		for (int i = size_tpm; i > 0 ; i--)
		{
			
			
			this->bib.push_back(tpm[i]);
			tpm.pop_back();

		}
		
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