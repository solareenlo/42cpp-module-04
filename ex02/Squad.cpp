/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 06:39:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 00:06:58 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : squad_(NULL), count_(0), size_(0) {
}

Squad::Squad(Squad const& src) {
    *this = src;
}

Squad::~Squad() {
    if (this->squad_) {
        for (int i = 0; i < this->count_; i++)
            delete this->getUnit(i);
        delete[] this->squad_;
    }
}

Squad&  Squad::operator=(Squad const& right) {
    if (this != &right) {
        for (int i = 0; i < this->count_; i++)
            delete this->getUnit(i);
        delete[] this->squad_;
        this->count_ = right.getCount();
        this->size_ = right.getSize();
        this->squad_ = new ISpaceMarine*[this->size_];
        for (int i = 0; i < count_; i++)
            squad_[i] = right.getUnit(i)->clone();
    }
    return (*this);
}

int Squad::getCount() const {
    return (this->count_);
}

ISpaceMarine*   Squad::getUnit(int i) const {
    if (i < 0 || this->getCount() < i)
        return (NULL);
    return (this->squad_[i]);
}

int Squad::push(ISpaceMarine* marine) {
    if (marine == NULL)
        return (this->getCount());

    int     count = this->getCount();
    bool    is_exist = false;
    int     pos;
    for (pos = 0; pos < count; pos++) {
        if (this->getUnit(pos) == marine) {
            is_exist = true;
            break;
        }
    }
    if (is_exist == false) {
        this->setUnit(marine);
    } else {
        this->reallocateSquad();
        ISpaceMarine    **newSquad = new ISpaceMarine*[this->getSize()];
        for (int i = 0; i < pos; i++)
            newSquad[i] = this->getUnit(i);
        for (int i = pos + 1; i < this->getCount(); i ++)
            newSquad[i - 1] = this->getUnit(i);
        newSquad[this->getCount() - 1] = marine;
        delete [] this->squad_;
        this->squad_ = newSquad;
    }

    return (this->getCount());
}

int Squad::getSize() const {
    return (this->size_);
}

void    Squad::setCount(int count) {
    this->count_ = count;
}

void    Squad::setSize(int size) {
    this->size_ = size;
}

void    Squad::setUnit(ISpaceMarine* marine) {
    if (marine == NULL)
        return;

    this->reallocateSquad();

    int count = this->getCount();
    this->squad_[count] = marine;
    this->setCount(++count);
}

void    Squad::reallocateSquad() {
    int count = this->getCount();
    int size = this->getSize();
    if (count == size) {
        if (size == 0)
            size = this->getInitSize();
        this->setSize(size * 2);
        ISpaceMarine    **newSquad = new ISpaceMarine*[this->getSize()];
        for (int i = 0; i < count; i++)
            newSquad[i] = this->getUnit(i);
        delete [] this->squad_;
        this->squad_ = newSquad;
    }
}

int Squad::getInitSize() {
    return (this->init_size_);
}
