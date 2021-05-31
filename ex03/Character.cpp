/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 02:54:53 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 14:38:32 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name_("Guts") {
    this->initInventory_();
}

Character::Character(std::string const& name) : name_(name) {
    this->initInventory_();
}

Character::Character(Character const& src) {
    if (this != &src) {
        this->name_ = src.getName();
        this->initInventory_();
        this->operator=(src);
    }
}

Character::~Character() {
    for (int i = 0; i < this->getMaxMaterial(); i++)
        delete this->inventory_[i];
}

Character&  Character::operator=(Character const& right) {
    if (this != &right) {
        this->name_ = right.getName();
        this->initInventory_();
        for (int i = 0; i < this->getMaxMaterial(); i++)
            if (right.inventory_[i])
                this->inventory_[i] = right.inventory_[i]->clone();
    }
    return (*this);
}

std::string const&  Character::getName() const {
    return (this->name_);
}

void    Character::equip(AMateria* m) {
    for (int i = 0; i < this->getMaxMaterial(); i++) {
        if (this->inventory_[i] == NULL) {
            this->inventory_[i] = m;
            break;
        }
    }
}

void    Character::unequip(int idx) {
    if (idx < 0 || this->getMaxMaterial() <= idx)
        return;
    this->inventory_[idx] = NULL;
}

void    Character::use(int idx, ICharacter const& target) {
    if (this->getMaterial(idx) != NULL)
        this->getMaterial(idx)->use(target);
}

int Character::getMaxMaterial() const {
    return (this->max_material_);
}

AMateria*   Character::getMaterial(int idx) const {
    if (idx < 0 || this->getMaxMaterial() <= idx)
        return (NULL);
    return (this->inventory_[idx]);
}

void    Character::initInventory_() {
    for (int i = 0; i < this->getMaxMaterial(); i++)
        this->inventory_[i] = NULL;
}
