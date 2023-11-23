#include <iostream>

struct student
{                     // Can have multiple different datatypes under one variable
    std::string name; // Each of these are a member
    double score;
    bool present = true; // Sets the default value to true
};

void outputStudent(student student1)
{
    std::cout << student1.name << " " << student1.score << " " << student1.present;
}


int main()
{
    student student1;      // Creates a student variable with the 3 members
    student1.name = "Bob"; // Modifes the relevant member
    student1.score = 99;

    outputStudent(student1);

    return 0;
}