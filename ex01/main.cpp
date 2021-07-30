/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:55:44 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/30 11:20:58 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp(5);
	sp.addNumber(-1);
	sp.addNumber(5);
	sp.addNumber(7);
	sp.addNumber(2);
	sp.addNumber(42);
    // sp.addNumber(42);

	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    return (0);
}