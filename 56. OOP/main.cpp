#include <iostream>

class Phone
{
public:
    // Each variable is an attribute
    std::string brand = "Apple"; // Set default attribute
    int series;
    std::string model;

    // Each function is a method
    void call()
    {
        std::cout << "Call";
    }
    void text()
    {
        std::cout << "Text";
    }
};

/*
Inheritance
*/
class Tablet : public Phone
{ // Exists to allow this class to use everything the parent class can do as well as extra functionality
};

int main() // Collection of attributes (Characteristics) & methods (What can it do) - Created from a class
{
    Phone phone1; // Declares variable as object

    phone1.series = 15; // Assign values to the attributes
    phone1.model = "Pro Max";

    phone1.text(); // Call method for the class
    std::cout << "\n";
    phone1.call();
    std::cout << "\n";

    std::cout << phone1.brand << " " << phone1.series << " " << phone1.model;
    std::cout << "\n";

    /*
    Inheritance
    */
    Tablet tablet1;
    tablet1.series = 9; 
    tablet1.model = "Air";
    std::cout << tablet1.brand << " " << tablet1.model << " " << tablet1.series;

    return 0;
}