
#define GLM_ENABLE_EXPERIMENTAL 
#define GLM_SWIZZLE
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>


//GLM�� ��ü������ �ƴϴ� (c�� ���)
int main()
{

	//Q1 Point p(1,4, -5) �� vector v(5,1,4) ��ŭ �̵��϶�
	glm::vec3 p(1, 4, -5);
	glm::vec3 v(5, 1, 4);
	p = p + v;

	std::cout << "1) " << glm::to_string(p) << std::endl;

	//Q2 vector v1(1,0,0) �� vector v2(0,1,0) �� ���϶�
	glm::vec3 v1(1, 0, 0);
	glm::vec3 v2(0, 1, 0);
	glm::vec3 v3 = v1 + v2;

	std::cout << "2) " << glm::to_string(v3) << std::endl;

	//Q3 Vector v4(0,1,0) �� ���̸� �� �� ��ŭ Ű��ÿ� << �̸� ���Ƽ� �ٲ�
	glm::vec3 v4(0, 1, 0);
	v4 = v4 * 2.0f;

	std::cout << "3) " << glm::to_string(v4) << std::endl;

	//Q4 ������ (8,2,5) �� ���� (1,-1,4) �� �մ� ���͸� ���Ͻÿ�
	glm::vec3 p1(8, 2, 5);
	glm::vec3 p2(1, -1, 4);
	glm::vec3 p3 = p2 - p1;

	std::cout << "4) " << glm::to_string(p3) << std::endl;

	//Q5 vector v5(1,3,4) �� ����ȭ (normalize) �Ͻÿ�
	glm::vec3 v5(1, 3, 4);
	v5 = glm::normalize(v5);

	std::cout << "5) " << glm::to_string(v5) << std::endl;

	//Q6 3���� vector v6(1,-1,4) �� 4 �������ͷ� ��ȯ�ϰ� w ���� 0 ���� �����Ͻÿ�
	glm::vec3 v6(1, -1, 4);
	glm::vec4 v7 = glm::vec4(v6, 0);

	std::cout << "6) " << glm::to_string(v7) << std::endl;

	/*glm::vec2 a(1.0f, 4.0f);
	//2���� ������ ����?
	float l = glm::length(a);

	glm::vec3 b(1.0f, 4.0f, 2.0f);

	b = b * 3.0f; //��Į�� �� : ������ Ÿ�� ����

	glm::vec3 c = glm::vec3(1.0f, 1.0f, 1.0f);
	//���̰� 1�� ���Ժ��ͷ� �ٲٱ�
	//glm::normalize(c); //�޾��ִ� ���� ����
	glm::vec3 d = glm::normalize(c);

	c.zyx = d.xyz;

	std::cout << glm::to_string(a) << std::endl;*/
	return 0;
}