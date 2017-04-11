#include <iostream>
using namespace std;

int printSomething(int a){
	cout << "Text on the Screen" <<endl;
	return (a * 2);
}


int main()
{
  printSomething(10);
  cout << "Hello, World!" << std::endl;
  return 0;
}
