/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shiro <shiro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:38:20 by Sjan              #+#    #+#             */
/*   Updated: 2024/12/21 22:29:30 by shiro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>


using namespace std;

void processInput(GLFWwindow *window)
{
	if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}

int	main()
{
	GLFWwindow* window;

	if (!glfwInit())
		return (-1);

	window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
	
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}  

	glClearColor(0.25f, 0.5f, 0.75f, 1.0f);



	while(!glfwWindowShouldClose(window))
	{
		processInput(window);
		glfwPollEvents();
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
	}

	glfwTerminate();
	return (0);
}
