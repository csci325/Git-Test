#include <iostream>
using namespace std;


int sum(int parameter);
int product(int parameter);

int main(){
  int num = 0;
  cout << "Enter a number: ";


        cout << "The summation of "<< num << " is " << sum(num) << endl;
	cout << "The factorial" << num << " is " << product(num) << endl;


  return 0;
}

int sum(int parameter)
{
  int sum = 0;
  for(int i = 1; i <= parameter; i++)
    sum += i;
  return sum;
}


int product(int parameter)
{
  int product = 1;
  for(int i = 1; i <= parameter; i++)
    product *= i;
  return product;
}