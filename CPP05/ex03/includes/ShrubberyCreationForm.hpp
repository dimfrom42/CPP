/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:09:21 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:49:44 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP__
# define _SHRUBBERYCREATIONFORM_HPP__
#include <iostream>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();

	class FileNotOpenException : public std::exception
	{
	public :
		FileNotOpenException();
		virtual const char *what() const throw();
	};

	std::string const	&getTarget() const;
	void	execute(Bureaucrat const &executor) const;
};

std::ostream&	operator<<(std::ostream &os, const ShrubberyCreationForm& form);

#endif
