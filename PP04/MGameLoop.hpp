#pragma once
#include <chrono>
#include <thread>

#include <string>
#include "../pqpppp01/MConsolUitl.hpp"

using namespace std;

namespace MuSeoun_Engine
{
	class MGameLoop
	{
	private:
		bool _isGameRunning;
		MConsoleRenderer cRenderer;

	public:
		MGameLoop() { _isGameRunning = false; }
		~MGameLoop() {}

		void Run()
		{
			_isGameRunning = true;
			Initialize();

			while (_isGameRunning)
			{
				Input();
				Update();
				Render();
			}
			Release();
		}
		void Stop()
		{
			_isGameRunning = false;
		}

	private:
		void Initialize()
		{

		}
		void Release()
		{
		}

		void Input()
		{
			/*	if (GetAsyncKeyState(VK_SPACE) & 0x8000 || GetAsyncKeyState(VK_SPACE) & 0x8001)
				{

				}
				else
				{

				}*/

		}
		void Update()
		{

		}
		void Render()
		{
			int main();
			{
				cRenderer.Clear();
				cRenderer.MoveCursor(5, 20);
				chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now();
				chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint;
				std::string fps = "fps(milliseconds) : " + std::to_string(renderDuration.count());
				cRenderer.DrawString(fps);
			}
			
		}
		


		////cout << "Rendering speed : " << renderDuration.count() << "sec" << endl;

		//int remainingFrameTime = 100 - (int)(renderDuration.count() * 1000.0);
		//if (remainingFrameTime > 0)
		//	this_thread::sleep_for(chrono::milliseconds(remainingFrameTime));




	};






}