/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:31:24 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 14:25:05 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <exception>

class Intern {

public:

	Intern( void );
	Intern( const Intern &Ref );
	virtual ~Intern( void );

	Intern &operator=( const Intern &Ref );

	Form	*makeForm( const std::string &form_name, const std::string &target );

	class NoMatchFormException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("There is no match form.");
		}
	};

};

#endif