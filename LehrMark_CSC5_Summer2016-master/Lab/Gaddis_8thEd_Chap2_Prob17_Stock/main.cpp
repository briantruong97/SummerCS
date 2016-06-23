/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 22, 2016, 8:58 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short nShares=750;//Number of Shares
    unsigned char  stkPrce=35; //Stock Price in $'s
    float commish=2e-2f;//2 percent commission
    float valStk,cPaid,totPaid;
    
    //Input Data
    
    //Process the Data
    valStk=nShares*stkPrce;//Value of the stock $'s
    cPaid=valStk*commish;  //Commission Paid in $'s
    totPaid=valStk+cPaid;  //Total tendered in $'s
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Price paid for the stock = $"<<setw(9)<<valStk<<endl;
    cout<<"Commission paid          = $"<<setw(9)<<cPaid<<endl;
    cout<<"Cost of the transaction  = $"<<setw(9)<<totPaid<<endl;
    
    //Exit Stage Right!
    return 0;
}