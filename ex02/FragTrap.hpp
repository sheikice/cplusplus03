#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
	public:
		FragTrap(const std::string name);
		~FragTrap(void);
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		void	highFivesGuys(void);
};
