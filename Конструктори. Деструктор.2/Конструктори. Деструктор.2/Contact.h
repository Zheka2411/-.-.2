#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact {
private:
    char* phone;
    char* city;
    char* country;
public:
    Contact(const char*, const char*, const char*);
    ~Contact();
    void Show() const;
};

#endif
