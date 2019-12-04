
// TeamProjectView.cpp: CTeamProjectView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "TeamProject.h"
#endif

#include "TeamProjectDoc.h"
#include "TeamProjectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTeamProjectView

IMPLEMENT_DYNCREATE(CTeamProjectView, CEditView)

BEGIN_MESSAGE_MAP(CTeamProjectView, CEditView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_TIMESNEWROMANS_10, &CTeamProjectView::OnTimesnewromans10)
	ON_COMMAND(ID_TIMESNEWROMANS_12, &CTeamProjectView::OnTimesnewromans12)
	ON_COMMAND(ID_TIMESNEWROMANS_15, &CTeamProjectView::OnTimesnewromans15)
	ON_COMMAND(ID_TIMESNEWROMANS_20, &CTeamProjectView::OnTimesnewromans20)
	ON_COMMAND(ID_HUMANHEADLINE_10, &CTeamProjectView::OnHumanheadline10)
	ON_COMMAND(ID_HUMANHEADLINE_12, &CTeamProjectView::OnHumanheadline12)
	ON_COMMAND(ID_HUMANHEADLINE_15, &CTeamProjectView::OnHumanheadline15)
	ON_COMMAND(ID_HUMANHEADLINE_20, &CTeamProjectView::OnHumanheadline20)
	ON_COMMAND(ID_32782, &CTeamProjectView::On32782)
	ON_COMMAND(ID_32783, &CTeamProjectView::On32783)
	ON_COMMAND(ID_32784, &CTeamProjectView::On32784)
	ON_COMMAND(ID_32785, &CTeamProjectView::On32785)
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_PEN_COLOR, &CTeamProjectView::OnPenColor)
	ON_COMMAND(ID_FONT_SETTING, &CTeamProjectView::OnFontSetting)
	ON_COMMAND(ID_PEN_PEN, &CTeamProjectView::OnPenPen)
	ON_COMMAND(ID_SIZE_1, &CTeamProjectView::OnSize1)
	ON_COMMAND(ID_SIZE_10, &CTeamProjectView::OnSize10)
	ON_COMMAND(ID_SIZE_15, &CTeamProjectView::OnSize15)
	ON_COMMAND(ID_SIZE_20, &CTeamProjectView::OnSize20)
END_MESSAGE_MAP()

// CTeamProjectView 생성/소멸

CTeamProjectView::CTeamProjectView() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CTeamProjectView::~CTeamProjectView()
{
}

//BOOL CTeamProjectView::PreCreateWindow(CREATESTRUCT& cs)
//{
//	// TODO: CREATESTRUCT cs를 수정하여 여기에서
//	//  Window 클래스 또는 스타일을 수정합니다.
//
//	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
//	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// 자동 줄바꿈을 사용합니다.
//
//	return bPreCreated;
//}

void CTeamProjectView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTeamProjectView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTeamProjectView 진단

#ifdef _DEBUG
void CTeamProjectView::AssertValid() const
{
	CEditView::AssertValid();
}

void CTeamProjectView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CTeamProjectDoc* CTeamProjectView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTeamProjectDoc)));
	return (CTeamProjectDoc*)m_pDocument;
}
#endif //_DEBUG


// CTeamProjectView 메시지 처리기


void CTeamProjectView::OnTimesnewromans10()
{
	CFont font;
	font.CreatePointFont(100, L"Times New Roman");
	SetFont(&font, TRUE);
}


void CTeamProjectView::OnTimesnewromans12()
{
	CFont font;
	font.CreatePointFont(120, L"Times New Roman");
	SetFont(&font, TRUE);
}


void CTeamProjectView::OnTimesnewromans15()
{
	CFont font;
	font.CreatePointFont(150, L"Times New Roman");
	SetFont(&font, TRUE);
}


void CTeamProjectView::OnTimesnewromans20()
{
	CFont font;
	font.CreatePointFont(200, L"Times New Roman");
	SetFont(&font, TRUE);
}


void CTeamProjectView::OnHumanheadline10()
{
	CFont font;
	font.CreatePointFont(100, L"휴먼둥근헤드라인");
	SetFont(&font, TRUE);
}


void CTeamProjectView::OnHumanheadline12()
{
	CFont font;
	font.CreatePointFont(120, L"휴먼둥근헤드라인");
	SetFont(&font, TRUE);
}


void CTeamProjectView::OnHumanheadline15()
{
	CFont font;
	font.CreatePointFont(150, L"휴먼둥근헤드라인");
	SetFont(&font, TRUE);
}


void CTeamProjectView::OnHumanheadline20()
{
	CFont font;
	font.CreatePointFont(200, L"휴먼둥근헤드라인");
	SetFont(&font, TRUE);
}


void CTeamProjectView::On32782()
{
	CFont font;
	font.CreatePointFont(100, L"굴림");
	SetFont(&font, TRUE);
}


void CTeamProjectView::On32783()
{
	CFont font;
	font.CreatePointFont(120, L"굴림");
	SetFont(&font, TRUE);
}


void CTeamProjectView::On32784()
{
	CFont font;
	font.CreatePointFont(150, L"굴림");
	SetFont(&font, TRUE); 
}


void CTeamProjectView::On32785()
{
	CFont font;
	font.CreatePointFont(200, L"굴림");
	
	SetFont(&font, TRUE);
}


CPoint pnt;
COLORREF col = RGB(0, 255, 0);
void CTeamProjectView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	
		if (nFlags == MK_LBUTTON) {
			CClientDC dc(this);
			CPen pen(PS_SOLID, size, col);
			dc.SelectObject(&pen);
			dc.MoveTo(pnt);
			dc.LineTo(point);
		}
		pnt = point;
		CEditView::OnMouseMove(nFlags, point);
	
}



void CTeamProjectView::OnPenColor()
{
	CColorDialog dlg;
	if (dlg.DoModal() == IDOK) {
		col = dlg.GetColor();
		// TODO: 여기에 명령 처리기 코드를 추가합니다.
	}
}




void CTeamProjectView::OnFontSetting()
{
	HFONT hFont, OldFont;
	CFontDialog dlg;
	CString strText = NULL;
	if (dlg.DoModal() == IDOK) {
		HDC hdc;
		hdc = ::GetDC(this->m_hWnd);
		LOGFONT lf;
		dlg.GetCurrentFont(&lf);
		hFont = CreateFontIndirect(&lf);
		OldFont = (HFONT)SelectObject(hdc, hFont);
		SetTextColor(hdc, dlg.GetColor());    // 폰트 색상 적용

		TextOut(hdc, 0, 0,strText, strText.GetLength()); // 문자열 그리기


		
		SelectObject(hdc, OldFont);       // 기존 폰트 선택
		DeleteObject(hFont);        // 폰트 삭제
	}
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
}




void CTeamProjectView::OnPenPen()
{
	//CTeamProjectView::OnMouseMove(UINT nFlags, CPoint point);


}


void CTeamProjectView::OnSize1()
{
	size = 1;
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
}


void CTeamProjectView::OnSize10()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	size = 10;
}


void CTeamProjectView::OnSize15()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	size = 15;
}


void CTeamProjectView::OnSize20()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	size = 20;
}
