/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:00:34 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 18:28:23 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) : type_("Enemy"), hp_(100) {
}

Enemy::Enemy(int hp, std::string const& type) : hp_(hp), type_(type) {
}

Enemy::Enemy(Enemy const& src) {
    *this = src;
}

Enemy::~Enemy(void) {
}

Enemy&  Enemy::operator = (Enemy const& src) {
    if (this != &src) {
        this->hp_ = src.getHP();
        this->type_ = src.getType();
    }
    return (*this);
}

int Enemy::getHP(void) const {
    return (this->hp_);
}

std::string const   Enemy::getType(void) const {
    return (this->type_);
}

void    Enemy::takeDamage(int damage) {
    this->setHP(this->getHP() - damage);
    this->setHP(std::max(this->hp_, 0));
}

void    Enemy::setHP(int hp) {
    this->hp_ = hp;
}

void    Enemy::setType(std::string const& type) {
    this->type_ = type;
}
