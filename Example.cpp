#include <afxwin.h>

// derive it from the MFC's CFrameWnd class
class CMyFrame : public CFrameWnd {
public:
    CMyFrame() {
        //// call the Create() method, which will create a frame/window.
        //Create(NULL, _T("MFC Application Tutorial"));

        //// WS_VISIBLE, WS_OVERLAPPED 스타일을 적용하면 최소화, 최대화, 닫기 옵션인 나타나지 않는다.
        //Create(NULL, _T("MFC Application Tutorial"), WS_VISIBLE | WS_OVERLAPPED);

        // Windows Dimensions : Win32's RECT structure, the MFC provides the CRect class
        Create(NULL, _T("MFC Application Tutorial"), WS_SYSMENU, CRect(90, 120, 550, 480));
    }
};

class CExample : public CWinApp {
    BOOL InitInstance() {
        CMyFrame* Frame = new CMyFrame();
        // To use the frame window, assign its pointer to the CWinThread::m_pMainWnd member variable.
        m_pMainWnd = Frame;

        Frame->ShowWindow(SW_NORMAL);
        Frame->UpdateWindow();

        return TRUE;
    }
};

CExample theApp;