#include <iostream>

class Phone
{
public:
    std::string brand;
    int series;
    std::string model;

    Phone(std::string brand, int series, std::string model) // Basically to automatically assign the value it to the attribute
    {
        this->brand = brand; // The name of what's being passed = The name of the attribute it is being assigned to
        this->series = series;
        this->model = model;
    }
};

/*
Overloading Constructors - You can have multiple constructors with the same name as long as the parameters are differerent
*/
class Pizza
{
public:
    std::string topping1;
    std::string topping2;

    Pizza()
    {
    }
    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{

    Phone phone1("Apple", 15, "Pro Max");
    Phone phone2("Google", 8, "Pro");

    std::cout << phone1.brand << " " << phone1.series << " " << phone1.model << "\n";
    std::cout << phone2.brand << " " << phone2.series << " " << phone2.model;

    /*
    Overloading Constructors
    */
    Pizza pizza1("Tomato Sauce");
    Pizza pizza2("Tomato Sauce", "Cheese");
    Pizza pizza3;

    return 0;
}