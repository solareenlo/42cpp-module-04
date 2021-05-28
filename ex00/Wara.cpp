/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wara.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:53:56 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 05:18:21 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Wara.hpp"

Wara::Wara(void) : Victim() {
    std::cout << "Wara wara." << std::endl;
}

Wara::Wara(std::string name) : Victim(name) {
    std::cout << "Wara wara." << std::endl;
}

Wara::Wara(Wara const& src) : Victim(src) {
    std::cout << "Wara wara." << std::endl;
}

Wara::~Wara(void) {
    std::cout << "Paon..." << std::endl;
}

Wara& Wara::operator = (Wara const& right) {
    Victim::operator = (right);
    std::cout << "Wara wara." << std::endl;
    return (*this);
}

void    Wara::getPolymorphed() const {
    std::cout << this->getName() << " has been turned into a blue elephant!";
    std::cout << std::endl;
}

std::ostream& operator << (std::ostream& ostream, Wara const& right) {
    std::string res = "I'm " + right.getName() + " and I like otters!";
    return (ostream << res << std::endl);
}
