/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:46:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/26 21:02:44 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
using std::cout;

Account::Account( int initial_deposit )
{
    this->_nbDeposits = 0;
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "Amount:" << this->_amount << ";created\n";
}

Account::~Account( void )
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "Amount:" << this->_amount << ";closed\n";
}

Account::Account(void)
{
    this->_accountIndex = _nbAccounts;
    this->_amount = 0;
    this->_nbDeposits = 0;
    _nbAccounts++;
}

void	Account::makeDeposit( int deposit )
{
    int p_amount = this->_amount;
    this->_totalAmount += deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    _displayTimestamp();
    cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << "\n";
}
bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->_amount < withdrawal)
    {
        this->_displayTimestamp();
        cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused\n";
        return (false);
    }
    int p_amount = this->_amount;
    this->_totalAmount -= withdrawal;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    this->_totalNbWithdrawals++;
    this->_displayTimestamp();
    cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << ";\n";
    return (true);
}
int		Account::checkAmount( void ) const
{
    _displayTimestamp();
        cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";\n";
    return (this->_amount);
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::_displayTimestamp( void )
{
    time_t now = std::time(NULL);
    struct tm *temp = localtime(&now);
    std::cout << "[" << temp->tm_year + 1900 << temp->tm_mon << temp->tm_mday << "_"  << temp->tm_hour << temp->tm_min << temp->tm_sec << "]";
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}
