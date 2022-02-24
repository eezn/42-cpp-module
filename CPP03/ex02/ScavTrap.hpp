/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:49:52 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 22:13:18 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap &sRef );
	~ScavTrap( void );

	void		attack( std::string const &target );
	void		guardGate( void );

	ScavTrap	&operator=( const ScavTrap &sRef );

};

#endif