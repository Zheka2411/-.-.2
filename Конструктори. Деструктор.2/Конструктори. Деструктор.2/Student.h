#ifndef STUDENT_H
#define STUDENT_H
#include "College.h"

class Student {
private:
    char fullName[100];
    char birthDate[20];
    Contact contact;
    College college;
public:
    Student(const char*, const char*, Contact, College);
    void Show() const;
};

#endif 
