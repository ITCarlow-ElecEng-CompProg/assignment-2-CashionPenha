/**
 * Cashion Penha
 * Lab 2
 * Factorial Calculator
 * 27/09/2017
 */

#include <iostream> /** Preprocessor Directive */

using namespace std;/** Includes commonly used tools, such as cout,cin, To prevent typing "std" */

int main()/** Function called main which returns an integer value, while nothing is being passed into function */
{
    /** Declaring variables */
    int n=0.0, f=1.0,f2=1.0,i,x;

    cout << "Factorial Calculator" << endl;

    /**< Do while loop to ensure value entered is >0 */
    do
    {
        cout << "\nPlease enter an integer number: ";
        cin >> n;
    }
    while(n <= 0);

    /**< Loop to calculate the factorial */
    for (i=n; i>=1; i--)
    {
        f=f*i;
    }

    /**< Dispaly the result obtained from the for loop */
    cout << "\nThe factorial of " << n << " using for loop is: " << f << endl;

    /**Set up the while loop to calculate the factorial */
    x=n;

    while (x>=1)
    {
        f2=f2*x;
        x--;
    }

    /**< Displaying the factorial result using while loop */
    cout << "\nThe factorial of " << n << " using while loop is: " << f << endl;

    return 0;
}
