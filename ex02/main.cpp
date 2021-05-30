/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 22:50:14 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 23:07:15 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

int main() {
    ISpaceMarine*   bob = new TacticalMarine;

    ISquad* vlc = new Squad;
    vlc->push(bob);
    for (int i = 0; i < vlc->getCount(); i++) {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    return (0);
}
