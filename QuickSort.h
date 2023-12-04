#ifndef SMOOTHSKIES_QUICKSORT_H
#define SMOOTHSKIES_QUICKSORT_H
#include "Airport.h"


class QuickSort {

    Airport airports[4408];

    void quickSort(int low, int high);
    int partition(int low, int high);


public:
    QuickSort();
    void readInData();
    void callQuickSort();

};


#endif //SMOOTHSKIES_QUICKSORT_H
