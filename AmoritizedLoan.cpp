/********************************************************
*Title: AmortizedLoan.cpp
*Description: This is the function file to execute our functions for the amortized loan, 
*which will have a different equation for the monthly payment
*Author: Lisa Cho
*Created: April 11, 2024
*Summary of Modifications:
* 11 April 2024 - created the function file for a loan
* 11 April 2024 - added the appropriate include statement 
* 11 April 2024 - used pointers for the setters and set up the getters and display 
* 11 April 2024 - added in the monthly payment function which differs from the simple loan
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
#include "AmortizedLoan.h"
#include "Loan.h"

// constructors
// default constructors
AmortizedLoan::AmortizedLoan() : Loan()
{
    setLoanType ("Amortized Loan"); //sets the type as amortized loan
}

AmortizedLoan::AmortizedLoan(float principal, float interestRate, int loanLength)
:Loan(principal, interestRate, loanLength, "Amortized Loan")
{
    // intentionally left blank
}

float AmortizedLoan::monthlyPayment()
{
    float monthlyRate = getInterestRate() / 100 / 12; // divide by both 100 and 12 to get the monthly interest rate
    int monthlyLength = getLoanLength() * 12; // multiply by 12 to get length in months
    double power = pow((1 + monthlyRate), monthlyLength); // takes the power of the monthly interest plus one to the power of the length
    double monthlyPay = (getPrincipal() * monthlyRate * power) / (power - 1);

    return monthlyPay;
}