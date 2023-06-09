////////////////////////////////////////////////////////////////////////////////
// Filename: graphicsclass.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _GRAPHICSCLASS_H_
#define _GRAPHICSCLASS_H_


/////////////
// GLOBALS //
/////////////
const bool FULL_SCREEN = true;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;


///////////////////////
// MY CLASS INCLUDES //
///////////////////////
#include "d3dclass.h"
#include "cameraclass.h"
#include "modelclass.h"
#include "lightshaderclass.h"
#include "lightclass.h"


////////////////////////////////////////////////////////////////////////////////
// Class name: GraphicsClass
////////////////////////////////////////////////////////////////////////////////
class GraphicsClass
{
public:
	GraphicsClass();
	GraphicsClass(const GraphicsClass&);
	~GraphicsClass();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();
	void HandleMouseInput(int, int);
	

private:
	bool Render();

private:
	D3DClass* m_D3D;
	CameraClass* m_Camera;
	ModelClass* m_Model1;
	ModelClass* m_Model2;
	ModelClass* m_Model3;
	LightShaderClass* m_LightShader;
	LightClass *m_Light1, *m_Light2, *m_Light3, *m_Light4;
	float m_rotation;
	int m_prevMouseX;
	int m_prevMouseY;
	float rotationSpeed;


};

#endif