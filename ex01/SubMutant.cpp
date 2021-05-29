/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubMutant.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:54:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 04:31:18 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "SubMutant.hpp"

SubMutant::SubMutant(void) : Enemy(20, "Sub Mutant") {
    std::cout << "I was born to kill you!" << std::endl;
}

SubMutant::SubMutant(SubMutant const& src) : Enemy(src) {
    std::cout << "I was born to kill you!" << std::endl;
}

SubMutant::~SubMutant(void) {
    std::cout << "Oh..." << std::endl;
}

SubMutant&    SubMutant::operator=(SubMutant const& right) {
    Enemy::operator=(right);
    return (*this);
}

void    SubMutant::takeDamage(int damage) {
    Enemy::takeDamage(damage - 1);
}
