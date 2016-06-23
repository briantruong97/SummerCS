
/* 
 * File:   main.cpp
 * Author: Brian
 *
 * Created on June 22, 2016, 4:23 PM
 */

#include <iostream>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    
    int qtr, dimes, nckls, total_cents; 
    
    cout << "Enter the number of quarters: \n";
    cin >> qtr;
    
    cout << "Enter the number of dimes: \n";
    cin >> dimes;
    
    cout << "Enter the number of nickels: \n";
    cin >> nckls;
    
    total_cents = (qtr*25)+ (dimes*10)+ (nckls*5);
          
    cout << "Your total would be: "<<total_cents<<endl;        
            
          
    

    return 0;
}

