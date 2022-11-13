

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int Cln, Ln,
		cpt, cpt1;
	Ln = 1;

	cout << "Entrer la hauteur du tringale:";cin >> Cln;

	for (int cpt = 1;cpt <= (2*Cln-1);cpt++)
	{
		for (int cpt1 = 1;cpt1 <= Ln;cpt1++)
		{
			cout << "* ";
		}
		if (cpt<Cln)
			Ln++;
		else
			Ln--;
		cout << endl;
		
	}
}





	