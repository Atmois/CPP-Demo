#include <iostream>
// Abstraction - Hiding unnecessary data from being viewed outsided a class
// Getter - Makes private attribute readable
// Setter - Makes private attribute writetable

class Phone
{
private:
    std::string brand = "Apple";
public:
    std::string getBrand() // Getter
    {
        return brand;
    }
    std::string setBrand(std::string brand) // Setter
    {
        this->brand = brand;
        // You can put logic here to make sure the attribute being set meets criteria
        return brand;
    }
};

int main()
{
    Phone phone1;
    std::string inputBrand;

  
    
    std::cout << phone1.getBrand() << "\n";

    std::cin >> inputBrand;
    phone1.setBrand(inputBrand);
    std::cout << phone1.getBrand();

    return 0;
}