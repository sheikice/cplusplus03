#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap
{
	private:
		std::string					_name;
		unsigned int				_hitPoints;
		unsigned int				_energyPoints;
		unsigned int				_attackDamage;
		unsigned int				_maxHitPoints;
		static const unsigned int	_energyCost = 1;
	
	public:
		ClapTrap(void);
		ClapTrap(const std::string&);
		~ClapTrap(void);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};

#endif
