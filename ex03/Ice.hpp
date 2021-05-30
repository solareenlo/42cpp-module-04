/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 02:10:24 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 02:31:31 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_ICE_HPP_
#define EX03_ICE_HPP_

#include <iostream>
#include "AMateria.hpp"

class   Ice : public AMateria {
 public:
    Ice();
    Ice(Ice const& src);
    ~Ice();

    Ice&        operator=(Ice const& right);

    AMateria*   clone() const;
    void        use(ICharacter const& target);
};

#endif  // EX03_ICE_HPP_
