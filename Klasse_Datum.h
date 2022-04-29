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

	//Methode instanziieren: 
	static int IstSchaltjahr(int irgendeinJahr);


};
