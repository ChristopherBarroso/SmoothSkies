#include "QuickSort.h"

QuickSort::QuickSort() = default;

void QuickSort::readInData() {

    string token;
    ifstream AirportFile("Proj3_Airlines.csv");
    if (AirportFile.is_open()) {
        //clear data's headers
        string currentLine;
        getline(AirportFile, currentLine);

        int index = 0;

        while (getline(AirportFile, currentLine)){
            Airport newAp;
            istringstream stream(currentLine);
            for (int i = 0; i < 9; i++) {
                getline(stream, token, ',');
                if (i == 0) { newAp.setCode(stoi(token)); }
                else if (i == 1) { newAp.setName(token);}
                else if (i == 2) { newAp.setNumLate(stoi(token)); }
                else if (i == 3) { newAp.setSecurityDelays(stoi(token));}
                else if (i == 4) { newAp.setNumWeatherDelays(stoi(token));}
                else if (i == 5) { newAp.setNumFlightsCancelled(stoi(token));}
                else if (i == 6) { newAp.setNumDelayedFlights(stoi(token));}
                else if (i == 7) { newAp.setNumFlightsTotaled(stoi(token));}
                else { newAp.setNumMinutesDelayed(stoi(token));}
            }
            airports[index] = newAp;
            index++;
        }
    }
    else{
        cout << "still does not load file" << endl;
    }
}

//To avoid repeat code, quickSort will choose a certain partition based on desired value
void QuickSort::quickSort(int low, int high, string& dataType) {
    int pivot;
    if (low < high){

        if(dataType == "Late"){pivot = partitionLateFlights(low, high);}
        else if(dataType == "Security"){pivot = partitionSecurityDelays(low, high);}
        else if(dataType == "Weather"){pivot = partitionWeatherDelays(low,high);}
        else if(dataType == "Cancelled"){pivot = partitionFlightsCancelled(low,high);}
        else if(dataType == "Delayed"){pivot = partitionDelayedFlights(low,high);}
        else if(dataType == "Total"){pivot = partitionFlightstotal(low,high);}
        else{pivot = partitionMinutesDelayed(low,high);}

        quickSort(low, pivot - 1, dataType);
        quickSort(pivot + 1, high, dataType);
    }
}

int QuickSort::partitionLateFlights(int low, int high) {
    int pivot = airports[low].getNumLate(); // change to access different variables
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumLate() > pivot) //change this too
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumLate() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);

    }
    std::swap(airports[low], airports[high]);
    return down;
}

int QuickSort::partitionSecurityDelays(int low, int high) {
    int pivot = airports[low].getSecurityDelays(); // change to access different variables
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getSecurityDelays() > pivot) //change this too
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getSecurityDelays() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

int QuickSort::partitionWeatherDelays(int low, int high) {
    int pivot = airports[low].getNumWeatherDelays(); // change to access different variables
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumWeatherDelays() > pivot) //change this too
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumWeatherDelays() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

int QuickSort::partitionFlightsCancelled(int low, int high) {
    int pivot = airports[low].getNumFlightsCancelled(); // change to access different variables
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumFlightsCancelled() > pivot) //change this too
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumFlightsCancelled() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

int QuickSort::partitionDelayedFlights(int low, int high) {
    int pivot = airports[low].getNumDelayedFlights(); // change to access different variables
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumDelayedFlights() > pivot) //change this too
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumDelayedFlights() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

int QuickSort::partitionFlightstotal(int low, int high) {
    int pivot = airports[low].getNumFlightsTotaled(); // change to access different variables
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumFlightsTotaled() > pivot) //change this too
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumFlightsTotaled() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

int QuickSort::partitionMinutesDelayed(int low, int high) {
    int pivot = airports[low].getNumMinutesDelayed(); // change to access different variables
    int up = low, down = high;

    while (up < down) {
        for (int j = up; j < high; j++) {
            if (airports[up].getNumMinutesDelayed() > pivot) //change this too
                break;
            up++;
        }
        for (int j = high; j > low; j--) {
            if (airports[down].getNumMinutesDelayed() < pivot)
                break;
            down--;
        }
        if (up < down)
            std::swap(airports[low], airports[down]);
    }
    std::swap(airports[low], airports[high]);
    return down;
}

void QuickSort::callQuickSort(string& desiredValue) {
    int n = (sizeof(airports) / (sizeof(this->airports[0].getNumMinutesDelayed())));
    quickSort(0, n-1, desiredValue);
}



