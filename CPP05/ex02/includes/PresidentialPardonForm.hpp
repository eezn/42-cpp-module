/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:41:55 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 03:12:15 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:

	PresidentialPardonForm( void );


public:

	PresidentialPardonForm( const std::string &target );
	PresidentialPardonForm( const PresidentialPardonForm &Ref );
	virtual ~PresidentialPardonForm( void );

	PresidentialPardonForm &operator=( const PresidentialPardonForm &Ref );

	void	execute( const Bureaucrat &executer ) const;

};

#endif