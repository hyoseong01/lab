
#define GLM_ENABLE_EXPERIMENTAL 
#define GLM_SWIZZLE
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtc/constants.hpp>
const double DEGREES_TO_RADIANS = glm::pi<float>() / 180.0f;
const double RADIANS_TO_DEGREES = 180.0 / glm::pi<float>();


int main()
{
	/*glm::vec3 v(7, 3, -2);
	glm::vec3 u(10, 4, 2);
	float d = glm::dot(v, u);
	std::cout << d << std::endl;
	return 0;*/
	glm::vec3 v(2, -1, 1);
	glm::vec3 u(1, 1, 2);
	//³»Àû
	float a = glm::dot(v, u);
	//°Å¸® °ö
	float b = glm::length(v) * glm::length(u);
	std::cout << glm::acos(a/b) * RADIANS_TO_DEGREES << std::endl;
}