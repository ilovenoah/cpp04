/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:40:28 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/05/28 11:48:14 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(std::string idea[100]);
        Brain(const Brain &brain);
        ~Brain();
        Brain		&operator=(const Brain &brain);
        std::string	getIdea(size_t i) const;
        void        setIdea(size_t i, std::string idea);
};

#endif