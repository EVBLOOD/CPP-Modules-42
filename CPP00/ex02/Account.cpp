/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:46:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/22 15:46:26 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 1;
    this->_accountIndex++;
    _totalNbDeposits++;
    _totalAmount += initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";" << "Amount:" << this->_amount << ";created";
}

Account::~Account( void )
{
    std::cout << "index:" << this->_accountIndex << ";" << "Amount:" << this->_amount << ";closed";
}

Account::Account(void)
{
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_accountIndex = 0;
    _totalNbDeposits = 0;
    _totalAmount = 0;
}

void	Account::makeDeposit( int deposit )
{
    this->_totalAmount += deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->_amount < withdrawal && this->_totalAmount < withdrawal)
    {
        //message 
        return (false);
    }
    this->_totalAmount -= withdrawal;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    this->_totalNbWithdrawals++;
    //message;
    return (true);
}
int		Account::checkAmount( void ) const
{
    //message
    return (this->_amount);
}
void	Account::displayStatus( void ) const
{
    
}

void	Account::_displayTimestamp( void )
{
    time_t now = std::time(nullptr);
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

// static void	displayAccountsInfos( void )
// {
//     // std::cout << this._accountIndex << ";" << "amount:" << this._amount << ";" <<
// }