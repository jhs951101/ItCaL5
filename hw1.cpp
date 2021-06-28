#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int n = 0;
	double initial_balance, annual_interest_rate, balance;

	cout << "Initial balance? ";
	cin >> initial_balance;
	cout << "Annual interest rate in percent? ";
	cin >> annual_interest_rate;

	balance = initial_balance;
	cout << fixed << setprecision(2);

	cout << "+-----+--------------------+\n";
	cout << "l" << setw(5) << "year" << "l" << setw(20) << "balance" << "l\n";
	cout << "+-----+--------------------+\n";
	cout << "l" << setw(5) << n << "l" << setw(20) << balance << "l\n";
	cout << "+-----+--------------------+\n";

	n = 1;

	while (balance <= initial_balance*2){
		balance = balance + balance * annual_interest_rate / 100.0;
		cout << "l" << setw(5) << n << "l" << setw(20) << balance << "l\n";
		cout << "+-----+--------------------+\n";
		++n;
	}

	cout << "The initial balance " << initial_balance << " will be doubled after " << n-1 << " years.\n";

	system("pause");
	return 0;

}