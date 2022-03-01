/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:54:34 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/28 02:15:08 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#define HIGH 1
#define LOW 150

class Bureaucrat {

private:

	const std::string	name;
	int					grade;


public:

	Bureaucrat( void );
	Bureaucrat( const std::string &name, const int &grade );
	Bureaucrat( const Bureaucrat &Ref );
	virtual ~Bureaucrat( void );

	Bureaucrat &operator=( const Bureaucrat &Ref );
	
	std::string	getName( void ) const;
	int			getGrade( void ) const;
	void		increaseGrade( const unsigned int &amount );
	void		decreaseGrade( const unsigned int &amount );

	// 설명 문자열을 반환 (exception class)
	// C++11 이전, virtual const char* what() const throw();
	// C++11 이후, virtual const char* what() const noexcept;
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