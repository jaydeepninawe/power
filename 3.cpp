

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double base, power, result=1;
	
  cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> power;
    for(int i=0;i<power;i++){
    result=result*base;
    
    }
    cout<<"result is :"<<result;
    return 0;
    }
