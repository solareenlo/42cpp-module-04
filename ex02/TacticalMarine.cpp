/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 05:27:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 05:47:25 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const& src) {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = src;
}

TacticalMarine::~TacticalMarine(void) {
    std::cout << "Aargh..." << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const& right) {
    (void)right;
    return (*this);
}

ISpaceMarine*   TacticalMarine::clone() const {
    return  (new TacticalMarine(*this));
}

void    TacticalMarine::battleCry(void) const {
    std::cout << "For the Holy PLOT!" << std::endl;
}

void    TacticalMarine::rangedAttack(void) const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void    TacticalMarine::meleeAttack(void) const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}
