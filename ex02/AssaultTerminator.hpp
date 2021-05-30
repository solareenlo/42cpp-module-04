/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 23:13:53 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 23:34:41 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_ASSAULTTERMINATOR_HPP_
#define EX02_ASSAULTTERMINATOR_HPP_

#include <iostream>
#include "ISpaceMarine.hpp"

class   AssaultTerminator : public ISpaceMarine {
 public:
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const& src);
    ~AssaultTerminator();

    AssaultTerminator&  operator=(AssaultTerminator const& right);

    ISpaceMarine*   clone() const;
    void            battleCry() const;
    void            rangedAttack() const;
    void            meleeAttack() const;
};

#endif  // EX02_ASSAULTTERMINATOR_HPP_
