#include <iostream>
#include "person.h"

int main() {
    std::cout << "Hello goingdol on" << std::endl;

    Person me(54, true, "JC.JEON");

    me.showPersonInfo();

    Person wife = Person(50, false, "SUYEON.HA");

    wife.showPersonInfo();

    return 0;
}
