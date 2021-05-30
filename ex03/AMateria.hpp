/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 01:18:09 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 06:08:26 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_AMATERIA_HPP_
#define EX03_AMATERIA_HPP_

#include <string>
#include "ICharacter.hpp"

class   ICharacter;

class   AMateria {
 public:
    AMateria();
    explicit AMateria(std::string const& type);
    AMateria(AMateria const& src);
    virtual ~AMateria();

    AMateria&           operator=(AMateria const& right);

    std::string const&  getType() const;
    unsigned int        getXP() const;

    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter const& targe);

 protected:
    std::string     _type;
    unsigned int    _xp;
    void            _setXP(unsigned int xp);
};

#endif  // EX03_AMATERIA_HPP_
