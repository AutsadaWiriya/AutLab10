#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double PrevBalance, Interest, Total, Payment, rate, NewBalance;
	cout << "Enter initial loan: ";
	cin >> PrevBalance ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment ;

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
	int i = 1;
	while(PrevBalance != 0){
		cout << fixed << setprecision(2); 
		if(PrevBalance <= 0) break;
		// if(rate < 0) break;
		if(Payment <= 0) break;
		
		cout << setw(13) << left << i;
		i++;
		
		cout << setw(13) << left << PrevBalance;
		
		Interest = PrevBalance * (rate/100);
		cout << setw(13) << left << Interest;
		
		Total = PrevBalance + Interest ;
		cout << setw(13) << left << Total;
		
		if(Total < Payment){
			Payment = Total;
		}
		cout << setw(13) << left << Payment;
		
		NewBalance = Total - Payment;
		cout << setw(13) << left << NewBalance;
		
		PrevBalance = NewBalance ;
		
		cout << "\n";
	}

	return 0;
}
