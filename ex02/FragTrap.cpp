#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->_Name = name;
    this->_Ad = 30;
    this->_Ep = 100;
    this->_Hp = 100;
    std::cout << "Frag constructor" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "Frag destructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
    this->_Ad = rhs._Ad;
    this->_Ep = rhs._Ep;
    this->_Hp = rhs._Hp;
    this->_Name = rhs._Name;
    return *this;
}

FragTrap::FragTrap(const FragTrap& rhs) {
    this->_Ad = rhs._Ad;
    this->_Ep = rhs._Ep;
    this->_Hp = rhs._Hp;
    this->_Name = rhs._Name;
    std::cout << "Frag constructor" << std::endl;
}

void FragTrap:: highFivesGuys(void) {
   std::cout << this->_Name << " is asking a highfive" << std::endl;
}
