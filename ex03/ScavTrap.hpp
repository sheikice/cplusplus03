#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap&);
		ScavTrap& operator=(const ScavTrap&);
		virtual void	attack(const std::string&);
		void	guardGate(void);
};
