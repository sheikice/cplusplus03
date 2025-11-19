#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30)
{
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

void	FragTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "FragTrap " << _name
			<< " is dead. It can't attack anymore." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << "FragTrap " << _name
			<< " don't have enough energy to attack " << target
			<< "." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	std::cout
		<< "FragTrap " << _name
		<< "\033[1;31m"
		<< " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!"
		<< "\033[0m" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "FragTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "FragTrap " << _name
		<< "\033[1;31m"
		<< " takes " << amount
		<< " points of damage!"
		<< "\033[0m" << " (" << _hitPoints << " HP left)."
		<< std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "FragTrap " << _name
			<< " is dead. It can't be repaired anymore." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << "FragTrap " << _name
			<<  " don't have enough energy to be repaired." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	if(_hitPoints == _maxHitPoints)
	{
		std::cout << "FragTrap " << _name << " is already full HP."
			<< std::endl;
	}
	else
	{
		_hitPoints += amount;
		if (_hitPoints > _maxHitPoints)
			_hitPoints = _maxHitPoints;
		std::cout << "FragTrap " << _name
			<< "\033[1;36m"
			<< " is repaired, restoring " << amount << " hit points."
			<< "\033[0m" << " (" << _hitPoints << " HP left)."
			<< std::endl;
	}
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
