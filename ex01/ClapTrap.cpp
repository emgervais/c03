#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hp(10), _Ep(10), _Ad(0)  
{
    std::cout << "constructor" <<std::endl;
}

ClapTrap::ClapTrap()
{
    std::cout << "default constructor" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    this->_Ad = rhs._Ad;
    this->_Hp = rhs._Hp;
    this->_Ep = rhs._Ep;
    this->_Name = rhs._Name;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
    this->_Ad = rhs._Ad;
    this->_Hp = rhs._Hp;
    this->_Ep = rhs._Ep;
    this->_Name = rhs._Name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if(_Ep == 0 || _Hp == 0)
    {
        std::cout << "ClapTrap" << this->_Name << "is out of energy" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Ad << " points of damage!" << std::endl;
    _Ep--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    _Hp -= amount;
    if(_Hp < 0)
        _Hp = 0;
    std::cout << "ClapTrap " << this->_Name << " lost " << amount << " hp now at " << _Hp<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(_Ep == 0 || _Hp == 0)
    {
        std::cout << "ClapTrap" << this->_Name << "is out of energy" << std::endl;
        return ;
    }
    _Ep--;
    _Hp += amount;
    std::cout << "ClapTrap " << this->_Name << " healed " << amount << " hp now at " << _Hp << std::endl;
}