#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Return whether the given number if inside the given range
 * @param number : the number
 * @param min : the range min
 * @param max : the range max
 * @return true if inside the range, false otherwise
 */
bool isInside(int number, int min, int max) {
    // TODO
    if (number >= min && number <= max) {
        return true;
    } else {
        return false;
    }
    return true;
    
}

int main() {
 
    // 1-  Input the number
   // TODO
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // 2 - Input the range

    // BONUS : If the user accidentally enters a minimum value that is larger
    // than the maximum value, ask them to enter the values again.
   
    // TODO
    int min, max;
    do
    {
        cout << "Enter the range (min, max): ";
        cin >> min >> max;
        if (min == max) {
            break;
             
        }
        else if(min > max)
        {
            cout << "Minimum cannot be greater than maximum. Please re-enter the values." << endl;
            
        } 
        
    } while (min > max || min == max);
    
        

    // 3-  Check if the number is inside the range
   // TODO
    if (isInside( number, min, max)) {
        cout << "The number is inside the range." << endl;
    } else {
        cout << "The number is outside the range." << endl;
    }


    return 0;
}