/** Sean Gurr
 *  C00221886
 *  Ex. 1
 *  Celsius To Farenheit Temperature Converter
 *  20/09/2017
 */

/**< preprocessor directives */
#include <iostream>

using namespace std;


/**< main() function */
int main()
{
    /**< variable declarations*/
    double TF, TC;

    /**< Purpose of code */
    cout << "Celsius To Farenheit Temperature Converter" << endl;
    /**< Prompt user to enter value for temperature and read in value */
    cout << "\nEnter a temperature value for degrees celsius: ";
    cin >> TC;
    /**< Calculate result and display */
    TF = (TC * 1.8) + 32;

    cout << endl;
    cout << "Farenheit temperature is : " << TF << endl;
    return 0;
}
