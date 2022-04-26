/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:07:59 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 04:12:17 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H__
#define _DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private: 
	Brain *brain;
public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& rhs);
	~Dog();

	void	makeSound() const;

	void	changeIdea(const std::string& idea);
	void	sayIt() const;
};

#endif