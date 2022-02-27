/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:29 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 23:12:50 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>

class AMateria;

class IMateriaSource {

public:

	virtual ~IMateriaSource( void ) {} // 소멸자 내부 정의, 인터페이스는 따로 파일이 없음

	virtual void		learnMateria( AMateria * ) = 0;
	virtual AMateria	*createMateria( std::string const &type ) = 0;

};

#endif