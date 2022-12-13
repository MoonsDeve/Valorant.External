#pragma once
#include <ntifs.h>
#include <stdarg.h>

namespace n_log
{
	void printf(const char* text, ...)
	{
		va_list(args);
		va_start(args, text);

		vDbgPrintExWithPrefix("[hwid spoofer] : ", 0, 0, text, args);

		va_end(args);
	}
}


void WEB::CheckVersion(string version) {
	if (DownloadString("https://pastebin.com/raw/MVPZWNFJ") != version) {
		MessageBoxA(NULL, "Your version is outdated!", "VERSION!", 0);
		exit(0);
	}
}
