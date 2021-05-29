/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:54:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 00:07:04 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
    std::cout << "Caaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& src) {
    *this = src;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant&    SuperMutant::operator = (SuperMutant const& right) {
    if (this != &right) {
        this->setHP(right.getHP());
        this->setType(right.getType());
    }
    return (*this);
}

void    SuperMutant::takeDamage(int damage) {
    Enemy::takeDamage(damage - 3);
}
