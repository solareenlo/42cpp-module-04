/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:48:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 16:53:04 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& src) {
    *this = src;
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle&    PlasmaRifle::operator = (PlasmaRifle const& right) {
    if (this != &right) {
        this->setName(right.getName());
        this->setApcost(right.getAPCost());
        this->setDamage(right.getDamage());
    }
    return (*this);
}

void    PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
