#ifndef _GAME_OBJECT_
#define _GAME_OBJECT_

#include <glm\vec3.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm\gtc\quaternion.hpp>
#include <glm\gtx\quaternion.hpp>
#include <string>

#include "cModel.h"

class cGameObject
{
public:
	glm::vec3 Position, Scale;
	glm::quat OrientationQuat, OrientationEuler;

	bool inShortestPath;
	bool inOpenList;

	cModel* Model1;
	cModel* Model2;
	cModel* Model3;

	cGameObject(std::string modelName, std::string modelDir);
	cGameObject(std::string modelName, std::string modelDir, glm::vec3 position, glm::vec3 scale, glm::vec3 orientationEuler);
	cGameObject(std::string modelName, std::string model1Dir, std::string model2Dir, glm::vec3 position, glm::vec3 scale, glm::vec3 orientationEuler);
	cGameObject(std::string modelName, std::string model1Dir, std::string model2Dir, std::string model3Dir, glm::vec3 position, glm::vec3 scale, glm::vec3 orientationEuler);

	void Draw(cShader Shader);
};
#endif // !_GAME_OBJECT_
