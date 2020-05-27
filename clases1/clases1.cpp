#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account a1;
	a1.Deposite(90);
	cout <<   "After deposition $90" << endl << "Balance is $" << a1.GetBalance() << endl << endl ;
	/*for (auto s:a1.Report())
	{
		cout << s << endl ;
	}*/

	a1.Withdraw(50);
	if (a1.Withdraw(100))
	{
		cout << "second withdraw succeeds" << endl;
	}

	cout << "After withdrawing $50 then $100" << endl;

	for (auto s : a1.Report())
	{
		std::cout << s << endl;
	}
	return 0;
}
