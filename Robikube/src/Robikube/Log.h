#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Robikube {

	class RBK_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};


}

// Core log macros
#define RBK_CORE_TRACE(...) ::Robikube::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RBK_CORE_INFO(...)  ::Robikube::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RBK_CORE_WARN(...)  ::Robikube::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RBK_CORE_ERROR(...) ::Robikube::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RBK_CORE_FATAL(...) ::Robikube::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define RBK_TRACE(...)      ::Robikube::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RBK_INFO(...)       ::Robikube::Log::GetClientLogger()->info(__VA_ARGS__)
#define RBK_WARN(...)       ::Robikube::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RBK_ERROR(...)      ::Robikube::Log::GetClientLogger()->error(__VA_ARGS__)
#define RBK_FATAL(...)      ::Robikube::Log::GetClientLogger()->fatal(__VA_ARGS__)
