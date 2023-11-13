#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap( name ), ScavTrap( name )
{
    this->_Name = name;
    this->ClapTrap::_Name =  name + "_clap_name";

    FragTrap::_Hp = 100;
    ScavTrap::_Ep = 50;
    FragTrap::_Ad = 30;

    std::cout << "Diamond constructor" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "Diamond destructor" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "Diamond name :" << this->_Name << " clap name : " << ClapTrap::_Name << std::endl;
}