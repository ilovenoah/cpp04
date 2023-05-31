/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:48:54 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/28 20:28:51 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <new>

class AAnimal {
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal &animal);
        virtual ~AAnimal();

        AAnimal &operator=(const AAnimal &animal);

        std::string getType() const;
        virtual void makeSound() const = 0;
};


#endif