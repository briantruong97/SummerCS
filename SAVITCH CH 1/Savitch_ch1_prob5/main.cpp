#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int total_sum;
    int total_product;
            
    cout <<"Enter any number you want! ";
    cin >> a; 
    
    cout <<"Now enter another number! ";
    cin >> b;
    
    total_sum = a + b;
    total_product = a * b;
    
    cout << "Your total sum is " << (total_sum) << endl;
    cout << "Your total product will be " << (total_product) << endl;
    
    

	return 0;
}