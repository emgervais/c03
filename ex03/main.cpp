#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Bob");

    a.attack("robert");
    a.beRepaired(10);
    a.takeDamage(100);
    a.whoAmI();
    return 0;
}