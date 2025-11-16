#include "OSInspector.h"
#include <iostream>

void OSInspector::showDeveloper(const OSBase& os) const {
    std::cout << "\n[Friend class] Developer company: "
        << os.developer.companyName << "\n";
}

void OSInspector::countVersions(const OSBase& os) const {
    std::cout << "[Friend class] Number of versions: "
        << os.versions.size() << "\n";
}
