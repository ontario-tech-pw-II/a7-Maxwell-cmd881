
#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	if(interestRate>0){
    interestRate = rate;
	}else{
	interestRate = 0.0;
	}
}

SavingsAccount::SavingsAccount(double initialBalance, double rate, double fee){
	if(interestRate>0){
    	interestRate = rate;
	}else{
		interestRate = 0.0;
	}

	if(fee>0){
    	transactionFee = fee;
	}else{
		transactionFee = 0.0;
	}
}

double SavingsAccount::calculateInterest() {
	// your code
} 
void SavingsAccount::display(ostream & os) const
{
	os << "Account type: Saving" <<endl;
	os << "Balance: $ " << getBalance() << endl;
	os << "Interest Rate (%): " << interestRate<<endl;
	// your code
}
