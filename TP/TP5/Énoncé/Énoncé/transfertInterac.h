/*
	Fichier : transfertInterac.h

	Fait par :  Cedrik Bienvenue (1894296)
				Mohamed Khairallah Gharbi (1837067)
	Date de derniere modification : 18 novembre 2018
*/

/********************************************
* Titre: Travail pratique #4 - tranfertInterac.h
* Date: 19 octobre 2018
* Auteur: Wassim Khene & Ryan Hardie
*******************************************/
#pragma once

#include "transfert.h"
#include "utilisateurPremium.h"

const double FRAIS_TRANSFERT = 1.0;

class TransfertInterac : public Transfert {
public:
	// Constructeur
	TransfertInterac(double montant, Utilisateur* expediteur, Utilisateur* receveur);

	// Methodes d'acces
	string getCourriel() const;
	void setcourriel(string courriel);

	virtual double getFraisTransfert() const;
private:
	string courriel_;
};