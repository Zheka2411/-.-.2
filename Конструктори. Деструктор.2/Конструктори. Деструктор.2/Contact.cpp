#include "Contact.h"

Contact::Contact(const char* p, const char* c, const char* co) {
    int i = 0;
    while (p[i] != '\0' && i < 19) { phone[i] = p[i]; i++; }
    phone[i] = '\0';
    i = 0;
    while (c[i] != '\0' && i < 49) { city[i] = c[i]; i++; }
    city[i] = '\0';
    i = 0;
    while (co[i] != '\0' && i < 49) { country[i] = co[i]; i++; }
    country[i] = '\0';
}

void Contact::Show() const {
    std::cout << "Phone: " << phone << ", City: " << city << ", Country: " << country << std::endl;
}