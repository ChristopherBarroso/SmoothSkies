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
                if (i == 0) { newAp.setCode(token); }
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
void MergeSort::MergeSecurityDelays(Airport temp[],int left, int right){
    if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    MergeSecurityDelays(temp, left, mid);
    MergeSecurityDelays(temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        temp[i] = airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos == midPos+1){
            airports[i] = temp[midPos++]; 

        }
        else if(midPos > right){
            airports[i] = temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(temp[leftPos].getSecurityDelays() < temp[midPos].getSecurityDelays()){

            airports[i] = temp[leftPos++]; 

        }else{
            airports[i] = temp[midPos++]; 
        }
    }
}

void MergeSort::MergeLateFlights(Airport temp[], int left, int right){
      if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    MergeLateFlights(temp, left, mid);
    MergeLateFlights(temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        temp[i] = airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos == midPos+1){
            airports[i] = temp[midPos++]; 

        }
        else if(midPos > right){
            airports[i] = temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(temp[leftPos].getNumLate() < temp[midPos].getNumLate()){

            airports[i] = temp[leftPos++]; 

        }else{
            airports[i] = temp[midPos++]; 
        }
    }
}

void MergeSort::MergeWeatherDelays(Airport temp[], int left, int right){
      if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    MergeWeatherDelays(temp, left, mid);
    MergeWeatherDelays(temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        temp[i] = airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos == midPos+1){
            airports[i] = temp[midPos++]; 

        }
        else if(midPos > right){
            airports[i] = temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(temp[leftPos].getNumWeatherDelays() < temp[midPos].getNumWeatherDelays()){

            airports[i] = temp[leftPos++]; 

        }else{
            airports[i] = temp[midPos++]; 
        }
    }
}

void MergeSort::MergeFlightsCancelled(Airport temp[], int left, int right){
      if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    MergeFlightsCancelled(temp, left, mid);
    MergeFlightsCancelled(temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        temp[i] = airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos == midPos+1){
            airports[i] = temp[midPos++]; 

        }
        else if(midPos > right){
            airports[i] = temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(temp[leftPos].getNumFlightsCancelled() < temp[midPos].getNumFlightsCancelled()){

            airports[i] = temp[leftPos++]; 

        }else{
            airports[i] = temp[midPos++]; 
        }
    }
}

void MergeSort::MergeWeatherDelays(Airport temp[], int left, int right){
      if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    MergeWeatherDelays(temp, left, mid);
    MergeWeatherDelays(temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        temp[i] = airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos == midPos+1){
            airports[i] = temp[midPos++]; 

        }
        else if(midPos > right){
            airports[i] = temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(temp[leftPos].getNumWeatherDelays() < temp[midPos].getNumWeatherDelays()){

            airports[i] = temp[leftPos++]; 

        }else{
            airports[i] = temp[midPos++]; 
        }
    }
}

void MergeSort::MergeDelayedFlights(Airport temp[], int left, int right){
      if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    MergeDelayedFlights(temp, left, mid);
    MergeDelayedFlights(temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        temp[i] = airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos == midPos+1){
            airports[i] = temp[midPos++]; 

        }
        else if(midPos > right){
            airports[i] = temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(temp[leftPos].getNumDelayedFlights() < temp[midPos].getNumDelayedFlights()){

            airports[i] = temp[leftPos++]; 

        }else{
            airports[i] = temp[midPos++]; 
        }
    }
}

void MergeSort::MergeFlightsTotal(Airport temp[], int left, int right){
      if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    MergeFlightsTotal(temp, left, mid);
    MergeFlightsTotal(temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        temp[i] = airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos == midPos+1){
            airports[i] = temp[midPos++]; 

        }
        else if(midPos > right){
            airports[i] = temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(temp[leftPos].getNumFlightsTotaled() < temp[midPos].getNumFlightsTotaled()){

            airports[i] = temp[leftPos++]; 

        }else{
            airports[i] = temp[midPos++]; 
        }
    }
}

void MergeSort::MergeMinutesDelayed(Airport temp[], int left, int right){
      if(left == right){
        return; 
    }
    int mid = (left + right)/2; 
    MergeMinutesDelayed(temp, left, mid);
    MergeMinutesDelayed(temp, (mid+1), right);

    //copy the subarrray into temp array
    for(int i = left; i <= right; i++){
        temp[i] = airports[i]; 
    }

    int leftPos = left; 
    int midPos = mid+1; 

    for(int i = left; i <= right; i++){
        
        if(leftPos == midPos+1){
            airports[i] = temp[midPos++]; 

        }
        else if(midPos > right){
            airports[i] = temp[leftPos++]; 

        //here is where we access the val in object that we want to compare so do. Ex: *temp[leftPos]->getName
        }else if(temp[leftPos].getNumMinutesDelayed() < temp[midPos].getNumMinutesDelayed()){

            airports[i] = temp[leftPos++]; 

        }else{
            airports[i] = temp[midPos++]; 
        }
    }
}

//print functions 
void MergeSort::printLateFlights(){
    for(int i = 0; i < (sizeof(airports) / (sizeof(this->airports[0]))); i++){
        cout << (i+0) << "Airport Code and Name: " << airports[i].getAirportCode() << " " << airports[i].getAirportName() << endl; 
        cout << "Number of Late Flights: " << airports[i].getNumLate() << endl;
    }
}

void MergeSort::printSecurityDelays(){
    for(int i = 0; i < (sizeof(airports) / (sizeof(this->airports[0]))); i++){
        cout << (i+0) << "Airport Code and Name: " << airports[i].getAirportCode() << " " << airports[i].getAirportName() << endl; 
        cout << "Number of Security Delays: " << airports[i].getSecurityDelays() << endl;
    }
}

void MergeSort:: printWeatherDelays(){
    for(int i = 0; i < (sizeof(airports) / (sizeof(this->airports[0]))); i++){
        cout << (i+0) << "Airport Code and Name: " << airports[i].getAirportCode() << " " << airports[i].getAirportName() << endl; 
        cout << "Number of Security Delays: " << airports[i].getNumWeatherDelays() << endl;
    }
}

void MergeSort:: printFlightsCancelled(){
    for(int i = 0; i < (sizeof(airports) / (sizeof(this->airports[0]))); i++){
        cout << (i+0) << "Airport Code and Name: " << airports[i].getAirportCode() << " " << airports[i].getAirportName() << endl; 
        cout << "Number of Security Delays: " << airports[i].getNumFlightsCancelled() << endl;
    }
}

void MergeSort:: printDelayedFlights(){
    for(int i = 0; i < (sizeof(airports) / (sizeof(this->airports[0]))); i++){
        cout << (i+0) << "Airport Code and Name: " << airports[i].getAirportCode() << " " << airports[i].getAirportName() << endl; 
        cout << "Number of Security Delays: " << airports[i].getNumDelayedFlights() << endl;
    }
}

void MergeSort:: printFlightsTotal(){
    for(int i = 0; i < (sizeof(airports) / (sizeof(this->airports[0]))); i++){
        cout << (i+0) << "Airport Code and Name: " << airports[i].getAirportCode() << " " << airports[i].getAirportName() << endl; 
        cout << "Number of Security Delays: " << airports[i].getNumFlightsTotaled() << endl;
    }
}

void MergeSort:: printMinutesDelay(){
    for(int i = 0; i < (sizeof(airports) / (sizeof(this->airports[0]))); i++){
        cout << (i+0) << "Airport Code and Name: " << airports[i].getAirportCode() << " " << airports[i].getAirportName() << endl; 
        cout << "Number of Security Delays: " << airports[i].getNumMinutesDelayed() << endl;
    }
}


void MergeSort::callMergeSort(string& userInput){
    int left = 0; 
    int right = (sizeof(airports) / (sizeof(this->airports[0]))); 

    if(userInput == "Late"){
        void MergeLateFlights(Airport temp[], int left, int right);
        printLateFlights(); 

    }else if(userInput == "Security"){
        void MergeSecurityDelays(Airport temp[], int left, int right);
        printSecurityDelays();

    }else if(userInput == "Weather"){
        void MergeWeatherDelays(Airport temp[], int left, int right);
        printWeatherDelays(); 

    }else if(userInput == "Cancelled")
    {
        void MergeFlightsCancelled(Airport temp[], int left, int right);
        printFlightsCancelled(); 

    }else if(userInput == "Delayed"){
       void MergeDelayedFlights(Airport temp[], int left, int right);
       printDelayedFlights(); 

    }else if(userInput == "Total")
    {
       void MergeFlightsTotal(Airport temp[], int left, int right);
       printFlightsTotal();

    }else{
        void MergeMinutesDelayed(Airport temp[], int left, int right);
        printMinutesDelay(); 
    }

}