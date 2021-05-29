/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 02:32:01 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 03:34:20 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_CHARACTER_HPP_
#define EX01_CHARACTER_HPP_

#include <algorithm>
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class   Character {
 public:
    Character(void);
    explicit Character(std::string const& name);
    Character(Character const& src);
    ~Character(void);

    Character&          operator=(Character const& right);

    std::string const   getName(void) const;
    int                 getAP(void) const;
    AWeapon*            getWeapon() const;
    int                 getMaxAP(void) const;
    int                 getRecoverAP(void) const;

    void                recoverAP(void);
    void                equip(AWeapon*);
    void                attack(Enemy*);

 protected:
    void                setName(std::string name);
    void                setAP(int ap);
    void                setWeapon(AWeapon* weapon);

 private:
    std::string         name_;
    int                 ap_;
    AWeapon             *weapon_;
    Enemy               *enemy_;
    static const int    max_ap_ = 40;
    static const int    recovery_ap_ = 10;
};

std::ostream&   operator<<(std::ostream& ostream, Character& chara);

#endif  // EX01_CHARACTER_HPP_
