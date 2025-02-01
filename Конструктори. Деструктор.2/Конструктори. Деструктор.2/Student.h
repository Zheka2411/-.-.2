#ifndef STUDENT_H
#define STUDENT_H
#include "College.h"

class Student {
private:
    char* fullName;
    char* birthDate;
    Contact contact;
    College college;
public:
    Student(const char*, const char*, Contact, College);
    ~Student();
    void Show() const;
};

#endif
