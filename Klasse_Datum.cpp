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

//Tag des Jahres am Ersten des jeweiligen Monats (kein Schaltjahr):
//TagDesJahres = TagzahlDesMonats + TagDesMonats -1
/*January 	1	
February 	32	
March 		60	
April 		91	
May 		121	
June 		152	
July 		182	
August 		213	
September 	244	
October 	274	
November 	305	
December 	335*/
int TagzahlDesMonats[] = {1,32,60,91,121,152,182,213,244,274,305,335};

	
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

}

int Datum::TagDesJahres(int tag, int monat, int jahr)
{
	cout << "Tag eingeben:" << endl;
	cin >> tag;
	cout << "Monat eingeben:" << endl;
	cin >> monat;
	cout << "Jahr eingeben:" << endl;
	cin >> jahr;

int output; //output ist Tag des Jahres
if (monat == 1) 
{
	output = tag;
}
else if (monat == 2)
{
	output = tag + TagzahlDesMonates[1] - 1
}
else if (monat == 3)
{
	output = tag + TagzahlDesMonates[2] - 1
}
else if (monat == 4)
{
	output = tag + TagzahlDesMonates[3] - 1
}
else if (monat == 5)
{
	output = tag + TagzahlDesMonates[4] - 1	
}
else if (monat == 6)
{
	output = tag + TagzahlDesMonates[5] - 1
}
else if (monat == 7)
{
	output = tag + TagzahlDesMonates[6] - 1
}
else if (monat == 8)
{
	output = tag + TagzahlDesMonates[7] - 1
}
else if (monat == 9)
{
	output = tag + TagzahlDesMonates[8] - 1
}
else if (monat == 10)
{
	output = tag + TagzahlDesMonates[9] - 1
}
else if (monat == 11)
{
	output = tag + TagzahlDesMonates[10] - 1
}
else if (monat == 12)
{
	output = tag + TagzahlDesMonates[11] - 1
}
else if (jahr == IstSchaltjahr)
	++output;
	
cout << output << endl;
	
	
	
	
//return (tag + monat[monat-1] + monat[monat-2] + IstSchaltjahr
	
}


