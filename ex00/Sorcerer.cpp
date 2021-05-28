/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 00:51:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 02:45:52 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : name_("Gandalf"), title_("the Grey") {
    std::cout << name_ << ", " << title_ << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
    : name_(name), title_(title) {
    std::cout << name_ << ", " << title_ << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& src) {
    *this = src;
}

Sorcerer::~Sorcerer(void) {
    std::cout << name_ << "," << title_ << ", is dead.";
    std::cout << " Consequences will never be the same!" << std::endl;
}

Sorcerer&   Sorcerer::operator = (Sorcerer const& right) {
    if (this != &right) {
        this->setName(right.getName());
        this->setTitle(right.getTitle());
    }
    return (*this);
}

std::string Sorcerer::getName(void) const {
    return (this->name_);
}

std::string Sorcerer::getTitle(void) const {
    return (this->title_);
}

void    Sorcerer::polymorph(Victim const& vic) const {
    vic.getPolymorphed();
}

void    Sorcerer::setName(std::string name) {
    this->name_ = name;
}

void    Sorcerer::setTitle(std::string title) {
    this->title_ = title;
}

std::ostream& operator << (std::ostream& ostream, Sorcerer& right) {
    std::string res = "I am " + right.getName() + ", " + right.getTitle();
    res += ", and I like ponies!";
    return (ostream << res << std::endl);
}
