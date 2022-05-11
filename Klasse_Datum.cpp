#include "Klasse_Datum.h"
#include <iostream>
using namespace std;

//allgemeinen Konstruktor definieren: 
Datum::Datum(int A, int B, int C)
{
	tag = A;
	monat = B;
	jahr = C;

}


int Datum::IstSchaltjahr(int irgendeinJahr)
{
	if ((irgendeinJahr % 4 == 0) && (irgendeinJahr % 400 == 0))
	{
		return 1;
	}
	else if (irgendeinJahr % 100 == 0)
	{
		return 0;
	}
	else
	{
		return 0;
	}

}

int Datum::TagDesJahres(int tag, int monat, int jahr)
{

	int TagzahlDesMonats[12] = {0,31,59,90,120,151,181,212,243,273,304,334 };
	int output = 0; //output ist Tag des Jahres
	if (monat == 1)
	{
		output = tag;
	}
	else if (monat >= 2)
	{	
		output = tag + TagzahlDesMonats[monat - 1 ] - 1;
	}
	
	if (IstSchaltjahr(jahr) == 1);
		++output;
	return output;

}
char Datum::Plappern(char flag)
{
	if (Plappern(flag) == true)
	{

	}

};
