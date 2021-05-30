/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:19:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 23:37:18 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& src) {
    std::cout << "* teleports from space *" << std::endl;
    *this = src;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator&
AssaultTerminator::operator=(AssaultTerminator const& right) {
    (void)right;
    return (*this);
}

ISpaceMarine *  AssaultTerminator::clone() const {
    return(new AssaultTerminator(*this));
}

void    AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void    AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void    AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}
