#include <iostream>
#include <iomanip>
#include <string>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Default constructor
    Date() : day(1), month(1), year(1900) {}

    // Parameterized constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Member functions to store a specified date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Retrieve parts of the date
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    // Compare dates
    bool isEqual(const Date& other) const {
        return day == other.day && month == other.month && year == other.year;
    }

    // Less than comparison
    bool isBefore(const Date& other) const {
        if (year != other.year)
            return year < other.year;
        if (month != other.month)
            return month < other.month;
        return day < other.day;
    }

    // Print the date
    void print() const {
        std::cout << std::setfill('0') << std::setw(2) << day << '/'
                  << std::setw(2) << month << '/' << year << std::endl;
    }
};

int main() {
    Date date1(1, 1, 2022);
    Date date2;
    date2.setDate(2, 2, 2022);

    // Printing dates
    std::cout << "Date 1: ";
    date1.print();
    std::cout << "Date 2: ";
    date2.print();

    // Comparing dates
    std::cout << "Are the two dates equal? " << (date1.isEqual(date2) ? "Yes" : "No") << std::endl;
    std::cout << "Is Date 1 before Date 2? " << (date1.isBefore(date2) ? "Yes" : "No") << std::endl;

    return 0;
}
