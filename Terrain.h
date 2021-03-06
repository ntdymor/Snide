#pragma once
#include <glm\glm.hpp>
#include <SnickerSource\Vertex.h>
#include <SnickerSource\SpriteBatch.h>
#include <SnickerSource\GLTexture.h>
#include <SnickerSource\InputManager.h>
class Terrain
{
public:
	Terrain();
	Terrain(const glm::vec2& position, const glm::vec2& dimensions, const glm::vec4& uv, float rowNum, Snicker::GLTexture texture, Snicker::ColorRGBA8 color);
	~Terrain();

	void init();
	void draw(Snicker::SpriteBatch& spriteBatch);
	void update(Snicker::InputManager& inputManager);
	float setRowNum(float rowNum) { m_rowNum = rowNum; }
	float getRowNum() { return m_rowNum; }
	

private:
	glm::vec2 m_position;
	glm::vec2 m_dimensions;
	glm::vec4 m_uv;
	Snicker::ColorRGBA8 m_color;
	Snicker::GLTexture m_texture;
	float m_rowNum;

};

