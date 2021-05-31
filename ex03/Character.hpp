/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 02:43:08 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 08:13:13 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_CHARACTER_HPP_
#define EX03_CHARACTER_HPP_

#include <string>
#include "ICharacter.hpp"

class   Character : public ICharacter {
 public:
    Character();
    explicit Character(std::string const& name);
    Character(Character const& src);
    ~Character();
    Character&          operator=(Character const& right);

    std::string const&  getName() const;
    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter const& target);

 private:
    std::string         name_;
    static const int    max_material_ = 4;
    AMateria*           inventory_[max_material_];

    int                 getMaxMaterial() const;
    AMateria*           getMaterial(int idx) const;
    void                initInventory_();
};

#endif  // EX03_CHARACTER_HPP_
