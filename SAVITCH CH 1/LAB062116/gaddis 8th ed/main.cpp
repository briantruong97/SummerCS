/* 
 * File:   main.cpp
 * Author: Brian Truong
 * Created on June 20, 2016, 12:27 PM
 * Purpose: First Program
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
using namespace std;//iostream uses the standard namespace

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables, no doubles
    int x1=28, x2=32,x3=37,x4=24,x5=33;//Values to average
    float avg;
            
           
    
    //Input data
    
    //Process data
    avg=(x1+x2+x3+x4+x5)/5;
    
    //Output data
    cout<<"The average = "<<avg<<endl;
    
    //Exit Stage Right!
    return 0;
}

