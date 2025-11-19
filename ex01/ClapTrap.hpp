#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
		unsigned int	_maxHitPoints;
		static const unsigned int	_energyCost = 1;
	
	public:
		ClapTrap(const std::string&);
		ClapTrap(const std::string&, unsigned int, unsigned int, unsigned int);
		~ClapTrap(void);
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};

#endif
