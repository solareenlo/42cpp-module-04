/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:42:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 10:50:33 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_PLASMARIFLE_HPP_
#define EX01_PLASMARIFLE_HPP_

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class   PlasmaRifle : public AWeapon {
    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle const& src);
    ~PlasmaRifle();

    PlasmaRifle&    operator = (PlasmaRifle const& right);

    void            attack() const;
};

#endif  // EX01_PLASMARIFLE_HPP_
