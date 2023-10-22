#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float countOfCargo;
    cout << "Enter the count of cargo for transportation: ";
    cin >> countOfCargo;
    float cargoForDay = 0, amountForBus = 0;
    float amountForTruck = 0, amountForTrain = 0, totalAmountBus = 0;
    float totalAmountTruck = 0, totalAmountTrain = 0, sumOfCargo = 0;
    float totalCargoByBus = 0, totalCargoByTruck = 0, totalCargoByTrain = 0;
    for (float cargoNumber = 1; cargoNumber <= countOfCargo; cargoNumber++)
    {
        cout << "Enter the tonnage for cargo " << cargoNumber << ": ";
        cin >> cargoForDay;
        sumOfCargo = sumOfCargo + cargoForDay;
        if (cargoForDay > 11)
        {
            totalCargoByTrain = totalCargoByTrain + cargoForDay;
            amountForTrain = cargoForDay*120;
            totalAmountTrain = totalAmountTrain + amountForTrain;
        }
        if (cargoForDay>3&&cargoForDay<= 11)
        {
            totalCargoByTruck = totalCargoByTruck+cargoForDay;
            amountForTruck = cargoForDay*175;
            totalAmountTruck = totalAmountTruck+amountForTruck;
        }
        if (cargoForDay<=3)
        {
            totalCargoByBus = totalCargoByBus+cargoForDay;
            amountForBus = cargoForDay * 200;
            totalAmountBus = totalAmountBus + amountForBus;
        }
        
        
    }
    float totalCargoByMiniBusPercent = (totalCargoByBus / sumOfCargo) * 100;
    float totalCargoByTruckPercent = (totalCargoByTruck / sumOfCargo) * 100;
    float totalCargoByTrainPercent = (totalCargoByTrain / sumOfCargo) * 100;
    float totalAmount = totalAmountBus+totalAmountTruck+totalAmountTrain;
    float average = totalAmount/sumOfCargo;
    cout << fixed;
    cout << setprecision(2);
    cout <<average<<endl<<totalCargoByMiniBusPercent<<endl<<totalCargoByTruckPercent<<endl<<totalCargoByTrainPercent;
}
