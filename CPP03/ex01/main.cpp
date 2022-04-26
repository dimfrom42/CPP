/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:18:42 by dim               #+#    #+#             */
/*   Updated: 2022/04/26 05:32:59 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("a");
	ScavTrap	b("b");

	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getDamagePoint());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getDamagePoint());
	
	std::cout << std::endl;
	
	a.attack("b");
	b.takeDamage(a.getDamagePoint());
	
	std::cout << std::endl;
	
	b.attack("a");
	a.takeDamage(b.getDamagePoint());
	
	std::cout << std::endl;
	
	b.guardGate();
	
	std::cout << std::endl;
	return (0);
}