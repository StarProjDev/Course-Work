//---------------------------------------------------------------------------

#ifndef EditFormCodeH
#define EditFormCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TEditMode : public TForm
{
__published:	// IDE-managed Components
	TADOQuery *ViewADOQuery;
	TADOTable *ViewADOTable;
	TAutoIncField *ViewADOTableAutoIncField;
	TWideStringField *ViewADOTableTeam;
	TWideStringField *ViewADOTableTrainer;
	TDateTimeField *ViewADOTableCreatedAt;
	TWideStringField *ViewADOTableTournament;
	TWideStringField *ViewADOTableLocation;
	TDataSource *ViewDataSource;
	TDBNavigator *ViewDBNavigator;
	TMainMenu *EditModeMenu;
	TMenuItem *File1;
	TMenuItem *ExitOption;
	TMenuItem *Mode1;
	TMenuItem *EditModeOptionDSB;
	TMenuItem *ViewModeOptionENB;
	TTimer *ViewToolbarTimer;
	TDBGrid *ViewDBGrid;
	TStatusBar *StatusBar1;
	TLabel *Dev;
	void __fastcall ViewModeOptionENBClick(TObject *Sender);
	void __fastcall ExitOptionClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TEditMode(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEditMode *EditMode;
//---------------------------------------------------------------------------
#endif