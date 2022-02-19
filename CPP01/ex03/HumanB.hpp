/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:16:17 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 12:30:40 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

// HumanB Class 생성 시 Weapon 멤버 변수를 초기화할 수 없으므로 참조자를 사용할 수 없음
class HumanB {

private:

	std::string	b_name;
	Weapon		*b_weapon;


public:

	HumanB( std::string name );
	~HumanB( void );

	void		setWeapon( Weapon &weapon );
	void		attack( void );

};

#endif