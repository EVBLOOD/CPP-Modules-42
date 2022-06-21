/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakllam <sakllam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:46:05 by sakllam           #+#    #+#             */
/*   Updated: 2022/06/21 12:07:55 by sakllam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    this->getNbDeposits = 1;
    this->_accountIndex++; // not correct
    std::cout << "index:" << this->_accountIndex << ";" << "Amount:" << this->_amount << ";created";
}

Account::~Account( void )
{
    std::cout << "index:" << this->_accountIndex << ";" << "Amount:" << this->_amount << ";closed";
}

Account::Account(void)
{
    
}

static void	Account::_displayTimestamp( void )
{
    std::cout << "[" << std::time(nullptr) << "]" ;
}

static int	Account::getNbAccounts( void )
{
    return (this._nbAccounts);
}
static int	Account::getTotalAmount( void )
{
    return (this._totalAmount);
}
static int	getNbDeposits( void )
{
    return (this._nbDeposits);
}
static int	getNbWithdrawals( void )
{
    return (this._nbWithdrawals);
}

// static void	displayAccountsInfos( void )
// {
//     // std::cout << this._accountIndex << ";" << "amount:" << this._amount << ";" <<
// }