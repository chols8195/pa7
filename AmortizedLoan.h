/********************************************************
* Title: AmortizedLoan.h
* Description: This is the header file for the function file AmortizedLoan.cpp, this file will set up the class and functions for the functions file.
* This header will use multiple inheritance so that a class can inherit from more than one class
* Author: Lisa Cho
* Created: April 11, 2024
* Summary of Modifications:
* 11 April 2024 - created the file for the simple loan class
* 11 April 2024 - addded the approriate include statements and functions
********************************************************/
#ifndef AMORTIZEDLOAN_H
#define AMORTIZEDLOAN_H
#include <iostream>
    using std::cout; 
    using std::cin;
    using std::endl;
#include <string>
    using std::string;
#include "Loan.h"

//this will be the class for the AmortizedLoan 
class AmortizedLoan : public Loan // will be use the public from the class loan
{
    public:
    AmortizedLoan();
    AmortizedLoan(float principal, float interestRate, int loanLength);
    float monthlyPayment() override;
};

#endif