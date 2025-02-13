#include <cmath>
#include <iostream>

using namespace std;

int ackermannsFunction(int, int);

int main()
{
	// Declare variables
	int m;
	int n;
	string answer;

	// Allow user input selection
	cout << "The following program tests Ackermann's Function." << endl << endl;
	cout << "Do you wish to enter in your own numbers? If so please type 'Y'." << endl;
	cout << "Otherwise type 'N' if you wish to check the values of: (0,0), (0,1), (1,1), (1,2), (1,3), (2,2), (3,2)." << endl << endl;
	cin >> answer;

	// Loop to check for user answer
	// If user selects 'Y'
	if (answer == "y" || answer == "Y")
	{
		cout << "Enter a value of m: ";
		cin >> m;
		cout << "Enter a value of n: ";
		cin >> n;

		cout << "The following is the user input function (" << m << "," << n << ")" << " The result of that function: " << ackermannsFunction(m, n) << endl;
	}
	// If user selects 'N'
	if (answer == "n" || answer == "N")
	{
		cout << endl << "The result of function A(0,0): " << ackermannsFunction(0, 0) << endl;
		cout << "The result of function A(0,1): " << ackermannsFunction(0, 1) << endl;
		cout << "The result of function A(1,1): " << ackermannsFunction(1, 1) << endl;
		cout << "The result of function A(1,2): " << ackermannsFunction(1, 2) << endl;
		cout << "The result of function A(1,3): " << ackermannsFunction(1, 3) << endl;
		cout << "The result of function A(2,2): " << ackermannsFunction(2, 2) << endl;
		cout << "The result of function A(3,2): " << ackermannsFunction(3, 2) << endl;
	}
	// If user inputs invalid option
	else if (answer != "n" || answer != "N" || answer != "y" || answer != "Y")
	{
		cout << "Invalid user input.";
	}

	return 0;
}

// Function to test ackermann's function
int ackermannsFunctionA(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	if (n == 0)
	{
		return ackermannsFunction(m - 1, 1);
	}
	else
	{
		return ackermannsFunction(m - 1, ackermannsFunction(m, n - 1));
	}
}
