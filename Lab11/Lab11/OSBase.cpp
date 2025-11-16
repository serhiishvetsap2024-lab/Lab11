#include "OSBase.h"
#include <iostream>
#include <limits>

OSBase::OSBase() : name("Unknown") {}

OSBase::OSBase(const std::string& osName) : name(osName) {}

OSBase::~OSBase() {}

bool OSBase::validateVersionNumber(double num) const {
    return num > 0.0;
}

void OSBase::inputData() {
    std::cout << "Enter developer company name: ";
    std::getline(std::cin, developer.companyName);

    std::cout << "Enter number of employees: ";
    while (!(std::cin >> developer.employeeCount) || developer.employeeCount < 0) {
        std::cout << "Invalid value. Enter a positive number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int count;
    std::cout << "Enter number of OS versions: ";
    while (!(std::cin >> count) || count <= 0) {
        std::cout << "Invalid value. Enter a positive number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    versions.resize(count);

    for (int i = 0; i < count; i++) {
        std::cout << "Enter version name: ";
        std::getline(std::cin, versions[i].versionName);

        std::cout << "Enter version number: ";
        while (!(std::cin >> versions[i].versionNumber) ||
            !validateVersionNumber(versions[i].versionNumber)) {
            std::cout << "Invalid number. Enter again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void OSBase::printData() const {
    std::cout << "\n--- OS Information ---\n";
    std::cout << "OS Name: " << name << "\n";
    std::cout << "Developer company: " << developer.companyName << "\n";
    std::cout << "Employee count: " << developer.employeeCount << "\n";

    std::cout << "\nVersions:\n";
    for (const auto& v : versions) {
        std::cout << v.versionName << " (" << v.versionNumber << ")\n";
    }
}
