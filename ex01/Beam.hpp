/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Beam.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:55:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 04:24:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_BEAM_HPP_
#define EX01_BEAM_HPP_

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class   Beam : public AWeapon {
 public:
    Beam(void);
    Beam(Beam const &src);
    ~Beam(void);

    Beam&  operator=(Beam const& right);

    void        attack() const;
};

#endif  // EX01_BEAM_HPP_
