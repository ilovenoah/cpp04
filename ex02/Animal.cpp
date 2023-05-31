/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:48:52 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 17:21:44 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal type constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = animal;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal		&AAnimal::operator=(const AAnimal &animal)
{
    std::cout << "AAnimal assignation operator called" << std::endl;
    if (this != &animal)
        this->_type = animal._type;
    return (*this);
}

std::string	AAnimal::getType() const
{
    return (this->_type);
}

void        AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
}