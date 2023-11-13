#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(const ScavTrap& rhs);
        ScavTrap& operator=(const ScavTrap& rhs);
        void guardGate();
        void attack(const std::string& target);
};