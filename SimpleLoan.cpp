/********************************************************
*Title: SimpleLoan.cpp
*Description: This is the function file to execute our functions for the simple loans, 
*implementing a different function for the monthly payment 
*Author: Lisa Cho
*Created: April 11, 2024
*Summary of Modifications:
* 11 April 2024 - created the function file for simpleLoan
* 11 April 2024 - added the appropriate include statement 
* 11 April 2024 - used pointers for the setters and set up the getters and display 
* 11 April 2024 - added in the monthly payment and the appropriate equation to use 
********************************************************/
#include <iostream>
    using std::cout; 
    using std::cin;
    using std::endl;
#include <string>
    using std::string;
#include <iomanip>
    using std::setw;
    using std::setfill;
#include <cmath>
    using std::pow;
#include <fstream>
    using std::ofstream;
#include "SimpleLoan.h"
#include "Loan.h"

// constructors
// default constructors
SimpleLoan::SimpleLoan() : Loan()
{
    setLoanType ("Simple Loan"); //sets the type as simple loan
}

SimpleLoan::SimpleLoan(float principal, float interestRate, int loanLength)
:Loan(principal, interestRate, loanLength, "Simple Loan")
{
    // intentionally left blank
}

// this will be the function to calculate for the monthly payment
float SimpleLoan::monthlyPayment()
{
    //use getters to access the interestRate, loanLength, and principal
    float monthlyRate = getInterestRate() / 100 / 12; // divide by both 100 and 12 to get the monthly interest rate
    int monthlyLength = getLoanLength() * 12; // multiply by 12 to get length in months
    float monthlyPay = (getPrincipal() * (monthlyRate * monthlyLength + 1)) / monthlyLength;

    return monthlyPay;
}
