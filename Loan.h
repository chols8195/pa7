/********************************************************
* Title: Loan.h
* Description: This is the header file for the function file Loan.cpp, this file will set up the class and functions for the functions file.
* This header will use multiple inheritance so that a class can inherit from more than one class
* Author: Lisa Cho
* Created: April 07, 2024
* Summary of Modifications:
* 07 April 2024 - created the file for Loan.h 
* 07 April 2024 - added the include statements
* 07 April 2024 - created the class and added in the constructors
* 07 April 2024 - added in the getters, setters, and other operations/functions
********************************************************/
#ifndef LOAN_H
#define LOAN_H
#include <iostream>
    using std::cout; 
    using std::cin;
    using std::endl;
#include <string>
    using std::string;

class Loan
{
    public:
    // constructors
    explicit Loan(); // default constructor
    explicit Loan(float aPrincipal, float interest, int length, string type); //full constructor 

    virtual ~Loan();

    //these will be our getters
    float getPrincipal();
    float getInterestRate();
    float getLoanLength();
    string getLoanType();

    // these will be our setters
    void setPrincipal(float aPrincipal);
    void setInterestRate(float interest);
    void setLoanLength(int length);
    void setLoanType(string type);

    // these will be other operators/functions
    virtual float monthlyPayment() = 0; // pure virtual class
    void displayLoan();
    void saveLoan();

    protected:
    float principal = 0;
    float interestRate = 0;
    int loanLength = 0;
    string loanType = "";

};

#endif

