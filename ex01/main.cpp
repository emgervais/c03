#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Bob");

    a.attack("robert");
    a.beRepaired(10);
    a.takeDamage(100);
    a.guardGate();
    return 0;
}