#pragma once
#include <iostream>
using namespace std;

class Datum {
private:
	int tag;
	int monat;
	int jahr;

public:
	//allgemeiner Konstruktor:
	Datum(int Tag, int Monat, int Jahr);

	//Monate deklarieren:
	int januar;
	int februar;
	int maerz;
	int april;
	int mai;
	int juni;
	int juli;
	int august;
	int september;
	int oktober;
	int november;
	int dezember;
	
	//Methode instanziieren: 
	static int IstSchaltjahr(int irgendeinJahr);
	int TagDesJahres(int tag, int monat, int jahr);
	
	//Methode plappern:
	

};
