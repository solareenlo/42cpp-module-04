/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:36:37 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 18:25:01 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_ENEMY_HPP_
#define EX01_ENEMY_HPP_

#include <algorithm>
#include <iostream>
#include <string>

class   Enemy {
 public:
    Enemy(void);
    Enemy(int hp, std::string const& type);
    Enemy(Enemy const& src);
    virtual ~Enemy(void);

    Enemy&              operator = (Enemy const& right);

    int                 getHP(void) const;
    std::string const   getType(void) const;
    virtual void        takeDamage(int);

 protected:
    void                setHP(int hp);
    void                setType(std::string const& type);

 private:
    int                 hp_;
    std::string         type_;
};

#endif  // EX01_ENEMY_HPP_
