/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 12:41:58 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/07 12:42:03 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"

static int n_index = 0;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
	time_t r;
	struct tm *t;

	time(&r);
	t = localtime(&r);
	std::cout << "[";
	std::cout << std::setfill('0') << std::setw(4) << t->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << t->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << t->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << t->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << t->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << t->tm_sec;
	std::cout << "]";
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	Account::_nbAccounts++;
	_accountIndex = n_index++;
	Account::_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	Account::_totalAmount -= _amount;

	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_totalNbDeposits++;
	_amount += deposit;
	Account::_totalAmount += deposit;

	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "p_mount:" << (_amount - deposit) << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";";
		std::cout << "p_mount:" << _amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	Account::_totalNbWithdrawals++;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	_nbWithdrawals++;

	Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amount:" << (_amount + withdrawal) << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;	
}

int Account::checkAmount(void) const
{
	
}

void Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;

}