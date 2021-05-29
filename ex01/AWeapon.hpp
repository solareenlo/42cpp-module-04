/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:26:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 02:21:58 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_AWEAPON_HPP_
#define EX01_AWEAPON_HPP_

#include <iostream>
#include <string>

class   AWeapon {
 public:
    AWeapon(void);
    AWeapon(std::string const& name, int apcost, int damage);
    AWeapon(AWeapon const& src);
    virtual ~AWeapon();

    AWeapon&            operator=(AWeapon const& right);

    std::string const   getName() const;
    int                 getAPCost() const;
    int                 getDamage() const;
    virtual void        attack() const = 0;

 protected:
    void                setName(std::string name);
    void                setApcost(int apcost);
    void                setDamage(int damage);

 private:
    std::string         name_;
    int                 apcost_;
    int                 damage_;
};

#endif  // EX01_AWEAPON_HPP_
