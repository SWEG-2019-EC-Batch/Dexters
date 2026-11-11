/*Inputs:

Assignment mark (out of 100)
Midterm mark (out of 100)
Final mark (out of 100)

Outputs:

Course total, shown to one decimal place
The word “Pass” or “Fail”


(b) Process

1 Start the program and define the constants for the three weights and the pass mark.
2 Prompt the user to enter the assignment mark,the midterm mark and the final mark and read it.
3 Calculate the total: total = (assignment × 0.20) + (midterm × 0.30) + (final × 0.50).
4 Use the conditional operator to compare the total with the pass mark: if total >= 50, the result is “Pass”, otherwise “Fail”.
5 Set the output format to fixed with one decimal place.
6 Print the total and the result.
End the program.*/






#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;
    double assignment, midterm, finalExam;
    cout << "Enter assignment mark: ";
    cin >> assignment;
    cout << "Enter midterm mark: ";
    cin >> midterm;
    cout << "Enter final mark: ";
    cin >> finalExam;

    double total = assignment * ASSIGNMENT_WEIGHT
                 + midterm * MIDTERM_WEIGHT
                 + finalExam * FINAL_WEIGHT;
    string result = (total >= PASS_MARK) ? "Pass" : "Fail";

   
    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}
