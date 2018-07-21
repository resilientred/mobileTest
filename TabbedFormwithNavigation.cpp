//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "TabbedFormwithNavigation.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

TTabbedwithNavigationForm *TabbedwithNavigationForm;
//---------------------------------------------------------------------------
__fastcall TTabbedwithNavigationForm::TTabbedwithNavigationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTabbedwithNavigationForm::FormCreate(TObject *Sender)
{
	// This defines the default active tab at runtime
	TabControl1->ActiveTab = TabItem1;
}
//---------------------------------------------------------------------------

void __fastcall TTabbedwithNavigationForm::FormKeyUp(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift)
{
	if(Key == vkHardwareBack) {
		if(TabControl1->ActiveTab == TabItem1 && TabControl2->ActiveTab == TabItem6) {
			TabControl2->Previous(TTabTransition::Slide, TTabTransitionDirection::Normal);
			Key = 0;
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TTabbedwithNavigationForm::TabControl1Gesture(TObject *Sender, const TGestureEventInfo &EventInfo,
		  bool &Handled)
{
	switch (EventInfo.GestureID) {
		case sgiLeft :
			if(TabControl1->ActiveTab != TabControl1->Tabs[TabControl1->TabCount-1]) {
				TabControl1->ActiveTab = TabControl1->Tabs[TabControl1->TabIndex+1];
				Handled = true;
			}
			break;
		case sgiRight :
			if(TabControl1->ActiveTab != TabControl1->Tabs[0]) {
				TabControl1->ActiveTab = TabControl1->Tabs[TabControl1->TabIndex-1];
				Handled = true;
			}
			break;
	default:
		;
	}
}
//---------------------------------------------------------------------------

