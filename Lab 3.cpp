/* NAME: Josue Zamitiz-Ayala  */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Natural Selection Game" << endl
         << " 1. Orange" << endl
         << " 2. Blue" << endl
         << " 3. Yellow" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;

    cout << "Computer chose: " << comp_num << endl << endl;
    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):

    if (user_num == comp_num)
        cout << "You chose the same color! It's a tie!" << endl;

    else if (user_num == 1 && comp_num == 2)
        cout << "Orange beats Blue! You win!" << endl;

    else if (user_num == 2 && comp_num == 3)
        cout << "Blue beats Yellow! You win!" << endl;

    else if (user_num == 3 && comp_num == 1)
        cout << "Yellow beats Orange! You win!" << endl;

    else if (user_num == 1 && comp_num == 3)
        cout << "Yellow beats Orange! You lose!" << endl;

    else if (user_num == 2 && comp_num == 1)
        cout << "Orange beats Blue! You lose!" << endl;

    else if (user_num == 3 && comp_num == 2)
        cout << "Blue beats Yellow! You lose!" << endl;

    else
            cout <<"Invalid Input. Terminating Program." << endl;

    // Exit the program:
    return 0;
}
