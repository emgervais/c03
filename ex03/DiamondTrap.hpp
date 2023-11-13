#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _Name;
    public :
        DiamondTrap(std::string name);
        ~DiamondTrap();
        using ScavTrap::attack;
        void whoAmI();
};