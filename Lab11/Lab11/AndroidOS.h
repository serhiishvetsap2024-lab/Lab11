#ifndef ANDROIDOS_H
#define ANDROIDOS_H

#include "OSBase.h"

class AndroidOS : public OSBase {
    std::string kernel;

public:
    AndroidOS();
    void inputData() override;
    void printData() const override;
};

#endif
