/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 00:46:39 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 01:29:07 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_SORCERER_HPP_
#define EX00_SORCERER_HPP_

#include <iostream>
#include <string>

class   Sorcerer {
 public:
    Sorcerer(void);
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const& src);
    ~Sorcerer(void);

    Sorcerer&   operator = (Sorcerer const& right);

    std::string getName(void) const;
    std::string getTitle(void) const;

 private:
    std::string name_;
    std::string title_;

    void        setName(std::string name);
    void        setTitle(std::string title);
};

std::ostream& operator << (std::ostream& ostream, Sorcerer& right);

#endif  // EX00_SORCERER_HPP_
