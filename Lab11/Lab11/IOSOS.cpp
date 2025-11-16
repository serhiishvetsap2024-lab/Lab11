#include "IOSOS.h"
#include <iostream>

IOSOS::IOSOS() : OSBase("iOS"), securitySystem("Secure Enclave") {}

void IOSOS::inputData() {
    OSBase::inputData();

    std::cout << "Enter iOS security system: ";
    std::getline(std::cin, securitySystem);
}

void IOSOS::printData() const {
    OSBase::printData();
    std::cout << "Security system: " << securitySystem << "\n";
}
