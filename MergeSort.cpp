#include "MergeSort.h"

//MergeSort::MergeSort() = defualt; 

void MergeSort::readInData(){
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

//citation: OpenDSA
void MergeSort::mergesort(Airport* airports[], Airport* temp[], int left, int right){
    if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    mergesort(airports, temp, left, mid);
    mergesort(airports, temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        *temp[i] = *airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos = midPos+1){
            *airports[i] = *temp[midPos++]; 

        }
        else if(midPos > right){
            *airports[i] = *temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(*temp[leftPos]->getName < *temp[midPos]->getName){

            *airports[i] = *temp[leftPos++]; 

        }else{
            *airports[i] = *temp[midPos++]; 
        }
    }
}