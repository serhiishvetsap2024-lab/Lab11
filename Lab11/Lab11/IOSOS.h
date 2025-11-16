#ifndef IOSOS_H
#define IOSOS_H

#include "OSBase.h"

class IOSOS : public OSBase {
    std::string securitySystem;

public:
    IOSOS();
    void inputData() override;
    void printData() const override;
};

#endif
