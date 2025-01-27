/*******************************************************
Name : Lisa Cho
Class : CSC 2312 Section 02
PA# : PA7 main for the Loan class
Due Date : 04/12/2024
*******************************************************/

#include <iostream>
    using std::cout; 
    using std::cin;
    using std::endl;
#include <string>
    using std::string;
#include <fstream>
    using std::ofstream;
    using std::ios;
#include "Loan.h"
#include "SimpleLoan.h"
#include "AmortizedLoan.h"
int main()
{   
    //create objects for class
    SimpleLoan simple; //will use as testers for the simple loan
    AmortizedLoan amortized; //will use as testers for the amortized loan

    //retrieve the display
    simple.displayLoan();
    amortized.displayLoan();

    simple.saveLoan();
    amortized.saveLoan();

    return 0;
}