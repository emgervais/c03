#include <iostream>

class ClapTrap {
    protected:
        std::string _Name;
        int _Hp;
        int _Ep;
        int _Ad;
        ClapTrap();
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& rhs);
        ClapTrap& operator=(const ClapTrap& rhs);
        ~ClapTrap();
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};