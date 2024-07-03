#include <iostream>
using namespace std;
// Function to check if a year is a leap year in the Julian Calendar
bool isLeapYear(int year) {
   return year % 4 == 0;
}
// Function to get the number of days in a month for a given year in the Julian Calendar
int getDaysInMonth(int year, int month) {
   if (month == 2) { // February
       return isLeapYear(year) ? 29 : 28;
   }
   if (month == 4 || month == 6 || month == 9 || month == 11) {
       return 30;
   }
   return 31;
}
// Function to find the 666th Friday the 13th
void find666thFriday13th() {
   int year = 2010;
   int month = 1;
   int day = 1;
   int weekday = 4; // January 1, 2010 is a Thursday (4th day of the week)
   int friday13thCount = 0;
   while (friday13thCount < 666) {
       // Move to the next day
       day++;
       weekday = (weekday + 1) % 7;

       // Check if we need to move to the next month
       if (day > getDaysInMonth(year, month)) {
           day = 1;
           month++;
       }
       // Check if we need to move to the next year
       if (month > 12) {
           month = 1;
           year++;
       }

       // Check if the current date is Friday the 13th
       if (day == 13 && weekday == 5) { // 5 corresponds to Friday
           friday13thCount++;
       }
   }
   // Print the result in the format "YYYYMMDD"
   cout << year << (month < 10 ? "0" : "") << month << (day < 10 ? "0" : "") << day << endl;
}
int main() {
   find666thFriday13th();
   return 0;
}