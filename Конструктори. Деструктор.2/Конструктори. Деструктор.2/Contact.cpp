#include "Contact.h"

Contact::Contact(const char* p, const char* c, const char* co) {
    int len_p = 0, len_c = 0, len_co = 0;
    while (p[len_p] != '\0') len_p++;
    while (c[len_c] != '\0') len_c++;
    while (co[len_co] != '\0') len_co++;

    phone = new char[len_p + 1];
    city = new char[len_c + 1];
    country = new char[len_co + 1];

    for (int i = 0; i <= len_p; i++) phone[i] = p[i];
    for (int i = 0; i <= len_c; i++) city[i] = c[i];
    for (int i = 0; i <= len_co; i++) country[i] = co[i];
}

Contact::~Contact() {
    delete[] phone;
    delete[] city;
    delete[] country;
}

void Contact::Show() const {
    std::cout << "Phone: " << phone << ", City: " << city << ", Country: " << country << std::endl;
}
