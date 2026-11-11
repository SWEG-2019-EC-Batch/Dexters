Task 1: Student Course Total

1. Understanding the Question

The program should read a student's three examination marks:

- Assignment mark (out of 100).
- Midterm mark (out of 100).
- Final exam mark (out of 100).

The course total is calculated using different percentages:

- Assignment contributes 20%.
- Midterm contributes 30%.
- Final exam contributes 50%.

The pass mark is 50. The program must calculate the student's total mark and determine whether the student gets Pass or Fail.

2. Inputs

The program receives three inputs from the user:

1. Assignment mark.
2. Midterm mark.
3. Final exam mark.

3. Outputs

The program displays:

1. Total weighted mark (one decimal place).
2. Result (Pass or Fail).

4. Mathematical Formulas

Step 1: Calculate the assignment contribution.

A\_c = A × 20/100

Step 2: Calculate the midterm contribution.

M\_c = M × 30/100

Step 3: Calculate the final exam contribution.

F\_c = F × 50/100

Step 4: Calculate the total course mark.

T = A\_c + M\_c + F\_c

Combining the formulas:

T = (A × 0.20) + (M × 0.30) + (F × 0.50)

Where:

- A = Assignment mark.
- M = Midterm mark.
- F = Final exam mark.
- T = Total course mark.

Step 5: Determine the result.

If T is greater than or equal to 50, the result is Pass.

If T is less than 50, the result is Fail.

In C++, we implement this decision using the conditional operator (?:), not an if statement.

5. Process (Numbered Steps)

1. Start the program.
2. Declare variables for assignment, midterm, final exam, and total marks.
3. Ask the user to enter the assignment mark.
4. Read the assignment mark.
5. Ask the user to enter the midterm mark.
6. Read the midterm mark.
7. Ask the user to enter the final exam mark.
8. Read the final exam mark.
9. Calculate the assignment contribution by multiplying the assignment mark by 0.20.
10. Calculate the midterm contribution by multiplying the midterm mark by 0.30.
11. Calculate the final exam contribution by multiplying the final exam mark by 0.50.
12. Add all three contributions to calculate the total course mark.
13. Use the conditional operator to determine whether the student passes or fails.
14. Display the total mark using one decimal place.
15. Display the result (Pass or Fail).
16. End the program.

6. Example Execution

Example 1: Student passes

Inputs:

- Assignment = 80
- Midterm = 60
- Final exam = 70

Calculations:

T = (80 × 0.20) + (60 × 0.30) + (70 × 0.50)

T = 16 + 18 + 35

T = 69.0

Since 69.0 is greater than 50, the result is Pass.


Expected output:

Enter assignment mark: 80
Enter midterm mark: 60
Enter final exam mark: 70

Total mark: 69.0
Result: Pass


Example 2: Student fails

Inputs:

- Assignment = 40
- Midterm = 30
- Final exam = 45

Calculations:

T = (40 × 0.20) + (30 × 0.30) + (45 × 0.50)

T = 8 + 9 + 22.5

T = 39.5

Since 39.5 is less than 50, the result is Fail.


Expected output:

Enter assignment mark: 40
Enter midterm mark: 30
Enter final exam mark: 45

Total mark: 39.5
Result: Fail
