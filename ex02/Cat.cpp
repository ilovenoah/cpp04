/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:17:06 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/28 20:30:27 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    _brain = new(std::nothrow) Brain();
    if (!_brain){
        std::cerr << "Failed to allocate memory" << std::endl;
        std::exit(1);
    }
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : AAnimal(type)
{
    _brain = new(std::nothrow) Brain();
    if (!_brain){
        std::cerr << "Failed to allocate memory" << std::endl;
        std::exit(1);
    }
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    _brain = new(std::nothrow) Brain();
    if (!_brain){
        std::cerr << "Failed to allocate memory" << std::endl;
        std::exit(1);
    }
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat			&Cat::operator=(const Cat &cat)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &cat)
        this->_type = cat._type;
    if (_brain)
        delete _brain;
    _brain = new(std::nothrow) Brain();
    if (!_brain){
        std::cerr << "Failed to allocate memory" << std::endl;
        std::exit(1);
    }
    return (*this);
}

void        Cat::makeSound() const
{
    std::cout << "nya---" << std::endl;
}
