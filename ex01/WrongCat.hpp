/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:50:25 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/28 11:48:26 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &wrongcat);
        virtual ~WrongCat();

        WrongCat &operator=(const WrongCat &wrongcat);

        void makeSound() const;
};

#endif