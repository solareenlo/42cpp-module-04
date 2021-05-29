/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 02:43:13 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 03:23:16 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) :
    name_("Hikaru Paisen"),
    ap_(max_ap_),
    weapon_(NULL) {
}

Character::Character(std::string const& name) :
    name_(name),
    ap_(max_ap_),
    weapon_(NULL) {
}

Character::Character(Character const& src) {
    *this = src;
}

Character::~Character(void) {
}

Character&  Character::operator=(Character const& right) {
    if (this != &right) {
        this->name_ = right.getName();
        this->ap_ = right.getAP();
        this->weapon_ = right.getWeapon();
    }
    return (*this);
}

std::string const Character::getName(void) const {
    return (this->name_);
}

int Character::getAP(void) const {
    return (this->ap_);
}

AWeapon*  Character::getWeapon(void) const {
    return (this->weapon_);
}

void    Character::recoverAP(void) {
    this->setAP(std::max(max_ap_, this->getAP() + 10));
}

void    Character::equip(AWeapon* weapon) {
    this->setWeapon(weapon);
}

void    Character::attack(Enemy* enemy) {
    if (enemy != NULL && this->getWeapon() != NULL && this->getAP() >= 10) {
        std::cout << this->getName() << " attacks " << enemy->getType();
        std::cout << " with a " << this->getWeapon()->getName() << std::endl;
        this->getWeapon()->attack();
        enemy->takeDamage(this->getWeapon()->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
        this->setAP(this->getAP() - 10);
    }
}

void    Character::setAP(int ap) {
    this->ap_ = ap;
}

void    Character::setWeapon(AWeapon* weapon) {
    this->weapon_ = weapon;
}

std::ostream&   operator<<(std::ostream& ostream, Character& chara) {
    if (chara.getWeapon() == NULL) {
        ostream << chara.getName() << " has " << chara.getAP();
        ostream << " and is unarmed" << std::endl;
    } else {
        ostream << chara.getName() << " has " << chara.getAP();
        ostream << " and wields a ";
        ostream << chara.getWeapon()->getName() << std::endl;
    }
    return (ostream);
}
