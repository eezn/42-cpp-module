/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:54:59 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 13:10:07 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form {

private:

	RobotomyRequestForm( void );


public:

	RobotomyRequestForm( const std::string &target );
	RobotomyRequestForm( const RobotomyRequestForm &Ref );
	virtual ~RobotomyRequestForm( void );

	RobotomyRequestForm &operator=( const RobotomyRequestForm &Ref );

	void	execute( const Bureaucrat &executer ) const;

};

#endif