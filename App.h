// This is App.h
// For Application.cpp
// Make sure to use Libraries that are C++
// Or errors will appear
// The best one to use is Vulkan, GLFW, or OpenGL GLUT
/**/

#pragma once

// These are all the includes
// To use for Ayzern Engine
/**/

#include <AccCtrl.h>
#include <AclAPI.h>
#include <activation.h>
#include <activdbg.h>
#include <activdbg100.h>
#include <iostream>
#include <activecf.h>
#include <ActiveDS.h>
#include <activprof.h>
#include "App.h"
#include "Defines.h"

class Application
{
public:
	Application(const std::string& name = "Ayzern App");
	virtual ~Application();

	void OnEvent(Event& e);

	void PushLayer(Layer* layer);
	void PushOverlay(Layer* layer);

	Window& GetWindow() { return *m_Window; }

	void Close();

	ImGuiLayer* GetImGuiLayer() { return m_ImGuiLayer; }

	static Application& Get() { return *s_Instance; }
private:
	void Run();
	bool OnWindowClose(WindowCloseEvent& e);
	bool OnWindowResize(WindowResizeEvent& e);
private:
	Scope<Window> m_Window;
	ImGuiLayer* m_ImGuiLayer;
	bool m_Running = true;
	bool m_Minimized = false;
	LayerStack m_LayerStack;
	float m_LastFrameTime = 0.0f;
private:
	static Application* s_Instance;
	friend int ::main(int argc, char** argv);
};

// To be defined in CLIENT
Application* CreateApplication();

}
