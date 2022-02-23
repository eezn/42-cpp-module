/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:45:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 20:34:23 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap const a("jin-lee");
	ClapTrap b;

	b = a;
	b.attack("someone");
	b.takeDamage(100);

	ClapTrap c(b);
	c.beRepaired(100);
	c.takeDamage(10);
	c.guardGate();
}
}
