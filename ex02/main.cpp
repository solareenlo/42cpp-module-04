/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 22:50:14 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 00:14:33 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
    ISpaceMarine*   bob = new TacticalMarine;
    ISpaceMarine*   jim = new AssaultTerminator;
    ISpaceMarine*   copy1 = bob->clone();

    ISquad* vlc = new Squad;
    vlc->push(copy1);
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(bob);
    vlc->push(copy1->clone());
    vlc->push(copy1->clone());
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); i++) {
        ISpaceMarine* cur = vlc->getUnit(i);
        if (cur != NULL) {
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
    }
    std::cout << "Null is expected" << std::endl;
    ISpaceMarine* cur = vlc->getUnit(vlc->getCount() + 1);
    if (cur != NULL) {
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    } else {
        std::cout << "cur is NULL." << std::endl;
    }
    delete vlc;
    return (0);
}
