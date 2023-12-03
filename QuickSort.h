#ifndef SMOOTHSKIES_QUICKSORT_H
#define SMOOTHSKIES_QUICKSORT_H
#include "Airport.h"


class QuickSort {

    Airport airports[4408];

    void quickSort(Airport array[], int low, int high);
    int partition(Airport array[], int low, int high);


public:
    QuickSort();
    void readInData();
    void callQuickSort();

};


#endif //SMOOTHSKIES_QUICKSORT_H
