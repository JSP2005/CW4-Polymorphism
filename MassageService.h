#ifndef MASSAGESERVICE_H
#define MASSAGESERVICE_H

#include "Service.h"
#include <iostream>

class MassageService : public Service {
private:
    double finalPrice;

public:
	MassageService(int dur, double price);
    void displayDetails() override;
    double calculateFinalPrice() override;
    void confirmBooking(string time) override;
    void confirmBooking(string time, bool isReturning) override;
};

#endif


