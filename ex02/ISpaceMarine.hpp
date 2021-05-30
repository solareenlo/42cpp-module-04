/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 04:54:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/30 23:10:35 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_ISPACEMARINE_HPP_
#define EX02_ISPACEMARINE_HPP_

class   ISpaceMarine {
 public:
    virtual ~ISpaceMarine() {}

    virtual ISpaceMarine*   clone() const = 0;
    virtual void            battleCry() const = 0;
    virtual void            rangedAttack() const = 0;
    virtual void            meleeAttack() const = 0;
};

#endif  // EX02_ISPACEMARINE_HPP_
