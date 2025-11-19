#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
	public:
		ScavTrap(const std::string name);
		~ScavTrap(void);
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		void	guardGate(void);
};
