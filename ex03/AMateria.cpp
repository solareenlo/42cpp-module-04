/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 01:47:36 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 08:16:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type(""), _xp(0) {
}

AMateria::AMateria(std::string const& type) : _type(type), _xp(0) {
}

AMateria::AMateria(AMateria const& src) {
    *this = src;
}

AMateria::~AMateria() {
}

AMateria&   AMateria::operator=(AMateria const& right) {
    if (this != &right) {
        this->_type = right.getType();
        this->_xp = right.getXP();
    }
    return (*this);
}

std::string const& AMateria::getType() const {
    return (this->_type);
}

unsigned int    AMateria::getXP() const {
    return (this->_xp);
}

void    AMateria::use(ICharacter const& target) {
    (void)target;
    this->_setXP(this->getXP() + 10);
}

void    AMateria::_setXP(unsigned int xp) {
    this->_xp = xp;
}
