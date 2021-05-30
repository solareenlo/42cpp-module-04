/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 06:39:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 20:15:26 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : squad_(NULL), count_(0), size_(0) {
}

Squad::Squad(Squad const& src) {
    *this = src;
}

Squad::~Squad(void) {
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
    }
    return (*this);
}

int Squad::getCount(void) const {
    return (this->count_);
}

ISpaceMarine*   Squad::getUnit(int i) const {
    if (i < 0 || this->getCount() < i)
        return (NULL);
    return (this->squad_[i]);
}

int Squad::getSize(void) const {
    return (this->size_);
}
