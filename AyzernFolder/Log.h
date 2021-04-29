#pragma once

#include "Ayzern.h"

// This ignores all warnings raised inside External headers
#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#pragma warning(pop)


namespace Ayzern {

	class Log
	{
	public:
		static void Init();

		static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define AZ_CORE_TRACE(...)    ::Ayzern::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AZ_CORE_INFO(...)     ::Ayzern::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AZ_CORE_WARN(...)     ::Ayzern::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AZ_CORE_ERROR(...)    ::Ayzern::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AZ_CORE_CRITICAL(...) ::Ayzern::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define AZ_TRACE(...)         ::Ayzern::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AZ_INFO(...)          ::Ayzern::Log::GetClientLogger()->info(__VA_ARGS__)
#define AZ_WARN(...)          ::Ayzern::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AZ_ERROR(...)         ::Ayzern::Log::GetClientLogger()->error(__VA_ARGS__)
#define AZ_CRITICAL(...)      ::Ayzern::Log::GetClientLogger()->critical(__VA_ARGS__)
