#include <iostream>
using namespace std;


// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

/**
 * Validate a given date
 * @param year, month, day : the date
 * @return true if the date is valid, false otherwise
 */
bool isValidDate(int year, int month, int day) {
    // TODO
    int maxDays;
    // The year shall be a positive number
    if (year <= 0) return false; 
    // The month shall be a number between 1 and 12
    if (month < 1 || month > 12) return false;
    // The day shall be a number between 1 and the max days
    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            // February has 28 days normally, 29 in a leap year
            daysInMonth = isLeapYear(year) ? 29 : 28;
            break;
        default:
            return false;  
    }

    // Day must be within the valid range for the given month
    if (day < 1 || day > daysInMonth) return false;

    return true;  // The date is valid
}


/**
 * Compare 2 dates (date1 and date2)
 * @param year1, month1, day1 : date 1
 * @param year2, month2, day2 : date 2
 * @return
 *      -1 if date1 < date2
 *      0 if they are the same
 *      1 if date1 > date2
 */
int compareDates(int year1, int month1, int day1, int year2, int month2, int day2) {
    // TODO
    if (year1 > year2) return 1;
    if (year1 < year2) return -1;
    if (month1 > month2) return 1;
    if (month1 < month2) return -1;
    if (day1 > day2) return 1;
    if (day1 < day2) return -1;
    return 0;
}

int main() {
    // 1- Input the dates
    int year1, month1, day1;
    cout << "Enter the first person's date of birth (year/month/day): ";
    cin >> year1 >> month1 >> day1;

    int year2, month2, day2;
    cout << "Enter the second person's date of birth (year/month/day): ";
    cin >> year2 >> month2 >> day2;

    // 2- Validate the dates (BONUS)
    // TODO
    if(!isValidDate(year1, month1, day1) || !isValidDate(year2, month2, day2))
    {
        cout << "Invalid dates" << endl;
        return 1;  
    }
    

    // 3- Compare the dates
    // TODO
    int result = compareDates(year1, month1, day1, year2, month2, day2);
    if (result == -1) {
        cout << "The second person is the youngest" << endl;
    } else if (result == 1) {
        cout << "The first person is the youngest" << endl;
    } else if( result == 0 ) {
        cout << "Both persons have the same age" << endl;
    }
    else{
        cout << "Error: Invalid comparison result." << endl;
    }
   


    return 0;
}
