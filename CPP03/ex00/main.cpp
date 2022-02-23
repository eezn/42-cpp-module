/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:45:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 18:58:34 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap const a("jin-lee");
	ClapTrap b = a;
	ClapTrap c(a);

	b.attack("someone");
	b.beRepaired(10);
	b.takeDamage(100);

	c.beRepaired(100);
	c.takeDamage(10);
}
