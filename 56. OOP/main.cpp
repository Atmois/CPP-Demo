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

    return 0;
}