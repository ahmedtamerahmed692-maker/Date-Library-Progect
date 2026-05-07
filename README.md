# C++ Date and String Utility Library 📅🔤

Welcome to the **C++ Date and String Utility Library**! This repository highlights a powerful, custom-built `clsDate` class designed to handle complex date calculations, calendar printing, and business logic effortlessly in C++. 

*(Note: This project also includes `clsString`, a text manipulation helper class, which serves as a foundation for string parsing inside `clsDate`.)*

## 🌟 Key Features of `clsDate`

The `clsDate` class provides a rich set of static and object-oriented methods to manage dates safely and efficiently:

- **Constructors Flexibility**: Initialize dates via system time (Today's date), a formatted string (e.g., `"15/10/2024"`), explicitly via day/month/year, or the day's order in a current year.
- **Date Arithmetic**: Elegantly increase or decrease dates gracefully. Supported periods span from days, weeks, and months—up to decades, centuries, and millennia.
- **Business & Vacation Logic**: Differentiate between weekends and business days, calculate the total business days between two dates, or determine a return-to-work date post-vacation.
- **Calendar Visualization**: Built-in support to print fully formatted month and year calendars directly to the console.
- **Robust Date Comparisons**: Functions to evaluate if a date is before, after, or equal to another, alongside calculation of precise day differences.
- **Validation & Leap Year Integration**: Thorough date validation rules, natively supporting leap-year checks dynamically.
- **Age Calculation**: Simple method to pinpoint exact age duration in days based on a birthdate.

### `clsString` (Brief Overview)
A fast and efficient text manipulation helper class used to slice, trim, and format string data, predominantly serving the date class for tasks like string-to-date splitting.

## 🚀 Getting Started (Example Usage)

Simply include the header files in your C++ project and you're good to go:

```cpp
#include <iostream>
#include "clsDate.h"

using namespace std;

int main()
{
    // Initialize date with today's system time
    clsDate Today;
    cout << "Today is: ";
    Today.Print();

    // Init from string
    clsDate CustomDate("20/12/2022");
    cout << "Custom Date: " << CustomDate.DateToString() << endl;

    // Check Business Day
    if (CustomDate.IsBusinessDay()) {
        cout << "It's a Business Day!" << endl;
    }

    // Print the full month calendar
    CustomDate.PrintMonthCalendar();

    // Advanced capabilities like Age Calculation
    clsDate BirthDate("1/1/2000");
    cout << "Age in Days: " << clsDate::CalculateMyAgeInDays(BirthDate) << endl;

    return 0;
}
```

## 🛠 Compilation Requirements

- A standard C++ Compiler (C++11 or higher).
- Ensure both `clsDate.h` and `clsString.h` are placed directly in your execution directory.

## 📜 Credits
This logic and structure is inspired by the C++ OOP & Problem Solving learning tracks provided by **ProgrammingAdvices.com** (Eng. Mohammed Abu-Hadhoud).
