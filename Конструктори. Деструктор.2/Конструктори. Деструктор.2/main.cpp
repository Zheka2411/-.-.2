#include "Student.h"

int main() {
    Contact contact("+380123456789", "Kyiv", "Ukraine");
    College college("Kyiv Polytechnic Institute", contact);
    Student student("Ivan Petrenko", "2005-03-15", contact, college);

    student.Show();
    return 0;
}
