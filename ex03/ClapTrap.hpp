#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	protected:
		static const int _DEFAULT_HP = 10;
		static const int _DEFAULT_EP = 10;
		static const int _DEFAULT_AD = 0;
		static const unsigned int	_energyCost = 1;
		std::string					_name;
		unsigned int				_hitPoints;
		unsigned int				_energyPoints;
		unsigned int				_attackDamage;
		unsigned int				_maxHitPoints;
	
	public:
		ClapTrap(void);
		ClapTrap(const std::string&);
		~ClapTrap(void);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);
		virtual void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);

};

#endif
