// I. Inputs and Outputs
// Inputs:
// VARIABLE	    DATA TYPE
// units		int
// Outputs:
// 1. Energy charge (cost of electricity consumed).
// 2. Service charge (fixed 10 birr).
// 3. Total bill (energy charge + service charge).

// II. Process
// 1. Start the program.
// 2. Declare an integer variable units to store electricity consumption.
// 3. Declare three double variables: energyCharge, serviceCharge, and totalBill.
// 4. Read the number of electricity units from the user.
// 5. Calculate the energy charge using the conditional operator:
//    - If units are less than or equal to 50, multiply units by 1.50.
//    - Otherwise, calculate the cost of the first 50 units at 1.50 birr and the remaining units at 2.00 birr.
//    Formula:
//            If  Units <= 50, EnergyCharge = Units X 1.50
//            If  Units > 50,  EnergyCharge = (50 X 1.50) + (Units-50) X 2.00
// 6. Set the service charge to 10 birr.
// 7. Calculate the total bill by adding the energy charge and service charge.
// 8. Display the energy charge, service charge, and total bill using two decimal places.
// 9. End the program.

// III. The Program


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double energyCharge, serviceCharge, totalBill;

    cout << "Enter electricity units: ";
    cin >> units;

    energyCharge = (units <= 50)
                   ? units * 1.50
                   : (50 * 1.50) + ((units - 50) * 2.00);

    serviceCharge = 10.00;
    totalBill = energyCharge + serviceCharge;

    cout << fixed << setprecision(2);
    cout << "\nEnergy Charge: " << energyCharge << " Birr" << endl;
    cout << "Service Charge: " << serviceCharge << " Birr" << endl;
    cout << "Total Bill: " << totalBill << " Birr" << endl;

    return 0;
}
