
#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double base, power, result;
	
  cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> power;

  result = pow(base, power);
	
  cout << "result :" << result;
	
  return 0;
}  


