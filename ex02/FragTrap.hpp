#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);
		void	attack(const std::string&);
		void	highFivesGuys(void);
};
