/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:57:39 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 20:58:58 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat type constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongcat;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this != &wrongcat)
        this->_type = wrongcat._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}