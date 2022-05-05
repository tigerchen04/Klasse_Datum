#include <iostream>
#include "Klasse_Datum.h"
#include "Klasse_Datum.cpp"
using namespace std;

int main()
{
Datum Testdatum = Datum(2,2,2002);

	//cout << "Geben Sie ein Jahr ein:";
	//cin >> jahr;
	cout << Testdatum.IstSchaltjahr(2002);
	//cout << "Geben Sie den Tag, Monat und Jahr ein: ";
		//cin >> tag;
		//cin >> monat;
		//cin >> jahr;
	cout << Testdatum.TagDesJahres(2, 2, 2002);
}
