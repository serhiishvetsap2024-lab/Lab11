#include <iostream>
#include <memory>
#include "AndroidOS.h"
#include "IOSOS.h"
#include "OSInspector.h"

int main() {
    std::unique_ptr<OSBase> os;
    OSInspector inspector;

    std::cout << "Choose OS (1 - Android, 2 - iOS): ";
    int choice;
    std::cin >> choice;
    std::cin.ignore();

    if (choice == 1) os = std::make_unique<AndroidOS>();
    else os = std::make_unique<IOSOS>();

    os->inputData();

    std::cout << "\n========== OUTPUT ==========\n";
    os->printData();

    inspector.showDeveloper(*os);
    inspector.countVersions(*os);

    return 0;
}
