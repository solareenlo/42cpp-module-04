/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:00:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 02:25:41 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(PowerFist const& src) {
    *this = src;
}

PowerFist::~PowerFist(void) {
}

PowerFist&  PowerFist::operator=(PowerFist const& right) {
    AWeapon::operator=(right);
    return (*this);
}

void    PowerFist::attack() const {
    std::cout << "* pschhh... SBAM!" << std::endl;
}
