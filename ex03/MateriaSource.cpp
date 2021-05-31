/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:34:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 14:43:08 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    this->initInventory_();
}

MateriaSource::MateriaSource(MateriaSource const& src) {
    this->initInventory_();
    this->operator=(src);
}

MateriaSource::~MateriaSource() {
    this->deleteInventory_();
}

MateriaSource&  MateriaSource::operator=(MateriaSource const& right) {
    if (this != &right) {
        this->deleteInventory_();
        for (int i = 0; i < this->getMaxMaterial_(); i++)
            if (right.inventory_[i])
                this->inventory_[i] = right.inventory_[i]->clone();
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* material) {
    for (int i = 0; i < this->getMaxMaterial_(); i++) {
        if (this->inventory_[i] == NULL) {
            this->inventory_[i] = material;
            break;
        }
    }
}

AMateria*   MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < this->getMaxMaterial_(); i++) {
        if (this->inventory_[i]  && this->inventory_[i]->getType() == type)
            return (this->inventory_[i]->clone());
    }
    return (NULL);
}

int MateriaSource::getMaxMaterial_() const {
    return (this->max_material_);
}

void    MateriaSource::initInventory_() {
    for (int i = 0; i < this->getMaxMaterial_(); i++)
        this->inventory_[i] = NULL;
}

void    MateriaSource::deleteInventory_() {
    for (int i = 0; i < this->getMaxMaterial_(); i++)
        delete this->inventory_[i];
}
