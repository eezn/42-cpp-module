/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:45:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 21:40:46 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {

	FragTrap const a("jin-lee");
	FragTrap b;

	b = a;
	b.attack("someone");
	b.takeDamage(100);

	FragTrap c(b);
	c.beRepaired(100);
	c.takeDamage(10);
	c.highFivesGuys();
}
