#include "AndroidOS.h"
#include <iostream>

AndroidOS::AndroidOS() : OSBase("Android"), kernel("Linux Kernel") {}

void AndroidOS::inputData() {
    OSBase::inputData();

    std::cout << "Enter Android kernel type: ";
    std::getline(std::cin, kernel);
}

void AndroidOS::printData() const {
    OSBase::printData();
    std::cout << "Kernel: " << kernel << "\n";
}
