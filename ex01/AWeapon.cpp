/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:20:37 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 02:21:20 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) : name_("Weapon"), apcost_(10), damage_(10) {
}

AWeapon::AWeapon(std::string const& name, int apcost, int damage) {
    this->name_ = name;
    this->apcost_ = apcost;
    this->damage_ = damage;
}

AWeapon::AWeapon(AWeapon const& src) {
    *this = src;
}

AWeapon::~AWeapon() {
}

AWeapon& AWeapon::operator=(AWeapon const& right) {
    if (this != &right) {
        this->setName(right.getName());
        this->setApcost(right.getAPCost());
        this->setDamage(right.getDamage());
    }
    return (*this);
}

std::string const AWeapon::getName(void) const {
    return (this->name_);
}

int AWeapon::getAPCost(void) const {
    return (this->apcost_);
}

int AWeapon::getDamage(void) const {
    return (this->damage_);
}

void    AWeapon::setName(std::string name) {
    this->name_ = name;
}

void    AWeapon::setApcost(int apcost) {
    this->apcost_ = apcost;
}

void    AWeapon::setDamage(int damage) {
    this->damage_ = damage;
}
