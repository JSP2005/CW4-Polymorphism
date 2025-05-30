#include "MassageService.h"
#include <iostream>
using namespace std;

MassageService::MassageService(int dur, double price)
    : Service("Personalized therapeutic massage", dur, price) {
    finalPrice = price;
}

void MassageService::displayDetails() {
    cout << "Service: " << serviceName << endl;
    cout << "Duration: " << duration << " minutes" << endl;
    cout << "Base Price: $" << basePrice << endl;
}

double MassageService::calculateFinalPrice() {
    finalPrice = basePrice;
    if (duration > 60) {
        cout << "Note: Duration exceeds 60 minutes. Surcharge applied: $200" << endl;
        finalPrice += 200;
    }
    return finalPrice;
}

void MassageService::confirmBooking(string time) {
    displayDetails();
    cout << "Time: " << time << endl;
    calculateFinalPrice();
    cout << "Final Price: $" << finalPrice << endl;
    cout << "Booking Confirmed" << endl;
}

void MassageService::confirmBooking(string time, bool isReturning) {
    displayDetails();
    cout << "Time: " << time << endl;
    calculateFinalPrice();
    if (isReturning) {
        cout << "Client Type: Returning Client" << endl;
        cout << "Note: Returning client discount applied: 10%" << endl;
        finalPrice *= 0.9;
    }
    cout << "Final Price: $" << finalPrice << endl;
    cout << "Booking Confirmed" << endl;
}

