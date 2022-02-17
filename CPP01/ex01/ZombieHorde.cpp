/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:38:17 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 04:45:53 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombieHorde[i].setName( name + "[" + std::to_string(i) + "]" );

	return (zombieHorde);
}
