// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <cmath>;
using namespace std;



int main()
{
	int broj1, broj2, broj3, broj4, suma, kvadrat1, kvadrat2;
	double arsred, arsred2;
	double kvadrat;
	double korijen;
	int Sumakvadrata, Sumakvadrata2;
	int Sumakubova, Sumakubova2;
	double Sredina;
	double Povrsina;
	double Obujam;
	double dijagonala;

	double x, a;
	double k;
	double r;


	cout << "Unesi neki broj 1" << endl;
	cin >> broj1;
	cout << "Unesi neki broj 2" << endl;
	cin >> broj2;

	
	cout << "Suma brojeva 1 i 2 je : "  ;
	suma = broj1 + broj2;
	cout << suma << endl;

	
	kvadrat1 = broj1 * broj1;
	kvadrat2 = broj2 * broj2;
	cout << "Kvadrat prvog broja je : ";
	cout << kvadrat1 << endl;
	cout << "Kvadrat drugog broja je : ";
	cout << kvadrat2 << endl;

	arsred = (broj1+broj2) / 2;
	cout << "Aritmeticka sredina brojeva je : ";
	cout << arsred << endl;

	cout << "Upisi treci broj : ";
	cin >> broj3;
	cout << "Aritmeticka sredina brojeva je : ";
	arsred2= (broj1+broj2+broj3) / 3;
	cout << arsred2 << endl;

	cout << "Kadrat brojeva je : ";
	kvadrat = pow(broj1, 2);
	cout << kvadrat<< endl;

	cout << "Korijen broja 3 je : ";
	korijen = sqrt(broj3);
	cout << korijen << endl;


	cout << "Suma kvadrata dva broja : ";
	Sumakvadrata = pow(broj1, 2)+pow(broj2,2);
	cout << Sumakvadrata << endl;

	cout << "Suma kvadrata tri broja : ";
	Sumakvadrata2 = pow(broj1, 2) + pow(broj2, 2) + pow(broj3,2);
	cout << Sumakvadrata2 << endl;

	cout << "Suma kubova dva broja : ";
	Sumakubova = pow(broj1, 3) + pow(broj2, 3);
	cout << Sumakubova << endl;

	cout << "Suma kubova tri broja : ";
	Sumakubova2 = pow(broj1, 3) + pow(broj2, 3) + pow(broj3, 3);
	cout << Sumakubova2 << endl;

	cout << "Korijen aritmetičke sredine dva broja je : ";
	Sredina = sqrt(arsred);
	cout << Sredina << endl;

	cout << "Unesi cetvrti broj : ";
	cin >> broj4;
	arsred = (broj1 + broj2 + broj3 + broj4) / 4;
	Sredina = sqrt(arsred);
	cout << "Korijen aritmeticke sredine cetiri broja je : ";
	cout << Sredina << endl;

	cout << "Povrsina kvadrata je : ";
	Povrsina = broj1 * broj1;
	cout << Povrsina << endl;
	
	cout << "Obujam prvog broja je : ";
	Obujam = 4 * broj1;
	cout << Obujam << endl;

	cout << "Obujam kocke je : ";
	Obujam = 12 * broj1;
	cout << Obujam << endl;

	cout << "Povrsina kocke je : ";
	Povrsina = 6 * broj1*broj1;
	cout << Povrsina << endl;

	cout << "Dijagonala kvadrata je : ";
	dijagonala = broj1 * sqrt(2);
	cout << dijagonala << endl;

	cout << "Obujam pravokutnika je : ";
	Obujam = 2*(broj1+broj2);
	cout << Obujam << endl;

	cout << "Povrsina pravokutnika je : ";
	Povrsina = (broj1*broj2);
	cout << Povrsina << endl;

	cout << "Dijagonala pravokutnika je : ";
	dijagonala = sqrt(broj1*broj1+broj2*broj2);
	cout << dijagonala << endl;

	cout << "Unesite broj x :"<<endl;
	cin >> x ;
	cout << "2 x je : "<< 2*x <<endl;

	cout << "Unesite broj a :" <<endl;
	cin >> a;
	cout << "a /3 x je : " << a / 3 << endl;

	cout << "Obujam kruga je : ";
	cin >> k;
	Obujam = 2 * (k*3.14);
	cout << Obujam << endl;

	cout << " Povrsina kruga je : ";
	Povrsina = 3.14*(k*k);
	cout << Povrsina << endl;


	cout << "Unesi površinu :" <<endl;
	cin >> Povrsina;
	r = sqrt(Povrsina / 3.14);
	cout << "Polumjer kruga je " << r <<endl;
	Obujam = 2 * r*3.14;
	cout << "Obujam kruga je " << Obujam;
	

	system("pause");
	return 0;

}

