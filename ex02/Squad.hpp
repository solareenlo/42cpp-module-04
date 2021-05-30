/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 05:53:15 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 22:14:20 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_SQUAD_HPP_
#define EX02_SQUAD_HPP_

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class   Squad : public ISquad {
 public:
    Squad(void);
    Squad(Squad const& src);
    ~Squad(void);

    Squad&          operator=(Squad const& right);

    int             getCount(void) const;
    ISpaceMarine*   getUnit(int) const;
    int             push(ISpaceMarine*);

 protected:
    int             getSize(void) const;
    void            setCount(int count);
    void            setSize(int size);
    void            setUnit(ISpaceMarine*);

 private:
    ISpaceMarine**  squad_;
    int             count_;
    int             size_;
    void            reallocateSquad(void);
};

#endif  // EX02_SQUAD_HPP_
