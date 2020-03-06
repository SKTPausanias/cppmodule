/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:23:32 by mlaplana          #+#    #+#             */
/*   Updated: 2020/03/03 14:23:33 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_adress;
		std::string email_adress;
		std::string phone_number;
		std::string birthday;
		std::string favourite_meal;
		std::string underwear_color;
		std::string darkest_secret;
};

void	ft_add(Contact *contact)
{
	std::cout << "Fill the contact info!" << std::endl;
	std::cout << "First name:";
	getline(std::cin, contact->first_name);
	std::cout << "Last name:";
	getline(std::cin, contact->last_name);
	std::cout << "Nickname:";
	getline(std::cin, contact->nickname);
	std::cout << "Login:";
	getline(std::cin, contact->login);
	std::cout << "Postal Adress:";
	getline(std::cin, contact->postal_adress);
	std::cout << "Email Adress:";
	getline(std::cin, contact->email_adress);
	std::cout << "Phone Number:";
	getline(std::cin, contact->phone_number);
	std::cout << "Birthday:";
	getline(std::cin, contact->birthday);
	std::cout << "Favourite Meal:";
	getline(std::cin, contact->favourite_meal);
	std::cout << "Underwear Color:";
	getline(std::cin, contact->underwear_color);
	std::cout << "Darkest Secret:";
	getline(std::cin, contact->darkest_secret);
}

std::string ft_change(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.push_back('.');
	}
	return str;
}

void	ft_search(Contact contacts[8], int i)
{
	int j;
	int index;

	j = 0;
	std::cout << "     Index|first name|last name | nickname" << std::endl;
	while (j < i && j < 8)
	{
		std::cout << std::right << std::setw(10) << j << "|";
		std::cout << std::right << std::setw(10) << ft_change(contacts[j].first_name) << "|";
		std::cout << std::right << std::setw(10) << ft_change(contacts[j].last_name) << "|";
		std::cout << std::right << std::setw(10) << ft_change(contacts[j].nickname) << std::endl;
		j++;
	}
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Insert Index :";
	std::cin >> index;
	if (index < 0 || index >= i || index >= 8)
		std::cout << "Invalid Index" << std::endl;
	else
	{
		std::cout << "First name: " << contacts[index].first_name << std::endl;
		std::cout << "Last name: " << contacts[index].last_name << std::endl;
		std::cout << "Nickname: " << contacts[index].nickname << std::endl;
		std::cout << "Login: " << contacts[index].login << std::endl;
		std::cout << "Postal Adress: " << contacts[index].postal_adress << std::endl;
		std::cout << "Email Adress: " << contacts[index].email_adress << std::endl;
		std::cout << "Phone Number: " << contacts[index].phone_number << std::endl;
		std::cout << "Birthday: " << contacts[index].birthday << std::endl;
		std::cout << "Favourite Meal: " << contacts[index].favourite_meal << std::endl;
		std::cout << "Underwear Color: " << contacts[index].underwear_color << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].darkest_secret << std::endl;
		std::cout << std::endl;
	}
}

int main()
{
	int i;
	std::string command;
	Contact contacts[8];

	i = 0;
	while (1)
	{
		std::cout << "Enter a command: (ADD, SEARCH, EXIT)" << std::endl;
		std::cout << ">_";
		getline(std::cin, command);
		if (command == "ADD")
		{
			if (i < 8)
				ft_add(&contacts[i]);
			else
				std::cout << "Max Contacts Reached:(" << std::endl;
			i++;
		}
		else if (command == "SEARCH")
			ft_search(contacts, i);
		else if (command == "EXIT")
		{
			std::cout << "Later! :)" << std::endl;
			return(0);
		}
		else
			std::cout << "Invalid Command mate!" << std::endl;
	}
}
