/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 05:04:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/29 05:06:17 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>

class Test1 {
 public:
	virtual void func() { std::cout << "Kitty on your lap\n"; }
	virtual ~Test1() { this->func(); }
};

class Test2 : public Test1 {
 public:
	void func() {
        std::cout << "Tokyo mew mew\n";
		Test1::func();
	}
};

int main() {
    Test2* obj = new Test2;;
    delete(obj);
    return 0;
}
