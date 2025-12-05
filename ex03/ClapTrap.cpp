#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): _name("nameless")
{
	_hitPoints = _DEFAULT_HP;
	_energyPoints = _DEFAULT_EP;
	_attackDamage = _DEFAULT_AD;
	_maxHitPoints = _DEFAULT_HP;
	std::cout << "\033[1;32m" << "ClapTrap "
		<< _name << " is constructed."
		<< "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name)
{
	_hitPoints = _DEFAULT_HP;
	_energyPoints = _DEFAULT_EP;
	_attackDamage = _DEFAULT_AD;
	_maxHitPoints = _DEFAULT_HP;
	std::cout << "\033[1;32m"
		<< "ClapTrap " << _name << " is constructed."
		<< "\033[0m" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[1;31m"
		<< "ClapTrap " << _name << " is destroyed."
		<< "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): _name(other._name),
	_hitPoints(other._hitPoints), _energyPoints(other._energyPoints),
	_attackDamage(other._attackDamage), _maxHitPoints(_hitPoints)
{
	std::cout << "\033[1;32m"
		<< "ClapTrap " << other._name << " is constructed by copy."
		<< "\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "\033[1;29m" << "ClapTrap " << other._name << " is assigned."
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
			<< _name << " is already dead." << std::endl;
		return ;
	}
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << _name
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
			<< _name
			<< " is dead. It can't be repaired anymore." << std::endl;
		return ;
	}
	if (_energyPoints < _energyCost)
	{
		std::cout << _name
			<<  " don't have enough energy to be repaired." << std::endl;
		return ;
	}
	_energyPoints -= _energyCost;
	if(_hitPoints == _maxHitPoints)
	{
		std::cout << _name << " is already full HP."
			<< std::endl;
	}
	else
	{
		_hitPoints += amount;
		if (_hitPoints > _maxHitPoints)
			_hitPoints = _maxHitPoints;
		std::cout << _name
			<< "\033[1;36m"
			<< " is repaired, restoring " << amount << " hit points."
			<< "\033[0m" << " (" << _hitPoints << " HP left)."
			<< std::endl;
	}
}
