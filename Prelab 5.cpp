// PreLab 5 Assignment

// Finish the following program which adds up all integers from 0 to
// the user's given number inclusively using a FOR loop. The total should be 
// assigned to the variable 'total'.

#include <iostream>
using namespace std;


int main()
{
    int number;
    int total = 0;
    
    cout << "Enter a positive integer to find the summation of"
    << " all numbers from 0 to the given number." << endl;
    cin >> number;
    
    // TODO - Add your code here
    for (int i = 0; i <= number; i++)
        total = i+total;
    
    
    cout << "Total : " << total << endl;
    
    return 0;
}
