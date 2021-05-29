/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 00:15:28 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 04:03:24 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_RADSCORPION_HPP_
#define EX01_RADSCORPION_HPP_

#include <iostream>
#include <string>
#include "Enemy.hpp"

class   RadScorpion : public Enemy {
 public:
    RadScorpion(void);
    RadScorpion(RadScorpion const& src);
    ~RadScorpion(void);

    RadScorpion&    operator=(RadScorpion const& right);
};

#endif  // EX01_RADSCORPION_HPP_
