#include<iostream>
#include <vector>
#include"app.h"



app::~app() {

}
app::app() {
	/*
	if (dimension_L != 0) {
		//recup�r� les dimensionsde l'�cran
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

		for (int i = 0; i < sup + 1; i++)
		{
			cout << "phase1.1";
			int size_1 = this->bib.size();

			tpm.push_back(this->bib[size_1]);

			cout << "phase1.2";

			this->bib.pop_back();

			cout << "phase1.3";

		}
		cout << "phase2";
		this->bib.pop_back();
		cout << "phase3";
		int size_tpm = tpm.size();
		cout << "phase4";
		for (int i = 0; i < size_tpm; i++)
		{
			
			int size = tpm.size();
			this->bib.push_back(tpm[size - 1]);
			tpm.pop_back();

		}
		cout << "phase5";
	}
	





}



void app::New_rappel() {
	string label;
	int quant;
	int heure;
	int volume_bib;
	int quantit�_max;
	int quantit�_min;

	cout << "label\n";
	cin >> label;

	cout << "quant biberon\n";
	cin >> quant;

	cout << "heure du rappel\n";
	cin >> heure;

	cout << "volume du biberon\n";
	cin >> volume_bib;

	cout << "quantite max\n";
	cin >> quantit�_max;

	cout << "quantite min\n";
	cin >> quantit�_min;


	biberon bib(label, quant, heure, volume_bib, quantit�_max, quantit�_min);

	this->bib.push_back(bib);

}



void app::New_course() {
	string object;
	int nombre;

	cout << "nom de l'objet � acheter\n";
	cin >> object;
	cout << "quantit�\n";
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