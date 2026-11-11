/*
Inputs:

Distance of the trip (km)
Travel time in hours
Travel time in minutes
Fuel use (liters per 100 km)
Price per liter (birr)
Outputs:

Average speed (km/h)
Fuel used (liters)
Fuel cost (birr)

(b) Process

1 Prompt the user for the distance, hours, minutes, fuel use per 100 km and price per liter, and read each value.
2 Convert the travel time to total hours: totalHours = hours + minutes / 60.0. Cast or use 60.0 so the division is not an integer division.
3 Calculate the average speed = distance / totalHours.
4 Calculate the fuel used = distance / 100 × liters per 100 km
5 Calculate the fuel cost = fuel used × price per liter.
6 Set the output format to fixed with two decimal places.
7 Print the average speed, fuel used and fuel cost.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, litersPer100, pricePerLiter;
    int hours, minutes;


    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time - hours: ";
    cin >> hours;
    cout << "Enter travel time - minutes: ";
    cin >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> litersPer100;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;
  
    double totalHours = hours + static_cast<double>(minutes) / 60;
    double averageSpeed = distance / totalHours;
    double fuelUsed = distance / 100 * litersPer100;
    double fuelCost = fuelUsed * pricePerLiter;
  
    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}
