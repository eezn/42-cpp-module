/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 02:11:39 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 12:44:30 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {

private:

	T *arr;
	const unsigned int size;

public:

	Array( void ) {
		size = 0;
		arr = new T();
	};

	Array( const unsigned int &n ) {
		size = n;
		if (size) { arr = new T[size]; }
		else { arr = new T(); }
	};
	
	Array( const Array &Ref ) {
		this->size = Ref.getSize();
		if (size) {
			this->arr = new T[this->size];
			for (int i = 0; static_cast<int>(this->size); i++) {
				this->arr[i] = Ref[i];
			}
		}
		else { this->arr = new T(); }
	};

	virtual ~Array( void ) { delete[] arr; };

	Array &operator=( const Array &Ref ) {
		this->size = Ref.getSize();
		if (size) {
			this->arr = new T[this->size];
			for (int i = 0; static_cast<int>(this->size); i++) {
				this->arr[i] = Ref[i];
			}
		}
		else { this->arr = new T(); }
	};



	T *getArr( void ) const { return (this->arr); };
	unsigned int getSize( void ) const { return (this->size); };

	T &operator[]( const unsigned int idx ) {
		if (idx >= size)
			throw OutOfRangeException();
		return (arr[idx]);
	};

	const T &operator[]( const unsigned int idx ) const {
		if (idx >= size)
			throw OutOfRangeException();
		return (arr[idx]);
	};

	class OutOfRangeException : public std::exception {
	public:
		virtual const char *what() const thorw() {
			return ("Array Out of Range");
		}
	};

};

#endif