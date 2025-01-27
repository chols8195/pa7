/********************************************************
*Title: Loan.cpp
*Description: This is the function file to execute our functions for the loan class, 
*it will implement the display loan, save loan, and initialize the contructors
*Author: Lisa Cho
*Created: April 07, 2024
*Summary of Modifications:
* 07 April 2024 - created the function file for a loan
* 07 April 2024 - added the appropriate include statement 
* 08 April 2024 - used pointers for the setters and set up the getters and display 
* 11 April 2024 - added in the save loan function using fstream and open/close 
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
    using std::ios;
#include <cstdlib>
#include "Loan.h"

// this will be for the loan class, and implementing the functions for the Loan class

// constructors
// default constructors
Loan::Loan() 
{
    // intentionally left blank
}
// full constructor
Loan::Loan(float aPrincipal, float interest, int length, string type)
{
    principal = aPrincipal;
    interestRate = interest;
    loanLength = length;
    loanType = type;
}

// these will be our getters
float Loan::getPrincipal()
{
    return principal;
}
float Loan::getInterestRate()
{
    return interestRate;
}
float Loan::getLoanLength()
{
    return loanLength;
}
string Loan::getLoanType()
{
    return loanType;
}

// these will be our setters
void Loan::setPrincipal(float aPrincipal)
{
    principal = aPrincipal;
}
void Loan::setInterestRate(float interest)
{
    interestRate = interest;
}
void Loan::setLoanLength(int length)
{
    loanLength = length;
}
void Loan::setLoanType(string type)
{
    loanType = type;
}

//other functions
float Loan::monthlyPayment()
{
    return 0; //implemented in sub class
}

// display loan function 
void Loan::displayLoan()
{
    cout << "Loan Overview" << endl;
    cout << setw(32) << setfill('=') << '=' << endl;
    cout << "Loan Type:        " << loanType << endl;
    cout << "Principal:        " << principal << endl;
    cout << "Interest Rate:    " << interestRate << "%" << endl;
    cout << "Length in Years:  " << loanLength << endl;
    cout << "Monthly Payment:  " << monthlyPayment() << endl;
}

// function to save the loan using I/O
void Loan::saveLoan()
{
    //this will open the file for the data 
    ofstream dataFile;

    // opens the text file 
    dataFile.open("data/loan.txt");

    // using our getters to print the principal, interest rate, and loan length into the file 
    dataFile << getPrincipal() << " " << getInterestRate() << " " << getLoanLength() << endl;

    dataFile.close(); //closes the open file 

}