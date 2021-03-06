/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 00:46:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 05:17:19 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Wara.hpp"

int main() {
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");
    Wara test("test");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    jim.getPolymorphed();
    robert.polymorph(joe);
    joe.getPolymorphed();
    robert.polymorph(test);
    test.getPolymorphed();
    return (0);
}
