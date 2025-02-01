#include "Student.h"

Student::Student(const char* fn, const char* bd, Contact c, College co) : contact(c), college(co) {
    int len_fn = 0, len_bd = 0;
    while (fn[len_fn] != '\0') len_fn++;
    while (bd[len_bd] != '\0') len_bd++;

    fullName = new char[len_fn + 1];
    birthDate = new char[len_bd + 1];

    for (int i = 0; i <= len_fn; i++) fullName[i] = fn[i];
    for (int i = 0; i <= len_bd; i++) birthDate[i] = bd[i];
}

Student::~Student() {
    delete[] fullName;
    delete[] birthDate;
}

void Student::Show() const {
    std::cout << "Student Name: " << fullName << ", Birth Date: " << birthDate << std::endl;
    contact.Show();
    college.Show();
}
