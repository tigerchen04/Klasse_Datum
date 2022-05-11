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
	
	//Methoden instanziieren: 
	int IstSchaltjahr(int irgendeinJahr);
	int TagDesJahres(int tag, int monat, int jahr);
	char Plappern(char flag);

};
