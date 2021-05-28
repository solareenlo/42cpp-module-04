/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 01:53:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 02:23:13 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : name_("Vic") {
    std::cout << "Some random victim called " << name_;
    std::cout << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : name_(name) {
    std::cout << "Some random victim called " << name_;
    std::cout << " just appeared!" << std::endl;
}

Victim::Victim(Victim const& src) {
    *this = src;
}

Victim::~Victim(void) {
    std::cout << "Victim " << name_ << " just died for no apparent reason!";
    std::cout << std::endl;
}

Victim& Victim::operator = (Victim const& right) {
    if (this != &right) {
        this->setName(right.getName());
    }
    return (*this);
}

std::string Victim::getName(void) const {
    return (this->name_);
}

void    Victim::getPolymorphed() const {
    std::cout << this->getName();
    std::cout << " has been truend into a cute little sheep!" << std::endl;
}

void    Victim::setName(std::string name) {
    this->name_ = name;
}

std::ostream& operator << (std::ostream& ostream, Victim& right) {
    std::string res = "I'm " + right.getName() + " and I like otters!";
    return (ostream << res << std::endl);
}
