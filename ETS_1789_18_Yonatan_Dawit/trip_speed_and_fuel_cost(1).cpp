/*
 * Task 3: Trip speed and fuel cost
 *
 * (a) Inputs and outputs
 *     Inputs : distance (km), travel hours, travel minutes (whole numbers),
 *              fuel use (liters per 100 km), price per liter (birr)
 *     Outputs: average speed (km/h), fuel used (liters), fuel cost (birr),
 *              each with two decimals
 *
 * (b) Process
 *     1. Declare a constant for the minutes in one hour (60).
 *     2. Read distance, hours, minutes, fuel use per 100 km and price per liter.
 *     3. Convert the time to hours: totalHours = hours + minutes / 60.0
 *        (cast to double so the division is not an integer division).
 *     4. Average speed = distance / totalHours.
 *     5. Fuel used = distance * fuelPer100km / 100.
 *     6. Fuel cost = fuel used * price per liter.
 *     7. Print the three results with two decimal places.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double MINUTES_PER_HOUR = 60.0;
    const double KM_PER_BLOCK     = 100.0;

    double distance, fuelPer100km, pricePerLiter;
    int hours, minutes;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time - hours: ";
    cin >> hours;
    cout << "Enter travel time - minutes: ";
    cin >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelPer100km;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    double totalHours = static_cast<double>(hours) + minutes / MINUTES_PER_HOUR;
    double averageSpeed = distance / totalHours;
    double fuelUsed = distance * fuelPer100km / KM_PER_BLOCK;
    double fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used:     " << fuelUsed << " liters" << endl;
    cout << "Fuel cost:     " << fuelCost << " birr" << endl;

    return 0;
}
