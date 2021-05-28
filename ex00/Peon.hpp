/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:49:07 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 03:02:35 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_PEON_HPP_
#define EX00_PEON_HPP_

#include <iostream>
#include <string>
#include "Victim.hpp"

class   Peon : public Victim {
 public:
    Peon(void);
    explicit Peon(std::string name);
    Peon(Peon const& src);
    ~Peon(void);

    Peon& operator = (Peon const& right);

    void    getPolymorphed() const;

 private:
    std::string name;
};

std::ostream& operator << (std::ostream& ostream, Peon const& right);

#endif  // EX00_PEON_HPP_
