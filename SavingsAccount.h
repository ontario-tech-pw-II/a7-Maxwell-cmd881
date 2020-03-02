#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

using namespace std;

class SavingsAccount : public Account{
	private:
		double interestRate; // interest rate (percentage) 
		double transactionFee;
	public:
	
		// constructor initializes balance and interest rate SavingsAccount( double, double );
		SavingsAccount( double, double ); 
		SavingsAccount(double,double,double);
		// determine interest owed
		double calculateInterest(); 

		void display(ostream &) const;
};
#endif