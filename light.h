#pragma once

#include <glm/glm.hpp>
class light 
{

private:
	glm::vec3 i;
	glm::vec3 n;
	glm::vec3 v;
	glm::vec3 r;
	glm::vec3 Ia;
	glm::vec3 Id;
	glm::vec3 Is;
	glm::vec3 La;
	glm::vec3 Ld;
	glm::vec3 Ls;
public:
	void calculate_Ia(glm::vec3 Ka);
	void calculate_Id(glm::vec3 Kd);
	void calculate_Is(glm::vec3 Ks,int angle);
	glm::vec3 light::Light(glm::vec3 Ks, glm::vec3 Ka, glm::vec3 Kd, int a);
	light::light(glm::vec3 i, glm::vec3 n, glm::vec3 v, glm::vec3 La, glm::vec3 Ld, glm::vec3 Ls);

	
};
