/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 00:21:59 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 02:23:30 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
    std::cout << "click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& src) : Enemy(src) {
    std::cout << "click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&    RadScorpion::operator=(RadScorpion const& right) {
    Enemy::operator=(right);
    return (*this);
}
