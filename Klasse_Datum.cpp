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

//Monate definieren:
int januar = 31;
int februar = 28; 
int maerz = 31;
int april = 30;
int mai = 31;
int juni = 30;
int juli = 31;
int august = 31;
int september = 30;
int oktober = 31;
int november = 30;
int dezember = 31;
int monat[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int Datum::IstSchaltjahr(int irgendeinJahr)
{
	if ((irgendeinJahr % 4 == 0) && (irgendeinJahr % 100 != 0))
	{
		return 1;
	}
	else if (irgendeinJahr % 400 == 0)
	{
		return 0;
	}

}

int Datum::TagDesJahres(int tag, int monat, int jahr)
{
	cout << "Tag eingeben:" << endl;
	cin >> tag;
	cout << "Monat eingeben:" << endl;
	cin >> monat;
	cout << "Jahr eingeben:" << endl;
	cin >> jahr;

return (tag + monat[monat-1] + monat[monat-2] + IstSchaltjahr
	
}

//aufaddieren bis monat -1
//Januar ist 0	

