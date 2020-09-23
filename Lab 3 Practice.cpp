#include <iostream>
using namespace std;

int main()
{
	// Example, all are true but only the first will execute.

	if (1 == 1)
	{
		cout << "First" << endl << endl;
	}
	else if (2 == 2)
	{
		cout << "Second" << endl << endl;
	}
	else if (3 == 3)
	{
		cout << "Third" << endl << endl;
	}

	return 0;
}
