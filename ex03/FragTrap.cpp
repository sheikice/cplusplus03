#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	_hitPoints = _DEFAULT_HP;
	_energyPoints = _DEFAULT_EP;
	_attackDamage = _DEFAULT_AD;
	_maxHitPoints = _DEFAULT_HP;
	std::cout << "\033[1;32m" << "FragTrap "
		<< _name << " is constructed."
		<< "\033[0m" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = _DEFAULT_HP;
	_energyPoints = _DEFAULT_EP;
	_attackDamage = _DEFAULT_AD;
	_maxHitPoints = _DEFAULT_HP;
	std::cout << "\033[1;32m" << "FragTrap "
		<< _name << " is constructed."
		<< "\033[0m" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[1;31m" << "FragTrap "
		<< _name << " is destroyed."
		<< "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	_maxHitPoints = _hitPoints;
	std::cout << "\033[1;32m"
		<< "FragTrap " << other._name << " is constructed by copy."
		<< "\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "\033[1;29m" << "FragTrap " << other._name << " is assigned."
		<< "\033[0m" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		_maxHitPoints = _hitPoints;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "FragTrap " << _name
			<< " is dead. It can't request high fives." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << "FragTrap " << _name
			<<  " don't have enough energy to request high fives." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	std::cout
		<< "FragTrap " << _name
		<< "\033[1;36m"
		<< " request for high fives."
		<< "\033[0m" << std::endl;

}
