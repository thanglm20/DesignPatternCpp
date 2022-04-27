
#include <iostream>
#include <vector>
#include "UserFactory.hpp"

int main()
{
    std::cout << "Method Factory Pattern Design" << std::endl;

    std::vector<UserFactory*> vehicles;
    for(int i = 1; i <= 10; ++i)
    {
        if(i % 2 == 1 && i <= 5)
            vehicles.push_back(new UserFactory(VehicleType::Car, 1, "Toyota", "Japan"));
        else if(i % 2 == 0 && i <= 5)
            vehicles.push_back(new UserFactory(VehicleType::AirPlane, 2, "Boing", "American"));
        else
            vehicles.push_back(new UserFactory(VehicleType::Train, 3, "Unknown", "Unknown"));
    }
    for(auto v : vehicles)
        v->show();
    return 0;
}