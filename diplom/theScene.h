#ifndef THESCENE_H_
#define THESCENE_H_

#include "theDataset.h"

#include <GL/gl.h>
#include <GL/glu.h>

class TheScene {

public:
	bool nothing_loaded;
	
	TheScene();
	~TheScene() {};
	
	void initMainGL();
	void initNavGL();
	
	void setDataset(TheDataset*);
	
	void renderScene();
	void renderNavView(int);
	
	void updateView(float, float, float);
	
		
private:
	GLuint tex1;
	GLuint tex2;
	bool tex1_loaded;
	float *m_texture_head;
	TheDataset* m_dataset;
		
	
	float m_xSize;
	float m_ySize;
	float m_zSize;
	
	float m_xOffset0;
	float m_yOffset0;
	float m_xOffset1;
	float m_yOffset1;
	float m_xOffset2;
	float m_yOffset2;
	float m_xSlize;
	float m_ySlize;
	float m_zSlize;
	float m_xTexture;
	float m_yTexture;
	float m_zTexture;
	
	float m_xclick;
	float m_yclick;
	float m_zclick;
	
	void renderXSlize();
	void renderYSlize();
	void renderZSlize();
};

#endif /*THESCENE_H_*/