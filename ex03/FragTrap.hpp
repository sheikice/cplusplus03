#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		static const int _DEFAULT_HP = 100;
		static const int _DEFAULT_EP = 100;
		static const int _DEFAULT_AD = 30;

	public:
		FragTrap(void);
		FragTrap(const std::string&);
		~FragTrap(void);
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);
		virtual void	attack(const std::string&);
		void	highFivesGuys(void);
};

#endif
