/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubMutant.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:51:29 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 04:31:05 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_SUBMUTANT_HPP_
#define EX01_SUBMUTANT_HPP_

#include <iostream>
#include <string>
#include "Enemy.hpp"

class   SubMutant : public Enemy {
 public:
    SubMutant(void);
    SubMutant(SubMutant const& src);
    ~SubMutant(void);

    SubMutant&    operator=(SubMutant const& right);

    void            takeDamage(int damage);
};

#endif  // EX01_SUBMUTANT_HPP_
