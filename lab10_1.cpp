#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
    double loan,rate,amount ;
	cout << "Enter initial loan: ";
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
    cin >> rate;
	cout << "Enter amount you can pay per year: ";
    cin >> amount;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
    int i=1 ;
	    do{
        if( loan == 0)break;
        cout << fixed << setprecision(2); 
	    cout << setw(13) << left << i; 
	    cout << setw(13) << left << loan;
	    cout << setw(13) << left << loan * rate / 100;
	    cout << setw(13) << left << loan+(loan*rate/100);
        if (loan+(loan*rate/100) < amount){
            amount = loan+(loan*rate/100);
        }
	    cout << setw(13) << left << amount ;
	    cout << setw(13) << left << (loan +(loan*rate/100))-amount ;
	    cout << "\n";
        loan = (loan +(loan*rate/100))-amount ;
        i++ ;
        }while(loan > 1); 
	return 0;
}