#ifndef COLLEGE_H
#define COLLEGE_H
#include "Contact.h"

class College {
private:
    char name[100];
    Contact contact;
public:
    College(const char*, Contact);
    void Show() const;
};

#endif 