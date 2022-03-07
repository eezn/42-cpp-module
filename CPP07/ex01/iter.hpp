/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 01:40:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 18:46:20 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter( T *arr, const size_t &len, void (*func)(const T &)) {
	for (size_t i = 0; i < len; i++) { func(arr[i]); }
	std::cout << std::endl;
}

template <typename T>
void print( const T &elem ) { std::cout << elem << " "; }

class Dummy {
private:
	int	value;
public:
	Dummy( void ) {};
	Dummy( const Dummy &Ref ) { this->value = Ref.getValue(); };
	virtual ~Dummy( void ) {};
	Dummy &operator=( const Dummy &Ref ) {
		this->value = Ref.getValue();
		return (*this);
	};
	int getValue( void ) const { return (this->value); };
	void setValue( int value ) { this->value = value; };
};

std::ostream &operator<<( std::ostream &out, const Dummy &Ref ) {
	out << Ref.getValue();
	return (out);
};

#endif