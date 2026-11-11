
#include <iostream>
#include <iomanip>
using namespace std;

/*
TASK 1: STUDENT COURSE TOTAL

INPUT:
1. Assignment mark.
2. Midterm mark.
3. Final exam mark.

PROCESS:
1. Read the assignment, midterm and final marks.
2. Calculate 20% of the assignment mark.
3. Calculate 30% of the midterm mark.
4. Calculate 50% of the final exam mark.
5. Add the three weighted marks.
6. Determine Pass or Fail using the conditional operator.

OUTPUT:
1. Course total (one decimal place).
2. Pass or Fail.
*/

int main() {
    double assignment, midterm, finalExam;
    double total;

    // Input
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    // Process
    total = (assignment * 0.20) +
            (midterm * 0.30) +
            (finalExam * 0.50);

    string result = (total >= 50) ? "Pass" : "Fail";

    // Output
    cout << fixed << setprecision(1);
    cout << "Course Total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}
