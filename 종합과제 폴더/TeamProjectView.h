
// TeamProjectView.h: CTeamProjectView 클래스의 인터페이스
//

#pragma once


class CTeamProjectView : public CEditView
{
protected: // serialization에서만 만들어집니다.
	CTeamProjectView() noexcept;
	DECLARE_DYNCREATE(CTeamProjectView)

// 특성입니다.
public:
	CTeamProjectDoc* GetDocument() const;
	int size;
// 작업입니다.
public:
	
// 재정의입니다.
public:
	
//	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 구현입니다.
public:
	virtual ~CTeamProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimesnewromans10();
	afx_msg void OnTimesnewromans12();
	afx_msg void OnTimesnewromans15();
	afx_msg void OnTimesnewromans20();
	afx_msg void OnHumanheadline10();
	afx_msg void OnHumanheadline12();
	afx_msg void OnHumanheadline15();
	afx_msg void OnHumanheadline20();
	afx_msg void On32782();
	afx_msg void On32783();
	afx_msg void On32784();
	afx_msg void On32785();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPenColor();
	afx_msg void OnFontSetting();
//	virtual void OnInitialUpdate();
//	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
//	virtual void Serialize(CArchive& ar);
//	virtual void OnInitialUpdate();
	afx_msg void OnPenPen();
	afx_msg void OnSize1();
	afx_msg void OnSize10();
	afx_msg void OnSize15();
	afx_msg void OnSize20();
};

#ifndef _DEBUG  // TeamProjectView.cpp의 디버그 버전
inline CTeamProjectDoc* CTeamProjectView::GetDocument() const
   { return reinterpret_cast<CTeamProjectDoc*>(m_pDocument); }
#endif

