/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:54:34 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 04:44:48 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define LIGHTGRAY "\e[0;37m"
#define EOC "\e[0m"

#define HIGH 1
#define LOW 150

class Form;

class Bureaucrat {

private:

	const std::string	name;
	int					grade;

	Bureaucrat( void );


public:

	Bureaucrat( const std::string &name, const int &grade );
	Bureaucrat( const Bureaucrat &Ref );
	virtual ~Bureaucrat( void );

	Bureaucrat &operator=( const Bureaucrat &Ref );
	
	std::string	getName( void ) const;
	int			getGrade( void ) const;
	void		increaseGrade( const unsigned int &amount );
	void		decreaseGrade( const unsigned int &amount );

	void		signForm( const Form &Ref );
	void		executeForm( const Form &form );

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Bureaucrat: Grade too high");
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Bureaucrat: Grade too low");
		}
	};

};

std::ostream &operator<<( std::ostream &out, const Bureaucrat &Ref );

#endif