//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
int pro = PGB->Position;
if(pro==5){
		LAYAR->Caption = "Starting";
		Label1->Left=123;
		Image2->Visible=true;
		Image1->Visible=false;
		ActivityIndicator1->Visible=true;
}
else if(pro==10){
		LAYAR->Caption = LAYAR->Caption+".";
}
else if(pro==15){
		LAYAR->Caption = LAYAR->Caption+".";
}
else if(pro==25){
		LAYAR->Caption = LAYAR->Caption+".";
}
else if(pro==30){
		LAYAR->Caption = "Starting";
}
else if(pro==35){
		LAYAR->Caption = LAYAR->Caption+".";
}
else if(pro==40){
		LAYAR->Caption = LAYAR->Caption+".";
}
else if(pro==45){
		LAYAR->Caption = LAYAR->Caption+".";
}
if(PGB->Position<50){
		PGB->Position++;
}
else if(PGB->Position == 50){
		if(PGB->Height>0){
				PGB->Height--;
				PGB->Top++;
				Form3->Hide();
				Poliklinik->Show();
				Timer1->Enabled=false;
		}
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
ActivityIndicator1->Visible=false;
}
//---------------------------------------------------------------------------
