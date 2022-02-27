/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:54:34 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/27 20:26:15 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#define HIGH 1
#define LOW 150

class Bureaucrat {

protected:

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
	void		rankupGrade( const unsigned int &amount );
	void		rankdownGrade( const unsigned int &amount );

	// 설명 문자열을 반환 (exception class)
	// C++11 이전, virtual const char* what() const throw();
	// C++11 이후, virtual const char* what() const noexcept;
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Exception: Rank too high");
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Exception: Rank too low");
		}
	};

};

std::ostream &operator<<( std::ostream &out, const Bureaucrat &Ref );

#endif