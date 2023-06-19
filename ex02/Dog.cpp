/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:17:11 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/06/19 17:49:51 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    _brain = new(std::nothrow) Brain();
    if (!_brain){
        std::cerr << "Memory allocation failed" << std::endl;
        std::exit(1);
    }
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : AAnimal(type)
{
    _brain = new(std::nothrow) Brain();
    if (!_brain){
        std::cerr << "Memory allocation failed" << std::endl;
        std::exit(1);
    }
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    _brain = new(std::nothrow) Brain();
    if (!_brain){
        std::cerr << "Memory allocation failed" << std::endl;
        std::exit(1);
    }
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    if (this != &dog)
    {
        std::cout << "Dog assignation operator called" << std::endl;
        this->_type = dog._type;

        if (_brain)
            delete _brain;

        _brain = new(std::nothrow) Brain(*(dog._brain));
        if (!_brain)
        {
            std::cerr << "Memory allocation failed" << std::endl;
            std::exit(1);
        }
    }
    else
        std::cout << "Self assignment" << std::endl;
    return (*this);
}

void        Dog::makeSound() const
{
    std::cout << "wan---" << std::endl;
}