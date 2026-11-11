/*
 * Task 2: Electricity bill
 *
 * (a) Inputs and outputs
 *     Input  : units used in the month (kWh, whole number)
 *     Outputs: energy charge, service charge, total bill (two decimals)
 *
 * (b) Process
 *     1. Declare constants: first-block limit 50 units, rate 1.50 birr
 *        for the first 50 units, rate 2.00 birr above 50 units and the
 *        fixed service charge of 10 birr.
 *     2. Read the units used.
 *     3. Use the conditional operator to compute the energy charge:
 *        if units <= 50 -> units * 1.50
 *        otherwise      -> 50 * 1.50 + (units - 50) * 2.00
 *     4. Set the service charge to 10 birr.
 *     5. Total bill = energy charge + service charge.
 *     6. Print the three values with two decimal places.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int    FIRST_BLOCK    = 50;
    const double FIRST_RATE     = 1.50;
    const double NEXT_RATE      = 2.00;
    const double SERVICE_CHARGE = 10.00;

    int units;

    cout << "Enter units used (kWh): ";
    cin >> units;

    double energyCharge = (units <= FIRST_BLOCK)
        ? units * FIRST_RATE
        : FIRST_BLOCK * FIRST_RATE + (units - FIRST_BLOCK) * NEXT_RATE;

    double totalBill = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge:  " << energyCharge << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill:     " << totalBill << " birr" << endl;

    return 0;
}
