/*
   File: prog4_j_z129_j_m1225.cpp

   Author: Josue Zamitiz-Ayala and Jose Medina
   C.S.1428.002
   Lab Section: L22 and L17
   Program: #4
   Due Date: 10/31/18

   This program prompts the user for the number of items purchased. If no
   items were purchased, the program terminates after printing an appropriate
   message to the screen; otherwise, the program repeatedly prompts the
   user for the price of the specified number of items and calculates the
   total of all purchased items. It then calculates the shipping charge,
   discounted total, tax on the discounted total, and the total amount due.

   After all calculations are performed, the program prints the author's
   identifying information followed by the total of all purchased items,
   the discounted total, the tax rate, the tax on the discounted total,
   shipping charges and the total amount due as shown below. Output is
   written in receipt form to both the console and to an output file.

   With the exception of the tax rate, the numeric data is formatted to
   two decimal places. The tax rate is formatted to four decimal places.

   Input (keyboard): number of items purchased, integer
                     item price, double

   Constants:        discount amount, double (sample: 0.20)
                     cut off amount for free shipping, double
                     shipping charge, double
                     tax rate, double (sample: 0.0825)

   Output (console):
          Sample Console Output
          (This sample does not reflect prompts.)

          Author's Name
          C.S.1428.?         // '?' represents author's lecture section #
          Lab Section: L?    // '?' represents student's lab section #
          --/--/--           // dashes represent due date, month/day/year
               <blank line>
          Total Purchases:    $ ??.??
          Discounted Total:     ??.??
          Tax Rate:              ?.????
          Tax:                   ?.??
          Shipping:              ?.??
               <blank line>
          Total Amount Due:   $ ??.??
               <blank line>
               <blank line>
          A copy for your records can be found in prog4_00?out.txt.

   Output (file - prog4_00?out.txt):

          Author's Name
          C.S.1428.?         // '?' represents author's lecture section #
          Lab Section: L?    // '?' represents student's lab section #
          --/--/--           // dashes represent due date, month/day/year
               <blank line>
          Total Purchases:    $ ??.??
          Discounted Total:     ??.??
          Tax Rate:              ?.????
          Tax:                   ?.??
          Shipping:              ?.??
               <blank line>
          Total Amount Due:   $ ??.??

 ================================================

 <Output will vary based on actual input values.>
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    const double DISCOUNT = 0.20,
                 CUT_OFF = 150.00,
                 SHIP_CHARGE = 8.50,
                 TAX_RATE = 0.0825;

    int number_of_items;

    double total = 0,
           discount_total,
           tax,
           price,
           shipping,
           total_due;

    ofstream fout;
    fout.open("prog4_002out.txt");

    if ( !fout )
    {
        cout << endl << endl
        << "***Program Terminated***" << endl << endl
        << "Output file failed to open!" << endl;

        system("PAUSE>NUL");

        return 1;
    }

    cout << "Enter the number of items purchased: ";
    cin >> number_of_items;
    cout << endl;

    if ( number_of_items == 0 )
        cout << "Come back again soon!" << endl;
    else
    {
        for ( int i = 0; i < number_of_items; i++ )
        {
            cout << "Enter the item price: ";
            cin >> price;

            total += price;
        }

        discount_total = total - ( total * DISCOUNT );

        if ( discount_total >= CUT_OFF )
            shipping = 0;
        else
            shipping = SHIP_CHARGE;

        tax = TAX_RATE * discount_total;

        total_due = discount_total + shipping + tax;

        fout << "Josue Zamitiz-Ayala and Jose Medina" << endl
             << "C.S.1428.002" << endl
             << "Lab Section: L22 and L17" << endl
             << "10/31/18" << endl << endl;

        fout << fixed << setprecision(2)
             << "Total Purchases:    $" << setw(6) << total << endl
             << "Discounted Total:    " << setw(6) << discount_total << endl
                                        << setprecision(4)
             << "Tax Rate:            " << setw(8) << TAX_RATE << endl
                                        << setprecision(2)
             << "Tax:                 " << setw(6) << tax << endl
             << "Shipping:            " << setw(6) << shipping << endl << endl

             << "Total Amount Due:   $" << setw(6) << total_due << endl;

        cout << endl << endl
             << "Josue Zamitiz-Ayala and Jose Medina" << endl
             << "C.S.1428.002" << endl
             << "Lab Section: L22 and L17" << endl
             << "10/31/18" << endl << endl;

        cout << fixed << setprecision(2)
             << "Total Purchases:    $" << setw(6) << total << endl
             << "Discounted Total:    " << setw(6) << discount_total << endl
                                        << setprecision(4)
             << "Tax Rate:            " << setw(8) << TAX_RATE << endl
                                        << setprecision(2)
             << "Tax:                 " << setw(6) << tax << endl
             << "Shipping:            " << setw(6) << shipping << endl << endl

             << "Total Amount Due:   $" << setw(6) << total_due << endl << endl
             << endl

             << "A copy for your records can be found in prog4_002out.txt."
             << endl;
    }

    fout.close( );

    system("PAUSE>NUL");

    return 0;
}
