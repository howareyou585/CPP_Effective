#pragma once
class FileSystem
{
public:
	FileSystem();
	~FileSystem();
	int getid() { return 100; };
};
extern FileSystem tfs;
