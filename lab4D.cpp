/* NAME: Josue Zamitiz  */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char user_choice, ans;  //user's choice
    double price; //price of monthly package

    // Ask the user for their plan choice:
    cout << "Enter the package name you wish to purchase: ";
    cin >> user_choice;

    // TODO: Use a switch statement to evaluate the total cost of the
    // customer’s monthly bill based on the selected plan.

    switch ( user_choice )
    {
    case 'A':
    case 'a':
        price = 19.99;
        cout << "Would you like to purchase the sports plan?" << endl;
        cin >> ans;
        cout << endl;
        switch ( ans )
        {
        case 'Y':
        case 'y':
            cout << "The total price for your monthly package is: $" <<price + 9.99<< endl;
            break;
        case 'N':
        case 'n':
            cout << "The total price for your monthly package is: $" <<price<< endl;
            break;
        default:
            cout <<"Invalid Input, ***Terminating Program***" <<endl;
            break;
        }
        break;

    case 'B':
    case 'b':
        price = 39.99;
        cout << "Would you like to purchase the sports plan?" << endl;
        cin >> ans;
        cout << endl;
        switch ( ans )
        {
        case 'Y':
        case 'y':
            cout << "The total price for your monthly package is: $" <<price + 9.99<<endl;
            break;
        case 'N':
        case 'n':
            cout << "The total price for your monthly package is: $" <<price<<endl;
            break;
        default:
            cout <<"Invalid Input, ***Terminating Program***" <<endl;
            break;
        }
        break;

     case 'C':
     case 'c':
        price = 45.99;
        cout << "The total price for your monthly package is: $" <<price<<endl;
        break;

     default:
        cout <<"Invalid Input, ***Terminating Program***" <<endl;
        break;
    }



    // Exit the program:
    return 0;
}
