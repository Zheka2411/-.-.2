#include "College.h"

College::College(const char* n, Contact c) : contact(c) {
    int i = 0;
    while (n[i] != '\0' && i < 99) { name[i] = n[i]; i++; }
    name[i] = '\0';
}

void College::Show() const {
    std::cout << "College Name: " << name << std::endl;
    contact.Show();
}