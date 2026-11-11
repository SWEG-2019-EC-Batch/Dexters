/*
 * Task 1: Student course total
 *
 * (a) Inputs and outputs
 *     Inputs : assignment mark, midterm mark, final mark (each out of 100)
 *     Outputs: course total (one decimal place) and the word Pass or Fail
 *
 * (b) Process
 *     1. Declare constants: assignment weight 0.20, midterm weight 0.30,
 *        final weight 0.50 and the pass mark 50.
 *     2. Read the assignment, midterm and final marks.
 *     3. Compute total = 0.20*assignment + 0.30*midterm + 0.50*final.
 *     4. Use the conditional operator to choose "Pass" if total >= 50,
 *        otherwise "Fail".
 *     5. Print the total with one decimal place and the result.
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT    = 0.30;
    const double FINAL_WEIGHT      = 0.50;
    const double PASS_MARK         = 50.0;

    double assignment, midterm, finalExam;

    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;
    cout << "Enter midterm mark (out of 100): ";
    cin >> midterm;
    cout << "Enter final mark (out of 100): ";
    cin >> finalExam;

    double total = ASSIGNMENT_WEIGHT * assignment
                 + MIDTERM_WEIGHT * midterm
                 + FINAL_WEIGHT * finalExam;

    string result = (total >= PASS_MARK) ? "Pass" : "Fail";

    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}
