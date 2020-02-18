#pragma once
#include "../Shared/D2Shared.hpp"

// FileSystem_MPQ.cpp
namespace FSMPQ
{
	void Init();
	void Shutdown();
	D2MPQArchive* AddSearchPath(char* szMPQName, char* szMPQPath);
	fs_handle FindFile(const char* szFileName, const char* szMPQName, D2MPQArchive** pArchiveOut);
}