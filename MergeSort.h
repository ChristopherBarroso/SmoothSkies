#ifndef SMOOTHSKIES_MERGESORT_H
#define SMOOTHSKIES_MERGESORT_H
#include "Airport.h"

class MergeSort {
    Airport airports[4408]; 

    //Comparable* A[], Comparable* temp[], int left, int right
    void mergesort(Airport* airports[], Airport* temp[], int left, int right); 

public:
    MergeSort();
    void readInData(); 
    void callMergeSort(); 
};

#endif