/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:15:11 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:05:06 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

void	ll()
{
	Zombie	*zombieptr;

	zombieptr = newZombie("heapzombie");
	randomChump("stackzombie");
	zombieptr->announce();
	delete zombieptr;
}
int	main()
{
	ll();
	system("leaks zombie");
	return (0);
}