/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 01:49:46 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 04:53:54 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_VICTIM_HPP_
#define EX00_VICTIM_HPP_

#include <iostream>
#include <string>

class   Victim {
 public:
    Victim(void);
    explicit Victim(std::string name);
    Victim(Victim const& src);
    virtual ~Victim(void);

    Victim& operator = (Victim const& right);

    std::string     getName(void) const;
    virtual void    getPolymorphed() const;

 private:
    std::string name_;

    void    setName(std::string name);
};

std::ostream& operator << (std::ostream& ostream, Victim& right);

#endif  // EX00_VICTIM_HPP_
