#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name):
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0),
	_maxHitPoints(_hitPoints)
{
	std::cout << "\033[1;32m"
		<< _name << " is constructed."
		<< "\033[0m" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[1;31m"
		<< _name << " is destroyed."
		<< "\033[0m" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ClapTrap " << _name
			<< " is dead. It can't attack anymore." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << "ClapTrap " << _name
			<< " don't have enough energy to attack " << target
			<< "." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	std::cout
		<< "ClapTrap " << _name
		<< "\033[1;31m"
		<< " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!"
		<< "\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ClapTrap " << _name << " is already dead." << std::endl;
		return ;
	}
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name
		<< "\033[1;31m"
		<< " takes " << amount
		<< " points of damage!"
		<< "\033[0m" << " (" << _hitPoints << " HP left)."
		<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout
			<< "ClapTrap " << _name
			<< " is dead. It can't be repaired anymore." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << "ClapTrap " << _name
			<<  " don't have enough energy to be repaired." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	if(_hitPoints == _maxHitPoints)
	{
		std::cout << "ClapTrap " << _name << " is already full HP."
			<< std::endl;
	}
	else
	{
		_hitPoints += amount;
		if (_hitPoints > _maxHitPoints)
			_hitPoints = _maxHitPoints;
		std::cout << "ClapTrap " << _name
			<< "\033[1;36m"
			<< " is repaired, restoring " << amount << " hit points."
			<< "\033[0m" << " (" << _hitPoints << " HP left)."
			<< std::endl;
	}
}
