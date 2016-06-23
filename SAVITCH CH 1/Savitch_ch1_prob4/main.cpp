#include <iostream>
using namespace std;

int main() {
	int numberOfPods;
	int peasPerPod;
	int totalPeas;
        
        cout <<"Hello"<<endl;

	cout << "Press return after entering a number. \n";
	cout << "Enter number of pods: \n";
	cin >> numberOfPods;
	cout << "Enter the number of peas in a pod: \n";
	cin >> peasPerPod;

	totalPeas = numberOfPods + peasPerPod;

	cout << "If you have ";
	cout << numberOfPods;
	cout << " pea pods" ;
        cout << " and ";
	cout << peasPerPod;
	cout << " peas in each pod, then\n";
	cout << "you have ";
	cout << totalPeas;
	cout << " peas in all the pods.\n";
        
        cout << " Good-Bye!"<< endl;

	return 0;
}