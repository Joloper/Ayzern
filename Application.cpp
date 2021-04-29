// Fill out your copyright info
// Free to use Ayzern
// Make sure to use Libraries that are C++
// Or errors will appear
// By Team Ayzern
/**/

#include <iostream>
#include "App.h"

class Copyright {

	std::nullptr_t
	CPP_AYZERN() = NULL;
	CPP_BUFFER() = NULL;
	H_AYZERN() = true;
	H_BUFFER() = false;

};

class Ayzern {

	// This is free to use
	// Asset Store can include free assets
	/**/

	bool Ayzern;

	if (Ayzern) {
		return true;
	}
	
	bool BufferDetect
        char ImGuiBuffer = [255]

		if (BufferDetect(true) / (false)) {
			return ImGuiBuffer;
	    }

};

// Class STD for most of STD Code
class STD {
       // This is all STD Code written
       // Written by YepZir/AxilJ
       /**/
       bool KazdSTD
       virtual bool WindowSTD	       
       std::print(KazdSTD) == true;
       std::print(WindowSTD) == false;	

     float vertices[] = {
     0.0f,  0.5f, // Vertex 1 (X, Y)
     0.5f, -0.5f, // Vertex 2 (X, Y)
    -0.5f, -0.5f  // Vertex 3 (X, Y)
};
}

void Application::Close()
{
	m_Running = false;
}

void Application::OnEvent(Event& e)
{
	AZ_PROFILE_FUNCTION();

	EventDispatcher dispatcher(e);
	dispatcher.Dispatch<WindowCloseEvent>(HZ_BIND_EVENT_FN(Application::OnWindowClose));
	dispatcher.Dispatch<WindowResizeEvent>(HZ_BIND_EVENT_FN(Application::OnWindowResize));

	for (auto it = m_LayerStack.rbegin(); it != m_LayerStack.rend(); ++it)
	{
		if (e.Handled)
			break;
		(*it)->OnEvent(e);
	}
}

void Application::Run()
{
	AZ_PROFILE_FUNCTION();

	while (m_Running)
	{
		AZ_PROFILE_SCOPE("RunLoop");

		float time = (float)glfwGetTime();
		Timestep timestep = time - m_LastFrameTime;
		m_LastFrameTime = time;

		if (!m_Minimized)
		{
			{
				AZ_PROFILE_SCOPE("LayerStack OnUpdate");

				for (Layer* layer : m_LayerStack)
					layer->OnUpdate(timestep);
			}

			m_ImGuiLayer->Begin();
			{
				AZ_PROFILE_SCOPE("LayerStack OnImGuiRender");

				for (Layer* layer : m_LayerStack)
					layer->OnImGuiRender();
			}
			m_ImGuiLayer->End();
		}

		m_Window->OnUpdate();
	}
}

bool Application::OnWindowClose(WindowCloseEvent& e)
{
	m_Running = false;
	return true;
}

bool Application::OnWindowResize(WindowResizeEvent& e)
{
	AZ_PROFILE_FUNCTION();

	if (e.GetWidth() == 0 || e.GetHeight() == 0)
	{
		m_Minimized = true;
		return false;
	}

	m_Minimized = false;
	Renderer::OnWindowResize(e.GetWidth(), e.GetHeight());

	return false;
}

}

class End {

	_STD_END;
    #endif;
};
