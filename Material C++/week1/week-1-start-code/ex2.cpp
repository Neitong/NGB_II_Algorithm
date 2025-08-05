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
    // The year shall be a positive number
    // The month shall be a number between 1 and 12
    // The day shall be a number between 1 and the max days
    // February has 28 days normally, 29 in a leap year
    // Day must be within the valid range for the given month
    // The date is valid

    return true;
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

int main() {
    // 1- Input the dates
    // 2- Validate the dates (BONUS)
    // TODO
    // 3- Compare the dates
    // TODO

    return 0;
}
