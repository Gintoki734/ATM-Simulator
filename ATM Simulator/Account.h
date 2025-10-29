#pragma once
#include <string>
#include <unordered_map>

//To hold card account information
struct CardAccount {
	std::string pin;
	double balance; //Use of double allows for a safer and precise value compared to float
};

class Account
{
private:
	std::unordered_map<std::string, CardAccount> accounts; //A fast way to do lookups

public:
	bool verifyCard(const std::string& cardNum); // Verify the card, spit out the card if it isnt valid
	bool verifyPin(const std::string& cardNum, const std::string& pin); // Verify the card, spit out the card if it isnt valid
	bool withdraw(const std::string& cardNum, double amount); // return false if there isnt sufficient money on the account otherwise true for success
	double currentbalance(const std::string& cardNum); // Returns the balance of the account
	void deposit(const std::string& cardNum, double amount); // Deposit money into account
};

