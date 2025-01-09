#pragma once
#include "Scene.h"
#include "Framebuffer.h"
#include "Cells.h"
#include <memory>
using namespace std;

class CAScene : public Scene
{
public:
	bool Initialize() override;
	void Update() override;
	void Draw() override;

public:
	unique_ptr<Framebuffer> m_framebuffer;
	unique_ptr<Cells<bool>> m_cells;
};

