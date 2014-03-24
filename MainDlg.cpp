#include "stdafx.h"
#include <windows.h>
#include <windowsx.h>
#include "resource.h"
#include "MainDlg.h"

BOOL WINAPI Main_Proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
        HANDLE_MSG(hWnd, WM_INITDIALOG, Main_OnInitDialog);
        HANDLE_MSG(hWnd, WM_COMMAND, Main_OnCommand);
		HANDLE_MSG(hWnd,WM_CLOSE, Main_OnClose);
    }

    return FALSE;
}

BOOL Main_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam)
{
    return TRUE;
}

void Main_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
	int syboml;

    	TCHAR str1[9999];
	TCHAR str2[9999];
	TCHAR str3[9999];
	
  if(IDC_OK==id)
  {
   GetDlgItemText(hwnd,IDC_n1,str1,sizeof(str1));
   GetDlgItemText(hwnd,IDC_n2,str2,sizeof(str2));
   int n1=atoi(str1);
   int n2=atoi(str2);
   int n3=n1+n2;
   itoa(n3,str3,10);
   SetDlgItemText(hwnd,IDC_r,str3);
  
  }
    
}

void Main_OnClose(HWND hwnd)
{
    EndDialog(hwnd, 0);
}