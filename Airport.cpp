#include "Airport.h"

Airport::Airport(){
    _airportCode = 0;
    _airportName = "";
    _numLateFlights = 0;
    _numSecurityDelays = 0;
    _numWeatherDelays = 0;
    _numFlightsCancelled = 0;
    _numDelayedFlights = 0;
    _numFlightsTotaled = 0;
    _numMinutesDelayed = 0;
}

void Airport::setCode(int code) {
    _airportCode = code;
}

void Airport::setName(string& name) {
    _airportName = name;
}

void Airport::setNumLate(int num) {
    _numLateFlights = num;
}

void Airport::setSecurityDelays(int num) {
    _numSecurityDelays = num;
}

void Airport::setNumWeatherDelays(int num) {
    _numWeatherDelays = num;
}

void Airport::setNumFlightsCancelled(int num) {
    _numFlightsCancelled = num;
}

void Airport::setNumDelayedFlights(int num) {
    _numDelayedFlights = num;
}

void Airport::setNumFlightsTotaled(int num) {
    _numFlightsTotaled = num;
}

void Airport::setNumMinutesDelayed(int num) {
    _numMinutesDelayed = num;
}

int Airport::getCode() const {
    return _airportCode;
}

string Airport::getName() {
    return _airportName;
}

int Airport::getNumLate() const {
    return _numLateFlights;
}

int Airport::getSecurityDelays() const {
    return _numSecurityDelays;
}

int Airport::getNumWeatherDelays() const {
    return _numWeatherDelays;
}

int Airport::getNumFlightsCancelled() const {
    return _numFlightsCancelled;
}

int Airport::getNumDelayedFlights() const {
    return _numDelayedFlights;
}

int Airport::getNumFlightsTotaled() const {
    return _numFlightsTotaled;
}

int Airport::getNumMinutesDelayed() const {
    return _numMinutesDelayed;
}




