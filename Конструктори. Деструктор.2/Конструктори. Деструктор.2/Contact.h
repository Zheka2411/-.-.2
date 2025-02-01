#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact {
private:
    char phone[20];
    char city[50];
    char country[50];
public:
    Contact(const char*, const char*, const char*);
    void Show() const;
};

#endif 