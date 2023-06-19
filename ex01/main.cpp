/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:48:56 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/06/19 15:22:01 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    Animal* animals[4];

    for (size_t i = 0; i < 2; i++) {
        animals[i] = new(std::nothrow) Dog();
        if (!animals[i]){
            std::cout << "Error: memory allocation failed" << std::endl;
            std::exit(1);
        }
    }
    for (size_t i = 2; i < 4; i++) {
        animals[i] = new(std::nothrow) Cat();
        if (!animals[i]){
            std::cout << "Error: memory allocation failed" << std::endl;
            std::exit(1);
        }
    }
    for (size_t i = 0; i < 4; i++) {
        delete animals[i];
    }
    return 0;
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q a.out");
// }