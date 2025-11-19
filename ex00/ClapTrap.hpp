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
		const unsigned int			_maxHitPoints;
		static const unsigned int	_energyCost = 1;
	
	public:
		ClapTrap(const std::string&);
		~ClapTrap(void);
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};

#endif
