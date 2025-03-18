/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:36:18 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/18 17:10:54 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone;
		std::string secret;
	public:
		Contact();
		~Contact();

	Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret);

	Contact	add();
	int		isnull();
	void	display_complete();
	void	print_info(int i);
};

#endif
