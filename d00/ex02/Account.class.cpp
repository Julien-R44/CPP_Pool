/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 03:43:11 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 04:07:08 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit), _accountIndex(Account::_nbAccounts) {
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->_amount;

	// Display
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void) {
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;

	// Display
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

// Public members //
void	Account::makeDeposit(int deposit) {
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;

	// Display
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;

 	this->_nbDeposits += 1;
	this->_amount += deposit;

}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";

	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return false;
	}

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;

	std::cout << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:";
	std::cout << this->_nbWithdrawals + 1 << std::endl;

	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	return true;
}

int				Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

// Non members //
int		Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[" << __TIMESTAMP__ << "] ";
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
