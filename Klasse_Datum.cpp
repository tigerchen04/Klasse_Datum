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
December 	335
*/

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

int TagzahlDesMonats[12] = {1,32,60,91,121,152,182,213,244,274,305,335};
int output = 0; //output ist Tag des Jahres
if (monat == 1) 
{
	output = tag;
}
else if (monat == 2)
{
	output = tag + TagzahlDesMonats[1] - 1;
}
else if (monat == 3)
{
	output = tag + TagzahlDesMonats[2] - 1;
}
else if (monat == 4)
{
	output = tag + TagzahlDesMonats[3] - 1;
}
else if (monat == 5)
{
	output = tag + TagzahlDesMonats[4] - 1;	
}
else if (monat == 6)
{
	output = tag + TagzahlDesMonats[5] - 1;
}
else if (monat == 7)
{
	output = tag + TagzahlDesMonats[6] - 1;
}
else if (monat == 8)
{
	output = tag + TagzahlDesMonats[7] - 1;
}
else if (monat == 9)
{
	output = tag + TagzahlDesMonats[8] - 1;
}
else if (monat == 10)
{
	output = tag + TagzahlDesMonats[9] - 1;
}
else if (monat == 11)
{
	output = tag + TagzahlDesMonats[10] - 1;
}
else if (IstSchaltjahr(jahr)==1)
	++output;
	
return output;
	
};


