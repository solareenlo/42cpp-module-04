/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 05:17:08 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 22:49:20 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_TACTICALMARINE_HPP_
#define EX02_TACTICALMARINE_HPP_

#include <iostream>
#include "ISpaceMarine.hpp"

class   TacticalMarine : public ISpaceMarine {
 public:
    TacticalMarine();
    TacticalMarine(TacticalMarine const& src);
    ~TacticalMarine();

    TacticalMarine& operator=(TacticalMarine const& right);

    ISpaceMarine*   clone() const;
    void            battleCry() const;
    void            rangedAttack() const;
    void            meleeAttack() const;
};

#endif  // EX02_TACTICALMARINE_HPP_
