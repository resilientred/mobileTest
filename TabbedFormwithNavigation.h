//---------------------------------------------------------------------------

#ifndef TabbedFormwithNavigationH
#define TabbedFormwithNavigationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Gestures.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
#include <System.Actions.hpp>
#include <FMX.Controls.Presentation.hpp>
//---------------------------------------------------------------------------
class TTabbedwithNavigationForm : public TForm
{
__published:	// IDE-managed Components
	TTabControl *TabControl1;
	TTabItem *TabItem1;
	TTabControl *TabControl2;
	TTabItem *TabItem5;
	TToolBar *ToolBar1;
	TLabel *lblTitle1;
	TSpeedButton *btnNext;
	TTabItem *TabItem6;
	TToolBar *ToolBar2;
	TLabel *lblTitle2;
	TSpeedButton *btnBack;
	TTabItem *TabItem2;
	TToolBar *ToolBar3;
	TLabel *lblTitle3;
	TTabItem *TabItem3;
	TToolBar *ToolBar4;
	TLabel *lblTitle4;
	TTabItem *TabItem4;
	TToolBar *ToolBar5;
	TLabel *lblTitle5;
	TActionList *ActionList1;
	TNextTabAction *NextTabAction;
	TPreviousTabAction *PreviousTabAction;
	TGestureManager *GestureManager1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormKeyUp(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift);
	void __fastcall TabControl1Gesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
private:	// User declarations
public:		// User declarations
	__fastcall TTabbedwithNavigationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTabbedwithNavigationForm *TabbedwithNavigationForm;
//---------------------------------------------------------------------------
#endif
