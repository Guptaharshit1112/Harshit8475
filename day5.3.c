#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

void displayMembers(const Person* people, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Member " << i + 1 << ":\n";
        std::cout << "Name: " << people[i].name << std::endl;
        std::cout << "Age: " << people[i].age << std::endl;
        std::cout << std::endl;
    }
}

int main() {
    const int SIZE = 3; // Replace with the size of your array

    // Example array of structures
    Person people[SIZE] = {
        {"John", 25},
        {"Jane", 30},
        {"Alice", 35}
    };

    displayMembers(people, SIZE);

    return 0;
}
