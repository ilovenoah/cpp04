/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:17:13 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/28 20:30:47 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &dog);
        virtual ~Dog();

        Dog			&operator=(const Dog &dog);

        virtual void	makeSound() const;
};

#endif
