📅🔤 C++ Date and String Utility Library
A powerful C++ utility library for advanced date handling, calendar generation, business logic, and string manipulation.
This project includes two main components:
📅 clsDate → Advanced Date Management System
🔤 clsString → String Utility Helper Class

🧠 Design Philosophy
This project is built using Object-Oriented Programming (OOP) principles:


Encapsulation


Modularity


Reusability


Clean and scalable design


It simulates real-world date systems and text processing in a structured way.

🌟 clsDate Features
📌 Constructors


System date (current date)


String format → "DD/MM/YYYY"


Manual initialization (Day / Month / Year)


Day order in year



➕ Date Arithmetic
Supports full date manipulation:


Days


Weeks


Months


Years


Decades


Centuries


Millenniums



📊 Business Logic


Identify business days & weekends


Calculate business days between two dates


Vacation duration calculation


Return-to-work date after vacation



📅 Calendar System


Print monthly calendar


Print full yearly calendar



🔍 Date Operations


Compare dates (Before / After / Equal)


Calculate difference between dates


Full date validation


Leap year support



🎂 Age Calculation


Calculate exact age in days



🔤 clsString Features
✂️ Basic Operations


Split strings


Trim spaces


Count words


Length



🔤 Case Manipulation


Upper / Lower first letter


Upper / Lower full string


Invert character case



🔢 Analysis


Count letters (all / capital / small)


Count vowels


Count specific characters



🔧 Advanced


Replace words


Reverse words


Join strings


Remove punctuation



🚀 Getting Started
📥 Include in your project
#include <iostream>#include "clsDate.h"#include "clsString.h"using namespace std;

💡 Example Usage
int main(){    clsDate Today;    cout << "Today: ";    Today.Print();    clsDate CustomDate("20/12/2022");    cout << CustomDate.DateToString() << endl;    if (CustomDate.IsBusinessDay())        cout << "Business Day!" << endl;    CustomDate.PrintMonthCalendar();    clsDate BirthDate("1/1/2000");    cout << "Age in Days: "         << clsDate::CalculateMyAgeInDays(BirthDate)         << endl;    return 0;}

🛠 Requirements


C++ Compiler (C++11 or higher)


Files:


clsDate.h


clsString.h





📁 Project Structure
├── clsDate.h├── clsString.h└── main.cpp

🏦 Bonus Project (Bank System V2.0)
This library is also used in a larger project:
🔐 Advanced Bank Management System
Features:


Login System


Role-Based Access Control (RBAC)


Bitwise Permissions


Client Management (CRUD)


Transactions (Deposit / Withdraw)



🔐 Permission System
PermissionValueDescriptionAll-1Full accessList1View clientsAdd2Add clientDelete4Remove clientUpdate8Edit clientTransactions32Deposit / WithdrawUsers64Manage users

👨‍💻 Developer
Ahmed Tamer
Computer Science Student – New Mansoura University (NMU)

📜 Credits
Based on educational content from ProgrammingAdvices.com
(Eng. Mohammed Abu-Hadhoud) with personal enhancements.

⭐ Future Improvements


⏱ Add time support (HH:MM:SS)


🖥 GUI calendar interface


🌍 Time zones support


💾 File-based persistence system



📢 Note
This project is for learning & portfolio purposes, focusing on:


OOP mastery


Date algorithms


String processing

