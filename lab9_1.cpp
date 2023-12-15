#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double l,py,cp;
	cout << "Enter initial loan: ";
	cin >> l;
	cout << "Enter interest rate per year (%): ";
	cin >> py;
	cout << "Enter amount you can pay per year: ";
	cin >> cp;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double mt = l;
	double N ;
	int i=1;
	do{
	double it = (py/100)*mt;
	double t = mt + it;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i;
		i++; 
	cout << setw(13) << left << mt;
	cout << setw(13) << left << it;
	cout << setw(13) << left << t;
	if (t < cp) cp = t;
	cout << setw(13) << left << cp;
	N = t-cp;
	cout << setw(13) << left << N;
	mt = N;
	cout << "\n";
	}while(N > 0);
	return 0;
}
