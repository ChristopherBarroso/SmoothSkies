#ifndef SMOOTHSKIES_AIRPORT_H
#define SMOOTHSKIES_AIRPORT_H
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Airport {

    string _airportCode, _airportName, _numLateFlights, _numSecurityDelays, _numWeatherDelays, _numFlightsCancelled;
    string _numDelayedFlights, _numFlightsTotaled, _numMinutesDelayed;

public:
    Airport();
    //Airport(string airportCode, string airportName, string numLateFlights, string numSecurityDelays,
     //       string numWeatherDelays, string numFlightsCancelled, string numDelayedFlights, string numFlightsTotaled,
    //        string numMinutesDelayed);
    void setCode(string& code);
    void setName(string& name);
    void setNumLate(string& num);
    void setSecurityDelays(string& num);
    void setNumWeatherDelays(string& num);
    void setNumFlightsCancelled(string& num);
    void setNumDelayedFlights(string& num);
    void setNumFlightsTotaled(string& num);
    void setNumMinutesDelayed(string& num);

};


#endif //SMOOTHSKIES_AIRPORT_H
