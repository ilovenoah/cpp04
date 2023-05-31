/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:17:08 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/28 20:30:34 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &cat);
        virtual ~Cat();

        Cat &operator=(const Cat &cat);
        virtual void makeSound() const;
};

#endif