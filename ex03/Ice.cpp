/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 02:17:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 02:27:18 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const& src) : AMateria(src) {
}

Ice::~Ice() {
}

Ice&    Ice::operator=(Ice const& right) {
    AMateria::operator=(right);
    return (*this);
}

AMateria*   Ice::clone() const {
    return (new Ice(*this));
}

void    Ice::use(ICharacter const& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
    AMateria::use(target);
}
