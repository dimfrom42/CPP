/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:01:39 by dim               #+#    #+#             */
/*   Updated: 2022/05/04 00:02:10 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
	if (grade < 1 || grade > 150)
	{
		std::cout << "< " << name << " >" << "BUREAUCRAT'S GRADE ";
		grade < 1 ? throw GradeTooHighException() : throw GradeTooLowException();
	}
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("ERROR : TOO HIGH GRADE");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("ERROR : TOO LOW GRADE");
}

std::string const &Bureaucrat::getName() const {
	return (name);
}

int Bureaucrat::getGrade() const{
	return (grade);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooLowException::GradeTooLowException() {}

void Bureaucrat::increaseGrade() {
	if (grade - 1 < 1)
		throw GradeTooHighException();
	else
		grade--;
}

void Bureaucrat::decreaseGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException();
	else
		grade++;
}

void Bureaucrat::signForm(Form &form) {
	try {
		if (form.getIsSigned() == true)
			std::cout << "< " << form.getFormName() << " >" << " is signed already" << std::endl;
		else
		{
			form.beSigned(*this);
			std::cout << "< " << name << " > signed " << "< " << form.getFormName() << " >" << std::endl;
		}
		
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "< " << name << " >" << " executed " \
			<< "< "<< form.getFormName() << " >" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
