/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:07:21 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 12:31:31 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

// HumanA Class 생성 시 Weapon 멤버 변수를 생성자에서 요구하므로 참조자를 사용할 수 있음
class HumanA {

private:

	std::string	a_name;
	Weapon		&a_weapon;


public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void		attack( void );

};

#endif