#include <iostream>
#include "Klasse_Datum.h"
#include "Klasse_Datum.cpp"
using namespace std;

int main()
{
Datum Testdatum = Datum(2,2,2002);

	cout << Testdatum.IstSchaltjahr(2002) << endl;

	cout << Testdatum.TagDesJahres(2, 2, 2002);
}
