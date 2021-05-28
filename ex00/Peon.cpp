/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:53:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 03:04:31 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim() {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const& src) : Victim(src) {
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator = (Peon const& right) {
    Victim::operator = (right);
    std::cout << "Zog zog." << std::endl;
    return (*this);
}

void    Peon::getPolymorphed() const {
    std::cout << this->getName() << " has been turned into a pink pony!";
    std::cout << std::endl;
}

std::ostream& operator << (std::ostream& ostream, Peon const& right) {
    std::string res = "I'm " + right.getName() + " and I like otters!";
    return (ostream << res << std::endl);
}
