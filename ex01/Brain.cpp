/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:18:34 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/28 17:41:12 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (size_t i = 0; i < 100; i++)
        this->_ideas[i] = "brain";
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string idea[100])
{
    std::cout << "Brain type constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = idea[i];
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain		&Brain::operator=(const Brain &brain)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &brain)
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = brain._ideas[i];
    return (*this);
}

std::string	Brain::getIdea(size_t i) const
{
    return (this->_ideas[i]);
}

void        Brain::setIdea(size_t i, std::string idea)
{
    this->_ideas[i] = idea;
}
