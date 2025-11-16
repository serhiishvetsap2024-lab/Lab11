#ifndef OSBASE_H
#define OSBASE_H

#include "models.h"
#include <string>
#include <vector>

class OSInspector; 

class OSBase {
protected:
    std::string name;
    DeveloperInfo developer;
    std::vector<VersionInfo> versions;

public:
    OSBase();
    OSBase(const std::string& osName);

    virtual ~OSBase();

    virtual void inputData();
    virtual void printData() const;

    bool validateVersionNumber(double num) const;

    friend class OSInspector;
};

#endif
