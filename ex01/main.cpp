/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 03:24:07 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 04:38:45 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Beam.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "SubMutant.hpp"

int main(void) {
    Character*  me = new Character("me");

    std::cout << *me;

    Enemy*  b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;

    me->equip(pr);
    std::cout << *me;

    me->attack(b);
    std::cout << *me;

    me->attack(b);
    std::cout << *me;

    std::cout << std::endl;
    std::cout << "More test!" << std::endl;

    AWeapon* be = new Beam();
    me->equip(be);
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;

    Enemy* c = new SubMutant();

    me->attack(c);
    std::cout << *me;
    return (0);
}
