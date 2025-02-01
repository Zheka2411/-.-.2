#ifndef COLLEGE_H
#define COLLEGE_H
#include "Contact.h"

class College {
private:
    char* name;
    Contact contact;
public:
    College(const char*, Contact);
    ~College();
    void Show() const;
};

#endif
