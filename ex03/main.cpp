/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 05:28:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 15:15:48 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main() {
    {
        std::cout << "<BASIC TEST>" << std::endl;

        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");

        AMateria*   tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);

        delete bob;
        delete me;
        delete src;
        std::cout << std::endl;
    }
	{
        std::cout << "<UNKNOWN TYPE TEST>" << std::endl;

        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        std::cout << "unknown type: " << src->createMateria("test") << std::endl;

        delete src;
        std::cout << std::endl;
	}
	{
        std::cout  << "<CHARACTER COPY TEST>" << std::endl;

        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        Character *a = new Character("A");
        Character *b = new Character("B");
        Character *enemy = new Character("bob");

        a->equip(src->createMateria("ice"));
        a->equip(src->createMateria("cure"));

        *b = *a;

        b->use(0, *enemy);
        b->use(1, *enemy);

        delete src;
        delete a;
        delete b;
        delete enemy;
        std::cout << std::endl;
	}
	{
        std::cout << "<MATERIA COPY>" << std::endl;

        AMateria    *a = new Cure();
        AMateria    *b = new Cure();

        Character c("C");

        a->use(c);
        a->use(c);
        a->use(c);

        *b = *a;

        std::cout << "original XP: " << a->getXP() << std::endl;
        std::cout << "  copied XP: " << b->getXP() << std::endl;

        delete a;
        delete b;
        std::cout << std::endl;
	}
	{
        std::cout << "<UNCREATEMATERIA()>" << std::endl;

        IMateriaSource  *src = new MateriaSource();
        src->learnMateria(new Ice());

        std::cout << "Uncreated: " << src->createMateria("cure") << std::endl;

        delete src;
        std::cout << std::endl;
	}
	{
        std::cout << "<UNEQUIP TEST>" << std::endl;

        Ice         *ice = new Ice();
        Cure        *cure = new Cure();
        Character   *a = new Character("A");

        a->equip(ice);
        a->equip(cure);
        a->unequip(0);

        std::cout << "(should not print ICE)" << std::endl;
        a->use(0, *a);
        a->use(1, *a);

        delete ice;
        delete a;
        std::cout << std::endl;
	}
    {
        std::cout << "<XP TEST>" << std::endl;

        ICharacter* me = new Character("me");
        AMateria*   ice = new Ice();
        AMateria*   cure = new Cure();
        me->equip(ice);
        me->equip(cure);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        std::cout << ice->getXP() << std::endl;
        me->use(0, *bob);
        std::cout << ice->getXP() << std::endl;
        me->use(1, *bob);
        std::cout << cure->getXP() << std::endl;
        me->use(1, *bob);
        std::cout << cure->getXP() << std::endl;

        delete me;
        delete bob;
    }
    return (0);
}
