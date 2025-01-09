#pragma once
#include "Scene.h"
#include "Framebuffer.h"
#include "Cells.h"
#include <memory>
using namespace std;

class GOLScene : public Scene
{
public:
	bool Initialize() override;
	void Update() override;
	void Draw() override;

public:
	unique_ptr<Framebuffer> m_framebuffer;
	unique_ptr<Cells<uint8_t>> m_cellsA;
	unique_ptr<Cells<uint8_t>> m_cellsB;

	int m_frame{ 0 };
};

