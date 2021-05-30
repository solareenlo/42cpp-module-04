/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 02:32:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 02:38:30 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const& src) : AMateria(src) {
}

Cure::~Cure() {
}

Cure&   Cure::operator=(Cure const& right) {
    AMateria::operator=(right);
    return (*this);
}

AMateria*   Cure::clone() const {
    return (new Cure(*this));
}

void    Cure::use(ICharacter const& target) {
    std::cout << "* heals " << target.getName() << "’s wounds" << std::endl;
    AMateria::use(target);
}
