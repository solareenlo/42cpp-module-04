/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 01:35:18 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 02:03:06 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_ICHARACTER_HPP_
#define EX03_ICHARACTER_HPP_

#include <string>
#include "AMateria.hpp"

class   ICharacter {
 public:
    virtual ~ICharacter() {}
    virtual std::string const&  getName() const = 0;
    virtual void                equip(AMateria* m) = 0;
    virtual void                unequip(int idx) = 0;
    virtual void                use(int idx, ICharacter const& target) = 0;
};

#endif  // EX03_ICHARACTER_HPP_
