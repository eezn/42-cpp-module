/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:15:43 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/28 02:37:43 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form {

private:

	const std::string	name;
	bool				is_signed;
	const int			sign_grade;
	const int			exec_grade;


public:

	Form( void );
	Form( const std::string &name, const int &sign_grade, const int &exec_grade );
	Form( const Form &Ref );
	virtual ~Form( void );

	Form &operator=( const Form &Ref );

	std::string	getName( void ) const;
	bool		getIsSigned( void ) const;
	int			getSignGrade( void ) const;
	int			getExecGrade( void ) const;

	void		beSigned( const Bureaucrat &Ref );

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Form: Grade too high");
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Form: Grade too low");
		}
	};

};

std::ostream &operator<<( std::ostream &out, const Form &Ref );

#endif