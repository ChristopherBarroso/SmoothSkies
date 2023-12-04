#ifndef SMOOTHSKIES_QUICKSORT_H
#define SMOOTHSKIES_QUICKSORT_H
#include "Airport.h"


class QuickSort {

    Airport airports[4408];

    /*
 *                 "1. Number of Late Flights\n"
                "2. Number of Security Delays\n"
                "3. Number of Weather Delays\n"
                "4. Number of Flights Cancelled\n"
                "5. Number of Delayed Flights\n"
                "6. Number of Flights Totaled\n"
                "7. Number of Minutes Delayed\n";
 */
    void quickSort(int low, int high, string& dataType);
    int partitionLateFlights(int low, int high);
    int partitionSecurityDelays(int low, int high);
    int partitionWeatherDelays(int low, int high);
    int partitionFlightsCancelled(int low, int high);
    int partitionDelayedFlights(int low, int high);
    int partitionFlightstotal(int low, int high);
    int partitionMinutesDelayed(int low, int high);


public:
    QuickSort();
    void readInData();
    void callQuickSort(string& desiredValue);

};


#endif //SMOOTHSKIES_QUICKSORT_H
