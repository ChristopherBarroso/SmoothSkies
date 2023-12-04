#ifndef SMOOTHSKIES_QUICKSORT_H
#define SMOOTHSKIES_QUICKSORT_H
#include "Airport.h"


class QuickSort {

    Airport airports[4408];


    void quickSort(int low, int high, string& dataType);
    int partitionLateFlights(int low, int high);
    int partitionSecurityDelays(int low, int high);
    int partitionWeatherDelays(int low, int high);
    int partitionFlightsCancelled(int low, int high);
    int partitionDelayedFlights(int low, int high);
    int partitionFlightsTotal(int low, int high);
    int partitionMinutesDelayed(int low, int high);


public:
    QuickSort();
    void readInData();
    void callQuickSort(string& desiredValue);

};


#endif //SMOOTHSKIES_QUICKSORT_H
