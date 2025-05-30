#include "MassageService.h"

int main() {
    MassageService m1(75, 1400);
    m1.confirmBooking("3:00 PM");

    cout << "=========================================" << endl;

    MassageService m2(60, 1200);
    m2.confirmBooking("4:00 PM", true);

    return 0;
}

