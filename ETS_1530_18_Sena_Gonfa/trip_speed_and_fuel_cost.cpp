// I. Inputs and Outputs
// Inputs:
// VARIABLE     	DATA TYPE
// distance		    double
// hours	    	int
// minutes	    	int
// fuelRate	    	double
// pricePerLiter	double
// Outputs:
// 1. Average speed in km/h.
// 2. Fuel used in liters.
// 3. Fuel cost in birr.

// II. Process (Numbered Steps)
// 1. Start the program.
// 2. Declare the necessary variables for distance, hours, minutes, fuel consumption rate, and fuel price.
// 3. Read all five inputs from the user.
// 4. Convert the travel time into total hours by dividing the minutes by 60 and adding the hours.
//    TotalTime = Hours + (Minutes)/(60.0)
// 5. Calculate the average speed by dividing the distance by the total time.
//    AverageSpeed = Distance/TotalTime
// 6. Calculate the fuel used based on the distance and fuel consumption rate.
//    FuelUsed = (Distance X FuelRate)/(100)
// 7. Calculate the fuel cost by multiplying the fuel used by the price per liter.
//    FuelCost = FuelUsed X PricePerLiter
// 8. Display the average speed, fuel used, and fuel cost using two decimal places.
// 9. End the program.

// III. The Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, fuelRate, pricePerLiter;
    double totalTime, averageSpeed, fuelUsed, fuelCost;
    int hours, minutes;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time (hours): ";
    cin >> hours;
    cout << "Enter additional minutes: ";
    cin >> minutes;
    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelRate;
    cout << "Enter price per liter (Birr): ";
    cin >> pricePerLiter;

    totalTime = hours + (minutes / 60.0);
    averageSpeed = distance / totalTime;
    fuelUsed = (distance * fuelRate) / 100.0;
    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);
    cout << "\nAverage Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " Birr" << endl;

    return 0;
}
