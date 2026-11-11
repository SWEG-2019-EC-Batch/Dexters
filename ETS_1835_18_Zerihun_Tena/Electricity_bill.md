Task 2: Electricity Bill

1. Understanding the Question

The program should read the electricity units (kWh) consumed by a user in one month and calculate the electricity bill.

The electricity pricing system is:

- The first 50 units cost 1.50 birr per unit.
- Every unit above 50 costs 2.00 birr per unit.
- A fixed service charge of 10 birr is added to the energy charge.

The program must calculate the energy charge, service charge, and total bill.

2. Inputs

The program receives one input from the user:

1. Electricity units consumed in a month (kWh).

3. Outputs

The program displays:

1. Energy charge (two decimal places).
2. Service charge (two decimal places).
3. Total bill (two decimal places).

4. Mathematical Formulas

Step 1: Calculate the energy charge.

If the consumed units are less than or equal to 50:

Energy Charge = Units × 1.50

If the consumed units are greater than 50:

Energy Charge = (50 × 1.50) + ((Units - 50) × 2.00)

Step 2: Calculate the service charge.

Service Charge = 10 birr

Step 3: Calculate the total electricity bill.

Total Bill = Energy Charge + Service Charge

The combined formula is:

If Units ≤ 50:

Total Bill = (Units × 1.50) + 10

If Units > 50:

Total Bill = (50 × 1.50) + ((Units - 50) × 2.00) + 10

Where:

- Units = Electricity units consumed.
- Energy Charge = Cost of electricity consumed.
- Service Charge = Fixed monthly charge.
- Total Bill = Total amount to pay.

In C++, we use the conditional operator (?:) to select the correct calculation depending on the number of units consumed.

5. Process (Numbered Steps)

1. Start the program.
2. Declare an integer variable for electricity units.
3. Declare a double variable for the energy charge.
4. Declare a constant for the service charge and assign it 10.0.
5. Declare a double variable for the total bill.
6. Ask the user to enter the electricity units consumed.
7. Read the electricity units.
8. Check whether the consumed units are less than or equal to 50 using the conditional operator.
9. If the units are less than or equal to 50, multiply the units by 1.50 to calculate the energy charge.
10. Otherwise, calculate the cost of the first 50 units and add the cost of the remaining units at 2.00 birr per unit.
11. Add the energy charge and service charge to calculate the total bill.
12. Display the energy charge using two decimal places.
13. Display the service charge using two decimal places.
14. Display the total bill using two decimal places.
15. End the program.

6. Example Execution

Example 1: Electricity consumption is above 50 units.

Input:

- Electricity units = 80

Calculations:

First, calculate the cost of the first 50 units:

50 × 1.50 = 75 birr

Second, calculate the remaining units:

80 - 50 = 30 units

Third, calculate the cost of the remaining units:

30 × 2.00 = 60 birr

Fourth, calculate the energy charge:

Energy Charge = 75 + 60

Energy Charge = 135 birr

Fifth, calculate the total bill:

Total Bill = 135 + 10

Total Bill = 145 birr


Expected output:

Enter electricity units: 80

Energy charge: 135.00 birr
Service charge: 10.00 birr
Total bill: 145.00 birr


Example 2: Electricity consumption is below 50 units.

Input:

- Electricity units = 30

Calculations:

Energy Charge = 30 × 1.50

Energy Charge = 45 birr

Total Bill = 45 + 10

Total Bill = 55 birr


Expected output:

Enter electricity units: 30

Energy charge: 45.00 birr
Service charge: 10.00 birr
Total bill: 55.00 birr
