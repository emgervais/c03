#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_Name = name;
    this->_Ad = 20;
    this->_Ep = 50;
    this->_Hp = 100;
    std::cout << "scav constructor" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "scav destructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    this->_Ad = rhs._Ad;
    this->_Ep = rhs._Ep;
    this->_Hp = rhs._Hp;
    this->_Name = rhs._Name;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs._Name){
    this->_Ad = rhs._Ad;
    this->_Ep = rhs._Ep;
    this->_Hp = rhs._Hp;
    this->_Name = rhs._Name;
    std::cout << "scav constructor" << std::endl;
}

void ScavTrap::guardGate() {
   std::cout << this->_Name << " entered Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if(_Ep == 0 || _Hp == 0)
    {
        std::cout << "ScavTrap" << this->_Name << "is out of energy" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Ad << " points of damage!" << std::endl;
    _Ep--;
}