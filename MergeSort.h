#ifndef SMOOTHSKIES_MERGESORT_H
#define SMOOTHSKIES_MERGESORT_H
#include "Airport.h"

class MergeSort {
    Airport airports[4408]; 
    Airport temp[]; 

    void mergesort(Airport temp[], int left, int right); 
    void MergeLateFlights(Airport temp[], int left, int right);
    void MergeSecurityDelays(Airport temp[], int left, int right);
    void MergeWeatherDelays(Airport temp[], int left, int right);
    void MergeFlightsCancelled(Airport temp[], int left, int right);
    void MergeDelayedFlights(Airport temp[], int left, int right);
    void MergeFlightsTotal(Airport temp[], int left, int right);
    void MergeMinutesDelayed(Airport temp[], int left, int right);

public:
    MergeSort();
    void readInData(); 
    void callMergeSort(string& userInput); 
};

#endif