/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 04:13:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 05:01:09 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_MATERIASOURCE_HPP_
#define EX03_MATERIASOURCE_HPP_

#include <string>
#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource {
 public:
    MateriaSource();
    MateriaSource(MateriaSource const& src);
    ~MateriaSource();
    MateriaSource&  operator=(MateriaSource const& right);

    void            learnMateria(AMateria*);
    AMateria*       createMateria(std::string const& type);

 private:
    static const int    max_material_ = 4;
    AMateria*           inventory_[max_material_];

    int                 getMaxMaterial_() const;
    void                initInventory_();
    void                deleteInventory_();
};

#endif  // EX03_MATERIASOURCE_HPP_
