#ifndef _FILEMANAGER_
#define _FILEMANAGER_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


int file_to_matrix(LPCTSTR pszFileName, int ***M, int n);
int matrix_to_file(LPCTSTR pszFileName, int **M, int n);


#endif