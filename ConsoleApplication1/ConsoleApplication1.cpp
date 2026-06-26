#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class calculator {
public:
	int add(int a, int b) {
		return a + b;
	}
	int sub(int a, int b)
	{
		return a - b;
	}
	int mul(int a, int b) {
		return a * b;
	}
	double div(double a,double b) {
		return a / b;
	}
};


int yaman(int* p1, int* p2,int &counter) {
	int x, y;
	int choice;
	cout << "Enter tow numbers :" << endl;
	cin >> x >> y;
	p1 = &x;
	p2 = &y;
	cout << "1-Add" << endl;
	cout << "2-Sub" << endl;
	cout << "3-Mul" << endl;
	cout << "4-Div" << endl;
	cout << "5-Exit" << endl;
	cin >> choice;
	for (int i = 0; i < 6; i++) {
		if (choice > 5) {
			cout << "Please choose a number between 1->5" << endl;
			cin >> choice;

		}
	}

	calculator c;
	switch (choice)
	{

	case 1:
		cout << "Sum = " << c.add(*p1, *p2) << endl;
		counter++;
		break;
	case 2:
		cout << "Sub = " << c.sub(*p1, *p2) << endl;
		counter++;
		break;
	case 3:
		cout << "mul = " << c.mul(*p1, *p2) << endl;
		counter++;
		break;
	case 4:
		if (*p2 == 0) {
			cout << "Cannot divide by zero !" << endl;
		}
		else {
			cout << "div = " << c.div(*p1, *p2) << endl;
			counter++;
		}
		break;
	case 5:
		cout << "Thank you !" << endl;
		return 1;
	default:
		cout << "Invalid choice !" << endl;
	}
	return 0;
}
	int main() {
		int a, b;
		int z = 0;
		string again = "Yes";

		while (again == "Yes" || again == "yes") {
			
			if (yaman(&a, &b, z) == 1)
				break;
			cout << "Do another operation? (Yes or No)" << endl;
			cin >> again;
		}
		
			cout << "Number of operation = " << z << endl;
	}





















