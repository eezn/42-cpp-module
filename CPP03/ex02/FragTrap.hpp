/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:30:36 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 21:42:34 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap &fRef );
	~FragTrap( void );

	void		highFivesGuys( void );

	FragTrap	&operator=( const FragTrap &fRef );

};

#endif