#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a,r; 

	cin >> r;
	a = r * r * 3.14159;
	cout << "A=" << fixed << setprecision(4)<< a <<endl;

	return 0;

}

