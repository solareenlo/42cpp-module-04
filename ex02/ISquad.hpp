/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 04:50:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 05:09:29 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_ISQUAD_HPP_
#define EX02_ISQUAD_HPP_

#include "ISpaceMarine.hpp"

class   ISquad {
 public:
    virtual ~ISquad() {}

    virtual int             getCount() const = 0;
    virtual ISpaceMarine*   getUnit(int) const = 0;
    virtual int             push(ISpaceMarine*) = 0;
};

#endif  // EX02_ISQUAD_HPP_
