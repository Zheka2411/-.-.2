#include "College.h"

College::College(const char* n, Contact c) : contact(c) {
    int len_n = 0;
    while (n[len_n] != '\0') len_n++;

    name = new char[len_n + 1];
    for (int i = 0; i <= len_n; i++) name[i] = n[i];
}

College::~College() {
    delete[] name;
}

void College::Show() const {
    std::cout << "College Name: " << name << std::endl;
    contact.Show();
}
