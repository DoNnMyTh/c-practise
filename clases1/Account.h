#pragma once
#include <vector>
#include <string>
#include "Transaction.h"


class Account
{
private:
	int balance;
	std::vector<Transaction> log;
public:
	Account();
	std::vector<std::string> Report();
	bool Deposite(int amt);
	bool Withdraw(int amt);
	int GetBalance() { return balance; }
};
