/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:56:05 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/30 19:08:43 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstring>
#include <vector>
#include <exception>

class Span
{
	public:
		Span(unsigned int N);
		~Span();
		void addNumber(int number);
		void addRandNumber(int max);
		unsigned int shortestSpan();
		unsigned int longestSpan() const;
		class NumbersException: public std::exception
		{	
			virtual const char* what() const throw()
			{ 
				return ("Not enough numbers !"); 
			} 
		};
		class VectorFullException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Vector Full !");
			}
		};

	private:
		Span();
		Span(const Span &copy);
		Span &operator=(const Span &op);
		std::vector<int> _vector;
		unsigned int _vectorLength;
};

#endif