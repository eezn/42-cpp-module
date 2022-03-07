/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 02:11:39 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 18:16:25 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
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

template <typename T>
class Array {

private:

	T *arr;
	unsigned int len;

public:

	// Constructor
	Array( void ): len(0) { arr = new T[len]; };

	Array( const unsigned int &n ): len(n) {
		if (len) { arr = new T[len]; }
		else { arr = new T[len]; }
	};
	
	Array( const Array &Ref ): len(Ref.size()) {
		if (len) {
			this->arr = new T[len];
			for (unsigned int i = 0; i < len; i++) {
				this->arr[i] = Ref[i];
			}
		}
		else { this->arr = new T[len]; }
	};

	// Desturctor
	virtual ~Array( void ) { delete[] arr; };

	// Assignment operator
	Array &operator=( const Array &Ref ) {
		if (this->size()) { delete[] this->arr; }
		len = Ref.size();
		if (len) {
			this->arr = new T[len];
			for (unsigned int i = 0; i < len; i++) {
				this->arr[i] = Ref[i];
			}
		}
		else { this->arr = new T[len]; }
		return (*this);
	};

	// Public member functions
	T *getArr( void ) const { return (this->arr); };
	
	const unsigned int &size( void ) const { return (this->len); };

	// Index Operator
	T &operator[]( const unsigned int idx ) {
		if (idx >= len)
			throw IndexOutofRangeException();
		return (arr[idx]);
	};

	const T &operator[]( const unsigned int idx ) const {
		if (idx >= len)
			throw IndexOutofRangeException();
		return (arr[idx]);
	};

	// Exception Class
	class IndexOutofRangeException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Index Out of Range");
		}
	};

};

#endif