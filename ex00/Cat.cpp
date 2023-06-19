/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:17:06 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/06/19 17:50:45 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat			&Cat::operator=(const Cat &cat)
{
    if (this != &cat) {
        std::cout << "Cat assignation operator called" << std::endl;
        this->_type = cat._type;
    }
    else
        std::cout << "Cat assignation operator called with itself" << std::endl;
    return (*this);
}

void        Cat::makeSound() const
{
    std::cout << "nya---" << std::endl;
}