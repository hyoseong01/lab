
#define GLM_ENABLE_EXPERIMENTAL 
#define GLM_SWIZZLE
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>


//GLM은 객체지향이 아니다 (c와 비슷)
int main()
{

	//Q1 Point p(1,4, -5) 를 vector v(5,1,4) 만큼 이동하라
	glm::vec3 p(1, 4, -5);
	glm::vec3 v(5, 1, 4);
	p = p + v;

	std::cout << "1) " << glm::to_string(p) << std::endl;

	//Q2 vector v1(1,0,0) 와 vector v2(0,1,0) 들 더하라
	glm::vec3 v1(1, 0, 0);
	glm::vec3 v2(0, 1, 0);
	glm::vec3 v3 = v1 + v2;

	std::cout << "2) " << glm::to_string(v3) << std::endl;

	//Q3 Vector v4(0,1,0) 의 길이를 두 배 만큼 키우시오 << 이름 같아서 바꿈
	glm::vec3 v4(0, 1, 0);
	v4 = v4 * 2.0f;

	std::cout << "3) " << glm::to_string(v4) << std::endl;

	//Q4 시작점 (8,2,5) 과 끝점 (1,-1,4) 를 잇는 벡터를 구하시오
	glm::vec3 p1(8, 2, 5);
	glm::vec3 p2(1, -1, 4);
	glm::vec3 p3 = p2 - p1;

	std::cout << "4) " << glm::to_string(p3) << std::endl;

	//Q5 vector v5(1,3,4) 를 정규화 (normalize) 하시오
	glm::vec3 v5(1, 3, 4);
	v5 = glm::normalize(v5);

	std::cout << "5) " << glm::to_string(v5) << std::endl;

	//Q6 3차원 vector v6(1,-1,4) 를 4 차원벡터로 변환하고 w 값을 0 으로 설정하시오
	glm::vec3 v6(1, -1, 4);
	glm::vec4 v7 = glm::vec4(v6, 0);

	std::cout << "6) " << glm::to_string(v7) << std::endl;

	/*glm::vec2 a(1.0f, 4.0f);
	//2차원 벡터의 길이?
	float l = glm::length(a);

	glm::vec3 b(1.0f, 4.0f, 2.0f);

	b = b * 3.0f; //스칼라 곱 : 연산자 타입 동일

	glm::vec3 c = glm::vec3(1.0f, 1.0f, 1.0f);
	//길이가 1인 정규벡터로 바꾸기
	//glm::normalize(c); //받아주는 변수 없음
	glm::vec3 d = glm::normalize(c);

	c.zyx = d.xyz;

	std::cout << glm::to_string(a) << std::endl;*/
	return 0;
}