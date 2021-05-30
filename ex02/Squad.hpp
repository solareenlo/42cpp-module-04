/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 05:53:15 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 20:07:39 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_SQUAD_HPP_
#define EX02_SQUAD_HPP_

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class   Squad {
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

 private:
    ISpaceMarine**  squad_;
    int             count_;
    int             size_;
};

#endif  // EX02_SQUAD_HPP_
