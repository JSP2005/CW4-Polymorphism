#ifndef SERVICE_H
#define SERVICE_H

#include <string>
using namespace std;

class Service {
protected:
    string serviceName;
    int duration;
    double basePrice;

public:
    Service(string name, int dur, double price);
    virtual void displayDetails() = 0;
    virtual double calculateFinalPrice() = 0;
    virtual void confirmBooking(string time) = 0;
    virtual void confirmBooking(string time, bool isReturning) = 0;
};

#endif

