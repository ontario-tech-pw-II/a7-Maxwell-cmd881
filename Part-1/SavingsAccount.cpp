
#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
    interestRate = rate;
}

double SavingsAccount::calculateInterest() {
	// your code
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
}
