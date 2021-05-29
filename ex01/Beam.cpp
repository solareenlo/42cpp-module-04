/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Beam.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:00:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 04:38:39 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Beam.hpp"

Beam::Beam(void) : AWeapon("Beam", 40, 9999) {
}

Beam::Beam(Beam const& src) {
    *this = src;
}

Beam::~Beam(void) {
}

Beam&  Beam::operator=(Beam const& right) {
    AWeapon::operator=(right);
    return (*this);
}

void    Beam::attack() const {
    std::cout << "* beeeeeeeeeam!" << std::endl;
}
