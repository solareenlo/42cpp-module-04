/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wara.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:49:07 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 05:14:35 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_WARA_HPP_
#define EX00_WARA_HPP_

#include <iostream>
#include <string>
#include "Victim.hpp"

class   Wara : public Victim {
 public:
    Wara(void);
    explicit Wara(std::string name);
    Wara(Wara const& src);
    ~Wara(void);

    Wara& operator = (Wara const& right);

    void    getPolymorphed() const;

 private:
    std::string name;
};

std::ostream& operator << (std::ostream& ostream, Wara const& right);

#endif  // EX00_WARA_HPP_
