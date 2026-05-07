#include <iostream>
#include "clsDate.h"
using namespace std;

int main()
{
    cout << "====================================\n";
    cout << "       Welcome to clsDate Class       \n";
    cout << "====================================\n\n";

    // 1. Default Constructor (System Date)
    clsDate Date1;
    cout << "1. System Date (Today): ";
    Date1.Print();

    // 2. Constructor with Day, Month, Year
    clsDate Date2(20, 12, 2022);
    cout << "\n2. Date2 (20/12/2022): ";
    Date2.Print();

    // 3. Constructor with String
    clsDate Date3("15/10/2024");
    cout << "\n3. Date3 (15/10/2024): ";
    Date3.Print();

    // 4. Constructor with Day Order in Year
    clsDate Date4(250, 2025);
    cout << "\n4. Date from Day Order (250th day of 2025): ";
    Date4.Print();

    cout << "\n" << string(50, '-') << endl;

    // 5. DateToString
    cout << "\n5. Date2 as String: " << Date2.DateToString() << endl;

    // 6. Leap Year
    cout << "\n6. Is 2024 Leap Year? " << (Date2.isLeapYear() ? "Yes" : "No") << endl;

    // 7. Days in Month & Year
    cout << "   Days in Month: " << Date2.NumberOfDaysInAMonth() << endl;
    cout << "   Days in Year : " << Date2.NumberOfDaysInAYear() << endl;

    cout << "\n" << string(50, '-') << endl;

    // 8. Add One Day
    cout << "\n8. Add One Day:\n";
    cout << "   Before : "; Date2.Print();
    Date2.AddOneDay();
    cout << "   After  : "; Date2.Print();

    // 9. Add Multiple Days
    cout << "\n9. Add 10 Days:\n";
    Date2.AddDays(10);
    Date2.Print();

    // 10. Decrease One Day
    cout << "\n10. Decrease One Day:\n";
    Date2.DecreaseDateByOneDay();
    Date2.Print();

    // 11. Increase Years
    cout << "\n11. Increase 5 Years:\n";
    Date2.IncreaseDateByXYears(5);
    Date2.Print();

    cout << "\n" << string(50, '-') << endl;

    // 12. Day of Week
    cout << "\n12. Day of Week Order : " << Date2.DayOfWeekOrder() << endl;
    cout << "    Day Name          : " << Date2.DayShortName() << endl;
    cout << "    Month Name        : " << Date2.MonthShortName() << endl;

    // 13. Calendar
    cout << "\n13. Month Calendar for Date2:\n";
    Date2.PrintMonthCalendar();

    // 14. Compare Dates
    cout << "\n14. Comparison:\n";
    cout << "    Is Date2 Before Date3 : " << Date2.IsDateBeforeDate2(Date3) << endl;
    cout << "    Is Date2 Equal Date3  : " << Date2.IsDateEqualDate2(Date3) << endl;
    cout << "    Difference in Days    : " << Date2.GetDifferenceInDays(Date3) << " days\n";

    // 15. Age Calculation
    clsDate BirthDate("1/1/2000");
    cout << "\n15. Age in Days (from 1/1/2000): "
        << clsDate::CalculateMyAgeInDays(BirthDate) << " days" << endl;

    // 16. Business & Weekend Check
    cout << "\n16. Business & Weekend Check:\n";
    cout << "    Is Weekend?     : " << (Date2.IsWeekEnd() ? "Yes" : "No") << endl;
    cout << "    Is Business Day?: " << (Date2.IsBusinessDay() ? "Yes" : "No") << endl;

    cout << "\n" << string(50, '=') << endl;
    cout << "End of clsDate Testing Program\n";
    cout << string(50, '=') << endl;

    system("pause>0");
    return 0;
}