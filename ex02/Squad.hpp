/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 05:53:15 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 04:54:57 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_SQUAD_HPP_
#define EX02_SQUAD_HPP_

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class   Squad : public ISquad {
 public:
    Squad();
    Squad(Squad const& src);
    ~Squad();

    Squad&          operator=(Squad const& right);

    int             getCount() const;
    ISpaceMarine*   getUnit(int) const;
    int             push(ISpaceMarine*);

 protected:
    int             getSize() const;
    void            setCount(int count);
    void            setSize(int size);
    void            setUnit(ISpaceMarine*);

 private:
    ISpaceMarine**      squad_;
    int                 count_;
    int                 size_;
    static const int    init_size_ = 2;

    void                reallocateSquad();
    int                 getInitSize() const;
};

#endif  // EX02_SQUAD_HPP_
