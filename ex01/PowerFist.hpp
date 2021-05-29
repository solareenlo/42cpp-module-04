/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:55:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 02:21:28 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_POWERFIST_HPP_
#define EX01_POWERFIST_HPP_

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class   PowerFist : public AWeapon {
 public:
    PowerFist(void);
    PowerFist(PowerFist const &src);
    ~PowerFist(void);

    PowerFist&  operator=(PowerFist const& right);

    void        attack() const;
};

#endif  // EX01_POWERFIST_HPP_
