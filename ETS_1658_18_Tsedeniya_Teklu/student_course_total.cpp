
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
================================================
TASK 1: STUDENT COURSE TOTAL
================================================

INPUT:
- Assignment mark
- Midterm mark
- Final exam mark

PROCESS:
1. Read the three marks.
2. Calculate assignment contribution (20%).
3. Calculate midterm contribution (30%).
4. Calculate final exam contribution (50%).
5. Add all contributions to get the course total.
6. Determine whether the student passes or fails.
   Pass mark = 50.

OUTPUT:
- Course total
- Pass or Fail

FLOWCHART:

       +-----------+
       |   START   |
       +-----------+
             |
             v
   +---------------------+
   | Enter three marks   |
   +---------------------+
             |
             v
   +---------------------+
   | Calculate weighted  |
   | course total        |
   +---------------------+
             |
             v
       +-------------+
       | Total >= 50?|
       +-------------+
          /       \
        Yes        No
         |          |
         v          v
   +---------+  +---------+
   |  PASS   |  |  FAIL   |
   +---------+  +---------+
         \        /
          \      /
             v
   +---------------------+
   | Display total and   |
   | result              |
   +---------------------+
             |
             v
       +-----------+
       |    END    |
       +-----------+
================================================
*/

int main() {
    double assignment, midterm, finalExam, total;
    string result;

    // INPUT
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    // PROCESS
    total = (assignment * 0.20) +
            (midterm * 0.30) +
            (finalExam * 0.50);

    result = (total >= 50) ? "Pass" : "Fail";

    // OUTPUT
    cout << fixed << setprecision(2);
    cout << "\nCourse Total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}

