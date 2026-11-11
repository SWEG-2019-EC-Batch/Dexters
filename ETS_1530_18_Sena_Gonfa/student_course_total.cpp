// I. Inputs and Outputs
// Inputs:
// VARIABLE     DATA TYPE
// assignment 	double
// midterm		double
// finalExam	double
// Outputs:
// 1. The student's course total, displayed to one decimal place.
// 2. The word Pass if the total is at least 50.
// 3. The word Fail if the total is below 50.

// II. Process
// 1. Start the program.
// 2. Declare three variables to store the assignment, midterm, and final exam marks.
// 3. Declare a variable to store the course total.
// 4. Read the three marks from the user.
// 5. Calculate the weighted course total using the formula:
// Total = (Assignment \times 0.20) + (Midterm \times 0.30)+ (Final \times 0.50)
// 6. Use the conditional operator (?:) to determine the result:
//    - If the total is greater than or equal to 50, display Pass.
//    - Otherwise, display Fail.
// 7. Display the course total using one decimal place.
// 8. End the program.

// III. The Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double assignment, midterm, finalExam, total;

    cout << "Enter assignment mark: ";
    cin >> assignment;
    cout << "Enter midterm mark: ";
    cin >> midterm;
    cout << "Enter final exam mark: ";
    cin >> finalExam;

    total = (assignment * 0.20) +
            (midterm * 0.30) +
            (finalExam * 0.50);

    cout << fixed << setprecision(1);
    cout << "\nCourse Total: " << total << endl;
    cout << "Result: " << (total >= 50 ? "Pass" : "Fail") << endl;

    return 0;
}
