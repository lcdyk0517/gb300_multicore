#ifndef _DIRENT_H
#define _DIRENT_H

#ifdef __cplusplus
extern "C"
{
#endif

#define DTYPE_FILE                8
#define DTYPE_DIRECTORY           4

#define DIRENT_ISFILE(type)      ((type) == DTYPE_FILE)
#define DIRENT_ISDIRECTORY(type) ((type) == DTYPE_DIRECTORY)

struct dirent
{
	  uint8_t  d_type;
	  char     d_name[255];
};

typedef void DIR;

DIR *opendir(const char *path);
int closedir(DIR *dir);
struct dirent *readdir(DIR *dir);

#ifdef __cplusplus
 }
#endif
#endif