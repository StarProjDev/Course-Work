//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AuthFormCode.h"
#include "EditFormCode.h"
#include "ViewFormCode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPasswordModal *PasswordModal;
//---------------------------------------------------------------------------
__fastcall TPasswordModal::TPasswordModal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPasswordModal::ReturnButtonClick(TObject *Sender)
{
this->Hide();
TViewMode *f = new TViewMode(Application);
f->ShowModal();
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TPasswordModal::SubmitButtonClick(TObject *Sender)
{
if (PwdEdit->Text == "248531") {
	MessageDlg("Password accepted.", mtInformation, TMsgDlgButtons() << mbOK, 0);
	this->Hide();
	TEditMode *f = new TEditMode(Application);
	f->ShowModal();
	Application->Terminate();
} else {
	MessageDlg("Wrong Password.\nAsk a system administrator for a permission to edit.", mtError, TMsgDlgButtons() << mbOK, 0);
}
}
//---------------------------------------------------------------------------
