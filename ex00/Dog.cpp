/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:17:11 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/06/19 17:51:51 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog			&Dog::operator=(const Dog &dog)
{
    if (this != &dog)
    {
        std::cout << "Dog assignation operator called" << std::endl;
        this->_type = dog._type;
    }
    else
        std::cout << "Dog assignation operator called with itself" << std::endl;
    return (*this);
}

void        Dog::makeSound() const
{
    std::cout << "wan---" << std::endl;
}