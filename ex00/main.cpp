/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuok <rmatsuok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:48:56 by rmatsuok          #+#    #+#             */
/*   Updated: 2023/06/19 15:19:07 by rmatsuok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = NULL;
    const Animal* j = NULL;
    const Animal* i = NULL;
    const WrongAnimal* wrongmeta = NULL;
    const WrongAnimal* wrongj = NULL;

    try {
        meta = new Animal();
        j = new Dog();
        i = new Cat();
        wrongmeta = new WrongAnimal();
        wrongj = new WrongCat();
    } catch (std::bad_alloc &ba) {
        std::cerr << "Failed to allocate memory: " << ba.what() << std::endl;
        delete meta;
        delete j;
        delete i;
        delete wrongmeta;
        delete wrongj;
        return 1;
    }

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound(); //dog sound
    i->makeSound(); //cat sound
    meta->makeSound(); //animal sound
    std::cout << wrongmeta->getType() << " " << std::endl;
    std::cout << wrongj->getType() << " " << std::endl;
    wrongmeta->makeSound(); //wronganimal sound
    wrongj->makeSound(); //wronganimal sound
    delete j;
    delete i;
    delete meta;
    delete wrongmeta;
    delete wrongj;
    return 0;
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q a.out");
// }