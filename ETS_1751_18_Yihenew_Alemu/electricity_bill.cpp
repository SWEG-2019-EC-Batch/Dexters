Inputs:

/*Units used in the month (kWh)

Outputs:

Energy charge 
Service charge
Total bill 

Constants:

Rate for the first 50 units = 1.50 birr
Rate above 50 units = 2.00 birr
Tier limit = 50 units
Service charge = 10 birr

(b) Process

Define the constants for the two rates, the tier limit and the service charge.
Prompt the user for the units used and read the value.
Use the conditional operator to calculate the energy charge: if units <= 50, energy = units × 1.50, otherwise energy = (50 × 1.50) + ((units − 50) × 2.00).
Calculate the total bill = energy charge + service charge.
Set the output format to fixed with two decimal places.
Print the energy charge,the service charge and the total bill.*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const int TIER_LIMIT = 50;
    const double RATE_FIRST = 1.50;
    const double RATE_ABOVE = 2.00;
    const double SERVICE_CHARGE = 10.0;

    int units;
    cout << "Enter units used (kWh): ";
    cin >> units;
    double energy = (units <= TIER_LIMIT)
                    ? units * RATE_FIRST
                    : TIER_LIMIT * RATE_FIRST + (units - TIER_LIMIT) * RATE_ABOVE;

    double total = energy + SERVICE_CHARGE;

    
    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energy << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill: " << total << " birr" << endl;

    return 0;
}
