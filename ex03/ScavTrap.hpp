#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		static const int _DEFAULT_HP = 100;
		static const int _DEFAULT_EP = 50;
		static const int _DEFAULT_AD = 20;

	public:
		ScavTrap(void);
		ScavTrap(const std::string&);
		~ScavTrap(void);
		ScavTrap(const ScavTrap&);
		ScavTrap& operator=(const ScavTrap&);
		virtual void	attack(const std::string&);
		void	guardGate(void);
};

#endif
