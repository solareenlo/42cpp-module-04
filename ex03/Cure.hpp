/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 02:29:11 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 02:38:00 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_CURE_HPP_
#define EX03_CURE_HPP_

#include <iostream>
#include "AMateria.hpp"

class   Cure : public AMateria {
 public:
    Cure();
    Cure(Cure const& src);
    ~Cure();
    Cure&       operator=(Cure const& right);

    AMateria*   clone() const;
    void        use(ICharacter const& target);
};

#endif  // EX03_CURE_HPP_
