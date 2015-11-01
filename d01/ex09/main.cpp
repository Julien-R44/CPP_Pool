/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 02:27:11 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 04:02:35 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void)
{
	Logger		logger("Test.log");

	logger.log("logToConsole", "bang bang");
	logger.log("logToConsole", "ca dis quoi");
	logger.log("logToFile", "TEST BRUH");
	logger.log("logToFile", "IZI IZI BRUH");
	logger.log("logToFile", "VRAI CHOSES");
	logger.log("logToConsole", "EASY");
	return (0);
}
