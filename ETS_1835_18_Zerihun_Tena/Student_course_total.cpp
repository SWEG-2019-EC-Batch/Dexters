#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    // Variable declaration
    double assignment, midterm, final_exam;
    double total_mark;

    // Input
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> final_exam;

    // Calculation
    total_mark = (assignment * 0.20) +
            (midterm * 0.30) +
            (final_exam * 0.50);

    // Conditional operator
    string result = (total_mark >= 50) ? "Pass" : "Fail";

    // Output
    cout << fixed << setprecision(1);

    cout << "Total mark: " << total_mark << endl;
    cout << "Result: " << result << endl;

    return 0;
}
