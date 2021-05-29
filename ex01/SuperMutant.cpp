/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:54:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 02:27:14 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
    std::cout << "Caaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& src) : Enemy(src) {
    std::cout << "Caaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant&    SuperMutant::operator=(SuperMutant const& right) {
    Enemy::operator=(right);
    return (*this);
}

void    SuperMutant::takeDamage(int damage) {
    Enemy::takeDamage(damage - 3);
}
