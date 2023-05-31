/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:48:52 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/27 17:21:44 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal		&Animal::operator=(const Animal &animal)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &animal)
        this->_type = animal._type;
    return (*this);
}

std::string	Animal::getType() const
{
    return (this->_type);
}

void        Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}