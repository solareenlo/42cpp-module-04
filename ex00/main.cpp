/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 00:46:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 01:37:37 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

int main() {
    Sorcerer    robert("Robert", "the Magnificent");

    std::cout << std::endl;
    std::cout << robert;
    std::cout << std::endl;
    return (0);
}
