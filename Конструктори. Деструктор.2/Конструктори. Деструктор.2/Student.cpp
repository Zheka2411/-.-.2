#include "Student.h"

Student::Student(const char* fn, const char* bd, Contact c, College co) : contact(c), college(co) {
    int i = 0;
    while (fn[i] != '\0' && i < 99) { fullName[i] = fn[i]; i++; }
    fullName[i] = '\0';
    i = 0;
    while (bd[i] != '\0' && i < 19) { birthDate[i] = bd[i]; i++; }
    birthDate[i] = '\0';
}

void Student::Show() const {
    std::cout << "Student Name: " << fullName << ", Birth Date: " << birthDate << std::endl;
    contact.Show();
    college.Show();
}