/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 02:05:42 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/31 02:07:25 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX03_IMATERIASOURCE_HPP_
#define EX03_IMATERIASOURCE_HPP_

#include <string>
#include "AMateria.hpp"

class   IMateriaSource {
    virtual ~IMateriaSource() {}
    virtual void        learnMateria(AMateria*) = 0;
    virtual AMateria*   createMateria(std::string const& type) = 0;
};

#endif  // EX03_IMATERIASOURCE_HPP_
