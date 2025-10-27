#pragma once
#include <string>
#include <unordered_map>

//To hold card account information
struct CardAccount {
	std::string pin;
	double balance;
};

class Account
{
private:
	std::unordered_map<std::string, CardAccount> accounts; //A fast way to do lookups
};

