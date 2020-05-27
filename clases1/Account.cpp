#include "Account.h"

using namespace std;

Account::Account(void):balance(0)
{
}


vector<string> Account::Report()
{
	vector<string> report;
	report.push_back("Balance is  " + to_string(balance));
	report.push_back(" Transaction: ");
	for (auto t:log)
	{
		report.push_back(t.Report());
	}

	report.push_back("-----------------------");

	return report;
}


bool Account::Deposite(int amt)
{
	if (amt >= 0)
	{
		balance += amt;
		log.push_back(Transaction(amt, "Deposite"));
		return true;
	}
	else
	{
		return false;
	}
}


bool Account::Withdraw(int amt)
{
	if (amt >= 0)
	{
		if (balance >= amt)
		{
			balance -= amt;
			log.push_back(Transaction(amt, "Withdraw"));
			return true;
		}
		else
		{
			return false;
		}
	}else
	{
		return false;
	}
}

//int Account::GetBalance()
//{
//	return balance;
//}
//
