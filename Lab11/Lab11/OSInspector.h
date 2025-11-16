#ifndef OSINSPECTOR_H
#define OSINSPECTOR_H

#include "OSBase.h"

class OSInspector {
public:
    void showDeveloper(const OSBase& os) const;
    void countVersions(const OSBase& os) const;
};

#endif
