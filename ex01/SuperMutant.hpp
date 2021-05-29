/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:51:29 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 02:22:24 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_SUPERMUTANT_HPP_
#define EX01_SUPERMUTANT_HPP_

#include <iostream>
#include <string>
#include "Enemy.hpp"

class   SuperMutant : public Enemy {
 public:
    SuperMutant(void);
    SuperMutant(SuperMutant const& src);
    ~SuperMutant(void);

    SuperMutant&    operator=(SuperMutant const& right);

    void            takeDamage(int damage);
};

#endif  // EX01_SUPERMUTANT_HPP_
