#ifndef SMOOTHSKIES_AIRPORT_H
#define SMOOTHSKIES_AIRPORT_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

class Airport {

    string _airportName;
    int _airportCode, _numLateFlights, _numSecurityDelays, _numWeatherDelays, _numFlightsCancelled;
    int _numDelayedFlights, _numFlightsTotaled, _numMinutesDelayed;

public:
    Airport();
    void setCode(int code);
    void setName(string& name);
    void setNumLate(int num);
    void setSecurityDelays(int num);
    void setNumWeatherDelays(int num);
    void setNumFlightsCancelled(int num);
    void setNumDelayedFlights(int num);
    void setNumFlightsTotaled(int num);
    void setNumMinutesDelayed(int num);
    int getCode() const;
    string getName();
    int getNumLate() const;
    int getSecurityDelays() const;
    int getNumWeatherDelays() const;
    int getNumFlightsCancelled() const;
    int getNumDelayedFlights() const;
    int getNumFlightsTotaled() const;
    int getNumMinutesDelayed() const;

};


#endif //SMOOTHSKIES_AIRPORT_H
