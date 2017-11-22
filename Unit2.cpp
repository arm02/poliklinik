//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma resource "*.dfm"
TPoliklinik *Poliklinik;
const int AppBarHeight = 75;
//---------------------------------------------------------------------------
__fastcall TPoliklinik::TPoliklinik(TComponent* Owner)
	: TForm(Owner)
{
OpenDialog1->Filter = "JPEGs (*.jpg)|*.JPG|Bitmaps (*.bmp)|*.BMP|GIFs (*.gif)|*.GIF |PNGs (*.png)|*.PNG";
Edit74->TextHint=Label1->Caption;
Label47->Caption="Daftar Menu";
if (Label47->Caption!="Daftar Menu")
{
	Label47->Caption="Daftar Menu";
}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::AppBarResize()
{

}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::AppBarShow(int mode)
{
  if (mode == -1)
	mode = AppBar->Visible ? 0 : 1;
  if (mode == 0)
	AppBar->Visible = False;
  else {
	AppBar->Visible = True;
	AppBar->BringToFront();
  }
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::CloseButtonClick(TObject *Sender)
{
  Application->Terminate();
  Form3->Close();
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Action1Execute(TObject *Sender)
{
  AppBarShow(-1);
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::FormResize(TObject *Sender)
{
  AppBarResize();
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
  AppBarShow( (Key == VK_ESCAPE) ? -1 : 0 );
  if (AppBar->Visible==true) {
	  Panel2->Visible=true;
  }
  else if (AppBar->Visible==false) {
	  Panel2->Visible=false;
  }
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
		  bool &Handled)
{
  AppBarShow( 0 );
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel4Click(TObject *Sender)
{
	Panel127->BringToFront();
	Panel127->Width=1369;
	Panel13->BringToFront();
	Panel13->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel3Click(TObject *Sender)
{
	Application->Minimize();
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel3MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel3->Font->Color=clWhite;
	Panel3->Color=clTeal;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel3MouseLeave(TObject *Sender)
{
	Panel3->Font->Color=clBlack;
	Panel3->Color=clTeal;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel4MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel4->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel4MouseLeave(TObject *Sender)
{
	Panel4->Color=clMaroon;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label2MouseLeave(TObject *Sender)
{
Label2->Font->Color=clWhite;
Label8->Font->Color=clWhite;
Panel8->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label2MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Label2->Font->Color=clBlack;
Label8->Font->Color=clBlack;
Panel8->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label3MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	PEA->Color=clTeal;
	Label3->Font->Color=clBlack;
	Panel9->Visible=true;
	Label6->Font->Color=clBlack;
	Label7->Font->Color=clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label3MouseLeave(TObject *Sender)
{
	PEA->Color=clTeal;
	Label3->Font->Color=clWhite;
	Panel9->Visible=false;
	Label6->Font->Color=clWhite;
	Label7->Font->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label4MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel6->Color=clTeal;
	Label4->Font->Color=clBlack;
	Label5->Font->Color=clBlack;
		Panel10->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label4MouseLeave(TObject *Sender)
{
	Panel6->Color=clTeal;
	Label4->Font->Color=clWhite;
	Label5->Font->Color=clWhite;
	Panel10->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label5MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel6->Color=clTeal;
	Label4->Font->Color=clBlack;
	Label5->Font->Color=clBlack;
		Panel10->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label5MouseLeave(TObject *Sender)
{
	Panel6->Color=clTeal;
	Label4->Font->Color=clWhite;
	Label5->Font->Color=clWhite;
		Panel10->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel6MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel6->Color=clTeal;
	Label4->Font->Color=clBlack;
	Label5->Font->Color=clBlack;
	Panel10->Visible=true;
	Image10->Visible=false;
	Image11->Visible=true;
	Label2->Font->Color=clWhite;
Label8->Font->Color=clWhite;
Panel8->Visible=false;
Image5->Visible=false;
Image4->Visible=true;
	Panel87->Visible=false;
	Label88->Font->Color=clWhite;
	Image7->Visible=false;
	Image6->Visible=true;
		PEA->Color=clTeal;
	Label3->Font->Color=clWhite;
	Label6->Font->Color=clWhite;
	Label7->Font->Color=clWhite;
	Panel9->Visible=false;
	Image9->Visible=false;
	Image8->Visible=true;
		Panel57->Visible=false;
	Label48->Font->Color=clWhite;
	Label49->Font->Color=clWhite;
	Image12->Visible=true;
	Image13->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel6MouseLeave(TObject *Sender)
{
	Panel6->Color=clTeal;
	Label4->Font->Color=clWhite;
	Label5->Font->Color=clWhite;
	Panel10->Visible=false;
		Image10->Visible=true;
	Image11->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::PEAMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
	PEA->Color=clTeal;
	Label3->Font->Color=clBlack;
	Label6->Font->Color=clBlack;
	Label7->Font->Color=clBlack;
	Panel9->Visible=true;
	Image8->Visible=false;
	Image9->Visible=true;
	Label2->Font->Color=clWhite;
Label8->Font->Color=clWhite;
Panel8->Visible=false;
Image5->Visible=false;
Image4->Visible=true;
	Panel87->Visible=false;
	Label88->Font->Color=clWhite;
	Image7->Visible=false;
	Image6->Visible=true;
		Panel6->Color=clTeal;
	Label4->Font->Color=clWhite;
	Label5->Font->Color=clWhite;
	Panel10->Visible=false;
		Image10->Visible=true;
	Image11->Visible=false;
		Panel57->Visible=false;
	Label48->Font->Color=clWhite;
	Label49->Font->Color=clWhite;
	Image12->Visible=true;
	Image13->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::PEAMouseLeave(TObject *Sender)
{
	PEA->Color=clTeal;
	Label3->Font->Color=clWhite;
	Label6->Font->Color=clWhite;
	Label7->Font->Color=clWhite;
	Panel9->Visible=false;
	Image9->Visible=false;
	Image8->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel5MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
Label2->Font->Color=clBlack;
Label8->Font->Color=clBlack;
Panel8->Visible=true;
Image4->Visible=false;
Image5->Visible=true;
	Panel87->Visible=false;
	Label88->Font->Color=clWhite;
	Image7->Visible=false;
	Image6->Visible=true;
		PEA->Color=clTeal;
	Label3->Font->Color=clWhite;
	Label6->Font->Color=clWhite;
	Label7->Font->Color=clWhite;
	Panel9->Visible=false;
	Image9->Visible=false;
	Image8->Visible=true;
		Panel6->Color=clTeal;
	Label4->Font->Color=clWhite;
	Label5->Font->Color=clWhite;
	Panel10->Visible=false;
		Image10->Visible=true;
	Image11->Visible=false;
		Panel57->Visible=false;
	Label48->Font->Color=clWhite;
	Label49->Font->Color=clWhite;
	Image12->Visible=true;
	Image13->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel5MouseLeave(TObject *Sender)
{
Label2->Font->Color=clWhite;
Label8->Font->Color=clWhite;
Panel8->Visible=false;
Image5->Visible=false;
Image4->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label1MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label1->Font->Color=clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label1MouseLeave(TObject *Sender)
{
	Label1->Font->Color=clWhite;
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Label9MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label9->Font->Color=clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label9MouseLeave(TObject *Sender)
{
	Label9->Font->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label10MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label10->Font->Color=clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label10MouseLeave(TObject *Sender)
{
	Label10->Font->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel12MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel12->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel12MouseLeave(TObject *Sender)
{
	Panel12->Font->Color=clWhite;
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Label12MouseLeave(TObject *Sender)
{
	Label12->Font->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label12MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Label12->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel12Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label12Click(TObject *Sender)
{
	Panel13->Visible=false;
	Panel13->Width=337;
	Panel127->Width=0;
	Panel8->Enabled=true;
	Panel5->Enabled=true;
	/*if (Panel2->Enabled==false) {
	Form2->Enabled=true;
	Panel2->Enabled=true;
	Panel3->Enabled=true;
	Panel4->Enabled=true;
	Panel1->Enabled=true;
	Label1->Enabled=true;
	Panel5->Enabled=true;
	Label2->Enabled=true;
	PEA->Enabled=true;
	Label3->Enabled=true;
	Panel6->Enabled=true;
	Label4->Enabled=true;
	Panel7->Enabled=true;
	Panel8->Enabled=true;
	Panel9->Enabled=true;
	Panel10->Enabled=true;
	Label6->Enabled=true;
	Label7->Enabled=true;
	Label8->Enabled=true;
	Label9->Enabled=true;
	Label10->Enabled=true;
	Panel11->Enabled=true;
	Panel14->Enabled=true;
	Edit1->Enabled=true;
	Edit2->Enabled=true;
	Panel15->Enabled=true;
	Panel16->Enabled=true;
	CheckBox1->Enabled=true;
	Label13->Enabled=true;
	Panel17->Enabled=true;
	Panel18->Enabled=true;
	Edit3->Enabled=true;
	Panel19->Enabled=true;
	Pdaftar->Enabled=true;
	Edit4->Enabled=true;
	Edit5->Enabled=true;
	Edit6->Enabled=true;
	Panel21->Enabled=true;
	Panel22->Enabled=true;
	CheckBox2->Enabled=true;
	Label14->Enabled=true;
	Panel23->Enabled=true;
	Edit7->Enabled=true;
	Panel24->Enabled=true;
	Panel20->Enabled=true;
	Edit8->Enabled=true;
	Label15->Enabled=true;
	Edit9->Enabled=true;
	Label16->Enabled=true;
	}*/
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel16Click(TObject *Sender)
{
Edit1->Clear();
Edit2->Clear();
Panel14->Width=0;
Panel18->Width=0;
Label2->Font->Color=clWhite;
Label8->Font->Color=clWhite;
Panel8->Visible=false;
Image5->Visible=false;
Image4->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel5Click(TObject *Sender)
{
Panel14->Width=1400;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label2Click(TObject *Sender)
{
Panel14->Width=1400;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label8Click(TObject *Sender)
{
Panel14->Width=1400;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel17Click(TObject *Sender)
{
if (Panel18->Width==0)
{
Panel18->Width=224;
}
else if (Panel18->Width==224) {
         Panel18->Width=0;
	 }

Edit3->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel19Click(TObject *Sender)
{
if(Edit3->Text=="3dot")
{
	Edit3->Clear();
	Pdaftar->Width=857;
}
else if(Edit3->Text!="3dot")
{
	Panel18->Width=0;
	Edit3->Clear();
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel15Click(TObject *Sender)
{
String Bug,Bug2;
Bug="'";
Bug2="'or=or'";
if (Edit1->Text==Bug && Edit2->Text==Bug || Edit1->Text==Bug || Edit2->Text==Bug || Edit1->Text==Bug2 && Edit2->Text==Bug2 || Edit1->Text==Bug2 || Edit2->Text==Bug2) {
		MessageBoxA(0,"Ooooo....\nTidak Bisa!!!","Dasar Idiot!!", MB_OK | MB_ICONWARNING);
		}
else {
DM1->Qlogin->Close();
DM1->Qlogin->SQL->Clear();
DM1->Qlogin->SQL->Add("select *from login where username='"+Edit1->Text+"'");
DM1->Qlogin->Open();
		if(!DM1->Qlogin->IsEmpty())
		{
			if(DM1->Qlogin->FieldByName("password")->AsString == Edit2->Text)
			{
				MessageBoxA(0,"Selamat Datang Admin . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
				Panel27->Width=1400;
				Label187->Caption = Edit1->Text;
				Edit1->Clear();
				Edit2->Clear();

			}
			else
			{
				MessageBoxA(0,"Password Salah!","Poliklinik",MB_ICONINFORMATION | MB_OK);
				Edit2->Clear();
			}
		}
		else
		{
			MessageBoxA(0,"Username Salah!","Poliklinik",MB_ICONINFORMATION | MB_OK);
			Edit1->Clear();
			Edit2->Clear();

		}
		}

}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel22Click(TObject *Sender)
{
Edit4->Clear();
Edit5->Clear();
Edit6->Clear();
Panel18->Width=0;
Pdaftar->Width=0;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label1DblClick(TObject *Sender)
{
Panel23->BringToFront();
if (Panel23->Width==0) {
Panel23->Visible=true;
Panel23->Width=178;
Edit7->Clear();
}
else if(Panel23->Width==178)
{
	Panel23->Visible=false;
	Panel23->Width=0;
	Edit7->Clear();
}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel24Click(TObject *Sender)
{
if(Edit7->Text=="3dot")
{
	Panel23->Width=0;
	Panel24->BringToFront();
	Panel14->Width=1400;
	Panel27->BringToFront();
	Panel27->Width=1400;
	Edit7->Clear();
}
else if(Edit7->Text!="3dot")
{
	Panel23->Width=0;
	Panel23->Visible=false;
	Edit7->Clear();
}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel26Click(TObject *Sender)
{
	Panel20->Width=0;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel9Click(TObject *Sender)
{
	Panel20->Width=1400;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::PEAClick(TObject *Sender)
{
	Panel20->Width=1400;
	Panel20->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label3Click(TObject *Sender)
{
	Panel20->Width=1400;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label6Click(TObject *Sender)
{
	Panel20->Width=1400;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label7Click(TObject *Sender)
{
	Panel20->Width=1400;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel40Click(TObject *Sender)
{
Edit1->Clear();
Edit2->Clear();
Panel27->Width=0;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel28MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel34->Visible=true;
	Panel28->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel28MouseLeave(TObject *Sender)
{
	Panel34->Visible=false;
	Panel28->Font->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel29MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel35->Visible=true;
	Panel29->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel29MouseLeave(TObject *Sender)
{
	Panel35->Visible=false;
	Panel29->Font->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel30MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel36->Visible=true;
	Panel30->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel30MouseLeave(TObject *Sender)
{
	Panel36->Visible=false;
	Panel30->Font->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel31MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel37->Visible=true;
	Panel31->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel31MouseLeave(TObject *Sender)
{
	Panel37->Visible=false;
	Panel31->Font->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel33MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel39->Visible=true;
	Panel33->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel33MouseLeave(TObject *Sender)
{
	Panel39->Visible=false;
	Panel33->Font->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel25Click(TObject *Sender)
{
		DM1->Qpegawai->Close();
		DM1->Qpegawai->SQL->Clear();
		DM1->Qpegawai->SQL->Add("select *from pegawai where namapegawai='"+Edit8->Text+"'");
		DM1->Qpegawai->Open();

		if(!DM1->Qpegawai->IsEmpty())
		{
			if(DM1->Qpegawai->FieldByName("nip")->AsString == Edit9->Text)
			{

			String g;
			g = DM1->Qpegawai->FieldByName("directory")->AsString;
				MessageBoxA(0,"Selamat Bekerja . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
				Panel45->Width=1400;
				Panel55->BringToFront();
				Panel20->Width=0;
				Edit8->Clear();
				Edit9->Clear();
				Lnip->Caption = DM1->Qpegawai->FieldByName("nip")->AsString;
				Lnamapegawai->Caption = DM1->Qpegawai->FieldByName("namapegawai")->AsString;
				Lalamatpegawai->Caption = DM1->Qpegawai->FieldByName("alamatpegawai")->AsString;
				Lteleponpegawai->Caption = DM1->Qpegawai->FieldByName("teleponpegawai")->AsString;
				Ltgllahirpegawai->Caption = DM1->Qpegawai->FieldByName("tgllahirpegawai")->AsDateTime;
				Ljeniskelamin->Caption = DM1->Qpegawai->FieldByName("jeniskelaminpegawai")->AsString;
				fotopegawai1->Picture->LoadFromFile(g);

		}
		else
		{
			MessageBoxA(0,"NIP Salah!","Poliklinik",MB_ICONINFORMATION | MB_OK);
			Edit9->Clear();
		}
		}
		else
		{
			MessageBoxA(0,"Username Salah!","Info Aplikasi",MB_ICONINFORMATION | MB_OK);
			Edit8->Clear();
			Edit9->Clear();
		}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel43Click(TObject *Sender)
{
Panel41->Width=0;
Panel25->BringToFront();
Panel25->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel6Click(TObject *Sender)
{
	Panel44->Width=1373;
}
//---------------------------------------------------------------------------




void __fastcall TPoliklinik::Panel28Click(TObject *Sender)
{
if (Panel46->Width==1062) {
	Panel46->Width=0;
}
else {
Panel46->Width=1062;
Panel46->BringToFront();
Panel67->Height=34;
Panel68->Width=0;
Panel43->Width=0;
Panel125->Width=0;
Panel32->Width=0;
Edit23->Clear();
Edit24->Clear();
Edit25->Clear();
Edit26->Clear();
Edit35->Clear();
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel21Click(TObject *Sender)
{
if(Edit4->Text == "" && Edit5->Text	== ""&& Edit6->Text	== "")
	{
		MessageBoxA(0,"Lengkapi Data Admin ","Poliklinik", MB_ICONWARNING | MB_OK);
	}

	else
	{
		DM1->Qlogin->Close();
		DM1->Qlogin->SQL->Clear();
		DM1->Qlogin->SQL->Add("select *from login");
		DM1->Qlogin->Open();

		if(DM1->Qlogin->FieldByName("username")->AsString == Edit4->Text)
		{
			MessageBoxA(0,"Sudah Ada Yang Memakai Username Itu","Poliklinik",MB_ICONWARNING | MB_OK);
			Edit4->Clear();
			Edit5->Clear();
			Edit6->Clear();

		}
		else
		{
			DM1->Qlogin->Append();
			DM1->Qlogin->FieldByName("username")->AsString = Edit4->Text;
			DM1->Qlogin->FieldByName("password")->AsString = Edit6->Text;
			DM1->Qlogin->Post();
			MessageBoxA(0,"Anda Berhasil Mendaftar Sebagai Admin","Poliklinik",MB_ICONINFORMATION | MB_OK);
			Edit4->Clear();
			Edit5->Clear();
			Edit6->Clear();
			Pdaftar->Width=0;
		}

	}
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel47Click(TObject *Sender)
{
String nip;
nip = Edit23->Text;
if (Edit23->Text == "" && Edit24->Text == "" && Edit25->Text =="" && Edit26->Text == "") {
	MessageBoxA(0,"Isikan Form Pegawai Dengan Lengkap . . .","Poliklinik",MB_OK | MB_ICONINFORMATION );
	}
else {
		DM1->Qpegawai->Close();
		DM1->Qpegawai->SQL->Clear();
		DM1->Qpegawai->SQL->Add("select * from pegawai where nip = '"+Edit23->Text+"'");
		DM1->Qpegawai->Open();
			if (DM1->Qpegawai->FieldByName("nip")->AsString == nip) {
				MessageBoxA(0,"NIP sudah terdaftar sebelumnya!","Poliklinik",MB_ICONWARNING | MB_OK);
			}

			else {
				String jk;
				if (RadioButton1->Checked==true)
					{
						jk="Pria";
					}
				else if (RadioButton2->Checked==true)
					{
						jk="Wanita";
					}
				DM1->Qpegawai->Append();
				DM1->Qpegawai->FieldByName("nip")->AsString = Edit23->Text;
				DM1->Qpegawai->FieldByName("namapegawai")->AsString = Edit24->Text;
				DM1->Qpegawai->FieldByName("alamatpegawai")->AsString = Edit25->Text;
				DM1->Qpegawai->FieldByName("teleponpegawai")->AsString = Edit26->Text;
				DM1->Qpegawai->FieldByName("tgllahirpegawai")->AsDateTime = DateTimePicker1->Date ;
				DM1->Qpegawai->FieldByName("jeniskelaminpegawai")->AsString = jk;
				DM1->Qpegawai->FieldByName("directory")->AsString = Edit51->Text;
				DM1->Qpegawai->Post();
				DateTimePicker1->Date=Now();
				MessageBoxA (0,"Anda berhasil menambahkan pegawai baru . . .","Poliklinik",
				MB_ICONINFORMATION | MB_OK);
				Edit23->Clear();
				Edit24->Clear();
				Edit25->Clear();
				Edit26->Clear();
				RadioButton1->Checked=false;
				RadioButton2->Checked=false;
				}
		}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel42Click(TObject *Sender)
{
if(Edit11->Text == "" && Edit12->Text == "" && Edit13->Text == "" &&Edit15->Text == ""&& Edit22->Text == "" )
	{
		MessageBoxA(0,"Lengkapi Data Pasien ","Poliklinik", MB_ICONWARNING | MB_OK);
	}

	else
	{
		DM1->Qpasien->Close();
		DM1->Qpasien->SQL->Clear();
		DM1->Qpasien->SQL->Add("select *from pasien");
		DM1->Qpasien->Open();

		if(DM1->Qpasien->FieldByName("nopasien")->AsString == Edit10->Text)
		{
			MessageBoxA(0,"No Pasien Sudah Ada Yang Memakai . . .","Poliklinik",MB_ICONWARNING | MB_OK);
			Edit10->Clear();
			Edit11->Clear();
			Edit12->Clear();
			Edit13->Clear();
			Edit15->Clear();

		}
		else
		{
			DM1->Qpasien->Append();
			DM1->Qpasien->FieldByName("nopasien")->AsString = Edit10->Text;
			DM1->Qpasien->FieldByName("namapasien")->AsString = Edit11->Text;
			DM1->Qpasien->FieldByName("alamatpasien")->AsString = Edit12->Text;
			DM1->Qpasien->FieldByName("teleponpasien")->AsString = Edit13->Text;
			DM1->Qpasien->FieldByName("tgllahirpasien")->AsDateTime = DateTimePicker3->Date;
			DM1->Qpasien->FieldByName("jeniskelaminpasien")->AsString = Edit15->Text;
			DM1->Qpasien->FieldByName("tglregistrasi")->AsDateTime = DateTimePicker4->Date;
			DM1->Qpasien->Post();
			MessageBoxA(0,"Anda Berhasil Mendaftar Pasien Baru Di Poliklinik . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
			Edit10->Clear();
			Edit11->Clear();
			Edit12->Clear();
			Edit13->Clear();
			Edit15->Clear();
			DateTimePicker3->Date=Now();
			DateTimePicker4->Date=Now();
			Edit20->Clear();
			Edit22->Clear();
		}

	}

}

//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel52Click(TObject *Sender)
{
Panel63->Visible=true;
if(Edit20->Text=="" &&Edit22->Text=="" &&Edit29->Text=="" &&Edit30->Text=="" &&Edit31->Text=="" &&Edit32->Text=="" )
{
	MessageBoxA(0,"Lengkapi Data Pasien Diatas","Poliklinik",MB_ICONINFORMATION | MB_OK);
}
		DM1->Qpendaftaran->Close();
		DM1->Qpendaftaran->SQL->Clear();
		DM1->Qpendaftaran->SQL->Add("select *from pendaftaran");
		DM1->Qpendaftaran->Open();

		if(DM1->Qpendaftaran->FieldByName("nopendaftaran")->AsString == Edit20->Text)
		{
			MessageBoxA(0,"Sudah Ada Yang Memakai No Pendaftaran Itu","Poliklinik",MB_ICONWARNING | MB_OK);
			Edit20->Clear();
		}
		else
		{
			DM1->Qpendaftaran->Append();
			DM1->Qpendaftaran->FieldByName("nopendaftaran")->AsString = Edit20->Text;
			DM1->Qpendaftaran->FieldByName("tglpendaftaran")->AsDateTime = DateTimePicker2->Date;
			DM1->Qpendaftaran->FieldByName("nourut")->AsString = Edit22->Text;
			DM1->Qpendaftaran->FieldByName("nopasien")->AsString = Edit29->Text;
			DM1->Qpendaftaran->FieldByName("nopemeriksaan")->AsString = Edit30->Text;
			DM1->Qpendaftaran->FieldByName("idjenisbiaya")->AsString = Edit31->Text;
			DM1->Qpendaftaran->FieldByName("kodejadwal")->AsString = Edit32->Text;
			DM1->Qpendaftaran->Post();
			Edit20->Clear();
			DateTimePicker2->Date=Now();
			Edit22->Clear();
			Edit29->Clear();
			Edit30->Clear();
			Edit31->Clear();
			Edit32->Clear();
			Panel41->BringToFront();
			Panel41->Width=424;
		}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel53Click(TObject *Sender)
{
  if (OpenDialog1->Execute())
  {
	if (FileExists(OpenDialog1->FileName)) {

	  Image1->Picture->LoadFromFile(OpenDialog1->FileName);
	   Edit51->Text = OpenDialog1->FileName;
	}
	else{
	  throw(MessageBoxA(0,"File Tidak Ada!","Poliklinik",MB_OK | MB_ICONINFORMATION ));
	}
  }
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel54Click(TObject *Sender)
{
String q;
q = "C:\Users\Hp 14\Desktop\A&H\Win32\Release\img\cover.jpg";
Panel45->Width=0;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel59Click(TObject *Sender)
{
Panel134->Width=424;
Panel134->BringToFront();
Panel63->Visible=true;

}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel63Click(TObject *Sender)
{
Edit20->Clear();
Edit22->Clear();
Edit29->Clear();
Edit30->Clear();
Edit31->Clear();
Edit32->Clear();
			Edit10->Clear();
			Edit11->Clear();
			Edit12->Clear();
			Edit13->Clear();
			Edit15->Clear();
			Edit50->Clear();
			Edit49->Clear();
Panel55->Width=424;
Panel63->Visible=false;
Panel64->Width=0;
Panel41->Width=0;
Panel83->Width=0;
Panel134->Width=0;
		Label56->Caption="-";
		Label57->Caption="-";
		Label58->Caption="-";
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel65Click(TObject *Sender)
{
	DM1->Qpasien->Close();
	DM1->Qpasien->SQL->Clear();
	DM1->Qpasien->SQL->Add("select *from pasien where nopasien ='"+Edit33->Text+"'");
	DM1->Qpasien->Open();
	if (!DM1->Qpasien->IsEmpty())
	{
	Label56->Caption = DM1->Qpasien->FieldByName("nopasien")->AsString;
	Label57->Caption = DM1->Qpasien->FieldByName("namapasien")->AsString;
	Label58->Caption = DM1->Qpasien->FieldByName("jeniskelaminpasien")->AsString;
	Edit33->Clear();
	}
	DM1->Qjadwalpraktek->Close();
	DM1->Qjadwalpraktek->SQL->Clear();
	DM1->Qjadwalpraktek->SQL->Add("select *from jadwalpraktek where kodejadwal ='"+Label56->Caption+"'");
	DM1->Qjadwalpraktek->Open();
	if(!DM1->Qjadwalpraktek->IsEmpty())
	{
		Edit34->Text = DM1->Qjadwalpraktek->FieldByName("kodejadwal")->AsString;
		Edit40->Text = DM1->Qjadwalpraktek->FieldByName("kodedokter")->AsString;
		ComboBox1->Text = DM1->Qjadwalpraktek->FieldByName("hari")->AsString;
		ComboBox2->Text = DM1->Qjadwalpraktek->FieldByName("jammulai")->AsString;
		ComboBox3->Text = DM1->Qjadwalpraktek->FieldByName("jamselesai")->AsString;

	}

	else if(DM1->Qpasien->IsEmpty()){
	MessageBoxA(0,"Pasien Belum Terdaftar","Poliklinik", MB_ICONWARNING | MB_OK);
}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel66Click(TObject *Sender)
{
String combobox,combobox1;
if(ComboBox1->Text == ""  && ComboBox2->Text == "" &&ComboBox3->Text == "" )
	{
		MessageBoxA(0,"Isikan Jadwal Prakter","Poliklinik", MB_ICONWARNING | MB_OK);
	}
	else {
		if (ComboBox1->Text=="Senin")
	{
		combobox="Senin";
	}
	else if (ComboBox1->Text=="Selasa")
	{
		combobox="Selasa";
	}
	else if (ComboBox1->Text=="Rabu")
	{
		combobox="Rabu";
	}
	else if (ComboBox1->Text=="Kamis")
	{
		combobox="Kamis";
	}
	else if (ComboBox1->Text=="Jumat")
	{
		combobox="Jumat";
	}
	else if (ComboBox1->Text=="Sabtu")
	{
		combobox="Sabtu";
	}
	else if (ComboBox1->Text=="Minggu")
	{
		combobox="Minggu";
	}
	else if (ComboBox2->Text=="01:00")
	{
		combobox1="01:00";
	}
	else if (ComboBox2->Text=="02:00")
	{
		combobox1="02:00";
	}
	else if (ComboBox2->Text=="03:00")
	{
		combobox1="03:00";
	}
	else if (ComboBox2->Text=="04:00")
	{
		combobox1="04:00";
	}
	else if (ComboBox2->Text=="05:00")
	{
		combobox1="06:00";
	}
	else if (ComboBox2->Text=="07:00")
	{
		combobox1="07:00";
	}
	else if (ComboBox2->Text=="08:00")
	{
		combobox1="08:00";
	}
	else if (ComboBox2->Text=="09:00")
	{
		combobox1="09:00";
	}
	else if (ComboBox2->Text=="10:00")
	{
		combobox1="10:00";
	}
	else if (ComboBox2->Text=="11:00")
	{
		combobox1="11:00";
	}
	else if (ComboBox2->Text=="12:00")
	{
		combobox1="12:00";
	}
	else if (ComboBox2->Text=="13:00")
	{
		combobox1="13:00";
	}
	else if (ComboBox2->Text=="14:00")
	{
		combobox1="14:00";
	}
	else if (ComboBox2->Text=="15:00")
	{
		combobox1="15:00";
	}
	else if (ComboBox2->Text=="16:00")
	{
		combobox1="16:00";
	}
	else if (ComboBox2->Text=="17:00")
	{
		combobox1="17:00";
	}
	else if (ComboBox2->Text=="18:00")
	{
		combobox1="18:00";
	}
	else if (ComboBox2->Text=="19:00")
	{
		combobox1="19:00";
	}
	else if (ComboBox2->Text=="20:00")
	{
		combobox1="20:00";
	}
	else if (ComboBox2->Text=="21:00")
	{
		combobox1="21:00";
	}
	else if (ComboBox2->Text=="22:00")
	{
		combobox1="22:00";
	}
	else if (ComboBox2->Text=="23:00")
	{
		combobox1="23:00";
	}
	else if (ComboBox2->Text=="24:00")
	{
		combobox1="24:00";
	}
		else if (ComboBox3->Text=="01:00")
	{
		combobox1="01:00";
	}
	else if (ComboBox3->Text=="02:00")
	{
		combobox1="02:00";
	}
	else if (ComboBox3->Text=="03:00")
	{
		combobox1="03:00";
	}
	else if (ComboBox3->Text=="04:00")
	{
		combobox1="04:00";
	}
	else if (ComboBox3->Text=="05:00")
	{
		combobox1="06:00";
	}
	else if (ComboBox3->Text=="07:00")
	{
		combobox1="07:00";
	}
	else if (ComboBox3->Text=="08:00")
	{
		combobox1="08:00";
	}
	else if (ComboBox3->Text=="09:00")
	{
		combobox1="09:00";
	}
	else if (ComboBox3->Text=="10:00")
	{
		combobox1="10:00";
	}
	else if (ComboBox3->Text=="11:00")
	{
		combobox1="11:00";
	}
	else if (ComboBox3->Text=="12:00")
	{
		combobox1="12:00";
	}
	else if (ComboBox3->Text=="13:00")
	{
		combobox1="13:00";
	}
	else if (ComboBox3->Text=="14:00")
	{
		combobox1="14:00";
	}
	else if (ComboBox3->Text=="15:00")
	{
		combobox1="15:00";
	}
	else if (ComboBox3->Text=="16:00")
	{
		combobox1="16:00";
	}
	else if (ComboBox3->Text=="17:00")
	{
		combobox1="17:00";
	}
	else if (ComboBox3->Text=="18:00")
	{
		combobox1="18:00";
	}
	else if (ComboBox3->Text=="19:00")
	{
		combobox1="19:00";
	}
	else if (ComboBox3->Text=="20:00")
	{
		combobox1="20:00";
	}
	else if (ComboBox3->Text=="21:00")
	{
		combobox1="21:00";
	}
	else if (ComboBox3->Text=="22:00")
	{
		combobox1="22:00";
	}
	else if (ComboBox3->Text=="23:00")
	{
		combobox1="23:00";
	}
	else if (ComboBox3->Text=="24:00")
	{
		combobox1="24:00";
	}
	}
		DM1->Qjadwalpraktek->Close();
		DM1->Qjadwalpraktek->SQL->Clear();
		DM1->Qjadwalpraktek->SQL->Add("select *from jadwalpraktek");
		DM1->Qjadwalpraktek->Open();
		DM1->Qjadwalpraktek->Append();
		DM1->Qjadwalpraktek->FieldByName("kodejadwal")->AsString = Edit34->Text;
		DM1->Qjadwalpraktek->FieldByName("kodedokter")->AsString = Edit40->Text;
		DM1->Qjadwalpraktek->FieldByName("jammulai")->AsString = ComboBox2->Text;
		DM1->Qjadwalpraktek->FieldByName("jamselesai")->AsString = ComboBox3->Text;
		DM1->Qjadwalpraktek->FieldByName("hari")->AsString = ComboBox1->Text;
		DM1->Qjadwalpraktek->Post();
		MessageBoxA(0,"Anda Berhasil Mengatur Jadwal Praktek","Poliklinik",MB_ICONINFORMATION | MB_OK);
		Edit33->Clear();
		Edit34->Clear();
		Edit40->Clear();
		ComboBox1->Text="";
		ComboBox2->Text="";
		ComboBox3->Text="";
		Label56->Caption="-";
		Label57->Caption="-";
		Label58->Caption="-";
		}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel60Click(TObject *Sender)
{
Panel64->Width=424;
Panel64->BringToFront();
		Label56->Caption="-";
		Label57->Caption="-";
		Label58->Caption="-";
Panel63->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel67Click(TObject *Sender)
{
if (Panel67->Height==34) {
	for(Panel67->Height = Panel67->Height ;Panel67->Height < 136 ; Panel67->Height++);
}
else {
for(Panel67->Height = Panel67->Height ;Panel67->Height > 34  ; Panel67->Height--);
}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel48Click(TObject *Sender)
{
if(Edit35->Text=="")
{
	MessageBoxA(0,"Anda Harus Mengisi NIP Untuk Mencari . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qpegawai->Close();
	DM1->Qpegawai->SQL->Clear();
	DM1->Qpegawai->SQL->Add("select *from pegawai where nip ='"+Edit35->Text+"'");
	DM1->Qpegawai->Open();

	if(!DM1->Qpegawai->IsEmpty())
	{
		String jkp,a;
		jkp = DM1->Qpegawai->FieldByName("jeniskelaminpegawai")->AsString;
		a = DM1->Qpegawai->FieldByName("directory")->AsString;
		Edit23->Text = DM1->Qpegawai->FieldByName("nip")->AsString;
		Edit24->Text = DM1->Qpegawai->FieldByName("namapegawai")->AsString;
		Edit25->Text = DM1->Qpegawai->FieldByName("alamatpegawai")->AsString;
		Edit26->Text = DM1->Qpegawai->FieldByName("teleponpegawai")->AsString;
		Image1->Picture->LoadFromFile(a);
		DateTimePicker1->Date = DM1->Qpegawai->FieldByName("tgllahirpegawai")->AsDateTime;
		if (jkp=="Pria")
		{
			RadioButton1->Checked=true;
		}
		else if (jkp=="Wanita")
		{
			RadioButton2->Checked=true;
		}
	}
	else if(DM1->Qpegawai->IsEmpty())
	{
		MessageBoxA(0,"Maaf NIP Pegawai Tidak Terdaftar . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit23->Clear();
		Edit24->Clear();
		Edit25->Clear();
		Edit26->Clear();
	}

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Edit35Change(TObject *Sender)
{
	DM1->Qpegawai->Close();
	DM1->Qpegawai->SQL->Clear();
	DM1->Qpegawai->SQL->Add("select*from pegawai where nip like '%"+Edit35->Text+"%'");
	DM1->Qpegawai->Open();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel49Click(TObject *Sender)
{
if(Edit23->Text=="" && Edit24->Text=="" && Edit25->Text=="" && Edit26->Text=="" || DateTimePicker1->Date== Now())
{
		MessageBoxA(0,"Cari Data Yang Ingin Diubah Terlebih Dahulu  . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
}
else {
	DM1->Qpegawai->Close();
	DM1->Qpegawai->SQL->Clear();
	DM1->Qpegawai->SQL->Add("select *from pegawai where nip ='"+Edit35->Text+"'");
	DM1->Qpegawai->Open();
	DM1->Qpegawai->Edit();

	if(	Edit23->Text == DM1->Qpegawai->FieldByName("nip")->AsString &&
	Edit24->Text == DM1->Qpegawai->FieldByName("namapegawai")->AsString && Edit25->Text == DM1->Qpegawai->FieldByName("alamatpegawai")->AsString &&
	Edit26->Text == DM1->Qpegawai->FieldByName("teleponpegawai")->AsString && DateTimePicker1->Date == DM1->Qpegawai->FieldByName("tgllahirpegawai")->AsDateTime ||
	Edit51->Text==DM1->Qpegawai->FieldByName("directory")->AsString)
	{
		MessageBoxA(0,"Anda Belum Mengubah Data Pegawai . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
		DM1->Qpegawai->FieldByName("nip")->AsString = Edit23->Text;
		DM1->Qpegawai->FieldByName("namapegawai")->AsString = Edit24->Text;
		DM1->Qpegawai->FieldByName("alamatpegawai")->AsString = Edit25->Text;
		DM1->Qpegawai->FieldByName("teleponpegawai")->AsString = Edit26->Text;
		DM1->Qpegawai->FieldByName("tgllahirpegawai")->AsDateTime = DateTimePicker1->Date;
		DM1->Qpegawai->FieldByName("directory")->AsString = Edit51->Text;
		DM1->Qpegawai->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Data Pegawai ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit23->Clear();
		Edit24->Clear();
		Edit25->Clear();
		Edit26->Clear();
	}
	}
	}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel50Click(TObject *Sender)
{
if(Edit35->Text=="")
{
	MessageBoxA(0,"Cari NIP Pegawai Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qpegawai->Close();
	DM1->Qpegawai->SQL->Clear();
	DM1->Qpegawai->SQL->Add("delete from pegawai where nip ='"+Edit23->Text+"'");
	DM1->Qpegawai->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Data Pegawai","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
	Edit23->Clear();
		Edit24->Clear();
		Edit25->Clear();
		Edit26->Clear();

}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel51Click(TObject *Sender)
{
rpegawai->PrepareReport();
rpegawai->ShowReport();
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel29Click(TObject *Sender)
{
if (Panel68->Width==1062) {
	Panel68->Width=0;
}
else {
Panel46->Width=0;
Panel68->Width=1062;
Panel68->BringToFront();
Panel67->Height=34;
Panel125->Width=0;
Panel43->Width=0;
Edit36->Clear();
Panel32->Width=0;
		Edit37->Clear();
		Edit38->Clear();
		Edit39->Clear();
		Edit28->Clear();
}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel72Click(TObject *Sender)
{
if (Edit28->Text == "" && Edit36->Text == "" && Edit37->Text =="" && Edit38->Text == "") {
	MessageBoxA(0,"Isikan Form Dokter Dengan Lengkap . . .","Poliklinik",MB_OK | MB_ICONINFORMATION );
		}
		else {
	DM1->Qdokter->Close();
	DM1->Qdokter->SQL->Clear();
	DM1->Qdokter->SQL->Add("select *from dokter where kodedokter='"+Edit28->Text+"'");
	DM1->Qdokter->Open();
	   if (DM1->Qdokter->FieldByName("kodedokter")->AsString == Edit28->Text) {
		  MessageBoxA(0,"Ooopss...\nKode Dokter Sudah Terdaftar Sebelumnya...\nSilahkan isi dengan kode lain!","Poliklinik", MB_ICONWARNING | MB_OK);
	   }
		else
		{
		DM1->Qdokter->Close();
		DM1->Qdokter->SQL->Clear();
		DM1->Qdokter->SQL->Add("select * from dokter");
		DM1->Qdokter->Open();
		DM1->Qdokter->Append();
		DM1->Qdokter->FieldByName("kodedokter")->AsString = Edit28->Text;
		DM1->Qdokter->FieldByName("namadokter")->AsString = Edit36->Text;
		DM1->Qdokter->FieldByName("alamatdokter")->AsString = Edit37->Text;
		DM1->Qdokter->FieldByName("telepondokter")->AsString = Edit38->Text;
		DM1->Qdokter->FieldByName("directory")->AsString = Edit51->Text;
		DM1->Qdokter->Post();
		MessageBoxA (0,"Anda Berhasil Menambah Jumlah Dokter . . .","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit28->Clear();
		Edit36->Clear();
		Edit37->Clear();
		Edit38->Clear();
			}
		}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel71Click(TObject *Sender)
{
if(Edit39->Text=="")
{
	MessageBoxA(0,"Anda Harus Mengisi Kode Dokter Untuk Mencari . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qdokter->Close();
	DM1->Qdokter->SQL->Clear();
	DM1->Qdokter->SQL->Add("select *from dokter where kodedokter ='"+Edit39->Text+"'");
	DM1->Qdokter->Open();

	if(!DM1->Qdokter->IsEmpty())
	{
		Edit28->Text = DM1->Qdokter->FieldByName("kodedokter")->AsString;
		Edit36->Text = DM1->Qdokter->FieldByName("namadokter")->AsString;
		Edit37->Text = DM1->Qdokter->FieldByName("alamatdokter")->AsString;
		Edit38->Text = DM1->Qdokter->FieldByName("telepondokter")->AsString;

	}
	else if(DM1->Qdokter->IsEmpty())
	{
		MessageBoxA(0,"Maaf Kode Dokter Tidak Terdaftar . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit36->Clear();
		Edit37->Clear();
		Edit38->Clear();
		Edit39->Clear();
		Edit28->Clear();
	}

}
}
//---------------------------------------------------------------------------




void __fastcall TPoliklinik::Panel69Click(TObject *Sender)
{
if(Edit39->Text=="")
{
	MessageBoxA(0,"Cari Kode Dokter Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qpegawai->Close();
	DM1->Qpegawai->SQL->Clear();
	DM1->Qpegawai->SQL->Add("delete from dokter where kodedokter ='"+Edit39->Text+"'");
	DM1->Qpegawai->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Data Dokter","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit36->Clear();
		Edit37->Clear();
		Edit38->Clear();
		Edit39->Clear();
		Edit28->Clear();

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Edit39Change(TObject *Sender)
{
	DM1->Qdokter->Close();
	DM1->Qdokter->SQL->Clear();
	DM1->Qdokter->SQL->Add("select*from dokter where kodedokter like '%"+Edit39->Text+"%'");
	DM1->Qdokter->Open();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel70Click(TObject *Sender)
{
rdokter->PrepareReport();
rdokter->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel73Click(TObject *Sender)
{
if(Edit28->Text == "" && Edit36->Text == "" && Edit37->Text == ""  && Edit38->Text == "" || Edit51->Text =="D:\A&H\Win32\Release\img\oaosdas.jpg")
	{
		MessageBoxA(0,"Cari Data Yang Ingin Dihapus Terlebih Dahulu . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}

	else {
	DM1->Qdokter->Close();
	DM1->Qdokter->SQL->Clear();
	DM1->Qdokter->SQL->Add("select *from dokter where kodedokter ='"+Edit28->Text+"'");
	DM1->Qdokter->Open();
	DM1->Qdokter->Edit();

	if(Edit28->Text == DM1->Qdokter->FieldByName("kodedokter")->AsString &&
	Edit36->Text == DM1->Qdokter->FieldByName("namadokter")->AsString && Edit37->Text == DM1->Qdokter->FieldByName("alamatdokter")->AsString &&
	Edit38->Text == DM1->Qdokter->FieldByName("directory")->AsString ||
	Edit51->Text == DM1->Qdokter->FieldByName("telepondokter")->AsString)
	{
		MessageBoxA(0,"Anda Belum Mengubah Data Dokter . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
		DM1->Qdokter->FieldByName("kodedokter")->AsString = Edit28->Text ;
		DM1->Qdokter->FieldByName("namadokter")->AsString = Edit36->Text ;
		DM1->Qdokter->FieldByName("alamatdokter")->AsString = Edit37->Text ;
		DM1->Qdokter->FieldByName("telepondokter")->AsString = Edit38->Text ;
		DM1->Qdokter->FieldByName("directory")->AsString = Edit51->Text;
		DM1->Qdokter->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Data Dokter ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit36->Clear();
		Edit37->Clear();
		Edit38->Clear();
		Edit39->Clear();
		Edit28->Clear();
	}
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel74Click(TObject *Sender)
{
 if (OpenDialog1->Execute())
  {
	if (FileExists(OpenDialog1->FileName)) {

	  Image2->Picture->LoadFromFile(OpenDialog1->FileName);
	  Edit51->Text = OpenDialog1->FileName;
	}
	else{
	  throw(MessageBoxA(0,"File Tidak Ada!","Poliklinik",MB_OK | MB_ICONINFORMATION ));
	}
  }
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel30Click(TObject *Sender)
{
if (Panel43->Width==1062) {
	Panel43->Width=0;
}
else {
		Panel43->Width=1062;
		Panel43->BringToFront();
		Panel67->Height=34;
		Panel68->Width=0;
		Panel125->Width=0;
		Panel46->Width=0;
		Panel32->Width=0;
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();
		Edit43->Clear();
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel61Click(TObject *Sender)
{
if(Edit43->Text=="")
{
	MessageBoxA(0,"Masukan Kode Obat Terlebih Dahulu . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("select *from obat where kodeobat ='"+Edit43->Text+"'");
	DM1->Qobat->Open();

	if(!DM1->Qobat->IsEmpty())
	{
		Edit14->Text = DM1->Qobat->FieldByName("kodeobat")->AsString;
		Edit21->Text = DM1->Qobat->FieldByName("namaobat")->AsString;
		Edit16->Text = DM1->Qobat->FieldByName("merk")->AsString;
		ComboBox4->Text = DM1->Qobat->FieldByName("satuan")->AsString;
		Edit41->Text = DM1->Qobat->FieldByName("hargajual")->AsString;
		Edit42->Text = DM1->Qobat->FieldByName("noresep")->AsString;
	}
	else if(DM1->Qobat->IsEmpty())
	{
		MessageBoxA(0,"Obat Tidak Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();
		Edit43->Clear();
	}

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel78Click(TObject *Sender)
{
if(	Edit14->Text == "" && Edit21->Text == "" && Edit16->Text == "" &&
	ComboBox4->Text == "" && Edit41->Text =="" || Edit42->Text == "")
	{
		MessageBoxA(0,"Cari Data Yang Ingin Dihapus Telebih Dahulu . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else {
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("select *from obat where kodeobat ='"+Edit43->Text+"'");
	DM1->Qobat->Open();
	DM1->Qobat->Edit();

	if(	Edit14->Text == DM1->Qobat->FieldByName("kodeobat")->AsString &&
	Edit21->Text == DM1->Qobat->FieldByName("namaobat")->AsString &&
	Edit16->Text == DM1->Qobat->FieldByName("merk")->AsString &&
	ComboBox4->Text == DM1->Qobat->FieldByName("satuan") &&
	Edit41->Text == DM1->Qobat->FieldByName("hargajual")||
	Edit42->Text == DM1->Qobat->FieldByName("noresep"))
	{
		MessageBoxA(0,"Anda Belum Mengubah Data Obat . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
		DM1->Qobat->FieldByName("kodeobat")->AsString = Edit14->Text ;
		DM1->Qobat->FieldByName("namaobat")->AsString = Edit21->Text ;
		DM1->Qobat->FieldByName("merk")->AsString = Edit16->Text ;
		DM1->Qobat->FieldByName("satuan")->AsString = ComboBox4->Text ;
		DM1->Qobat->FieldByName("hargajual")->AsString = Edit41->Text ;
		DM1->Qobat->FieldByName("noresep")->AsString = Edit42->Text ;
		DM1->Qobat->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Data Obat ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();
		Edit43->Clear();
	}
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel76Click(TObject *Sender)
{
robat->PrepareReport();
robat->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Edit43Change(TObject *Sender)
{
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("select*from obat where kodeobat like '%"+Edit43->Text+"%'");
	DM1->Qobat->Open();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel75Click(TObject *Sender)
{
String satuan;
if(ComboBox4->Text=="Pcs")
{
	satuan="Pcs";
}
else if(ComboBox4->Text=="Pack")
{
	satuan="Pack";
}
else if(ComboBox4->Text=="Kapsul")
{
	satuan="Kapsul";
}
else if(ComboBox4->Text=="Pill")
{
	satuan="Pill";
}
else if(ComboBox4->Text=="Sirup")
{
	satuan="Sirup";
}
else if(ComboBox4->Text=="Salep")
{
	satuan="Salep";
}

if(Edit14->Text == "" && Edit21->Text == "" && Edit16->Text == "" &&ComboBox4->Text == ""&& Edit41->Text == "" && Edit42->Text == "" )
	{
		MessageBoxA(0,"Lengkapi Seluruh Info Obat . . . ","Poliklinik", MB_ICONWARNING | MB_OK);
	}

	else
	{
		DM1->Qobat->Close();
		DM1->Qobat->SQL->Clear();
		DM1->Qobat->SQL->Add("select *from obat");
		DM1->Qobat->Open();

		if(DM1->Qobat->FieldByName("kodeobat")->AsString == Edit14->Text)
		{
		MessageBoxA(0,"No Obat Sudah Ada . . .","Poliklinik",MB_ICONWARNING | MB_OK);
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();
		Edit43->Clear();

		}
		else
		{
		DM1->Qobat->Append();
		DM1->Qobat->FieldByName("kodeobat")->AsString = Edit14->Text ;
		DM1->Qobat->FieldByName("namaobat")->AsString = Edit21->Text ;
		DM1->Qobat->FieldByName("merk")->AsString = Edit16->Text ;
		DM1->Qobat->FieldByName("satuan")->AsString = ComboBox4->Text ;
		DM1->Qobat->FieldByName("hargajual")->AsString = Edit41->Text ;
		DM1->Qobat->FieldByName("noresep")->AsString = Edit42->Text ;
		DM1->Qobat->Post();
		MessageBoxA(0,"Anda Berhasil Mendaftar Obat Baru Di Poliklinik . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();
		Edit43->Clear();

		}

	}

}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel77Click(TObject *Sender)
{
if(Edit43->Text=="")
{
	MessageBoxA(0,"Cari Kode Obat Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("delete from obat where kodeobat ='"+Edit43->Text+"'");
	DM1->Qobat->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Data Obat","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit43->Clear();
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();

}
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel31Click(TObject *Sender)
{
if (Panel32->Width==1062) {
	Panel32->Width=0;
}
else {
Panel32->Width=1062;
Panel32->BringToFront();
Panel67->Height=34;
Panel125->Width=0;
Panel46->Width=0;
Panel68->Width=0;
Panel43->Width=0;
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel80Click(TObject *Sender)
{
if(Edit46->Text=="")
{
	MessageBoxA(0,"Cari Kode Poli Yang Ingin Dicari","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qpoliklinik->Close();
	DM1->Qpoliklinik->SQL->Clear();
	DM1->Qpoliklinik->SQL->Add("delete from poliklinik where kodepoli ='"+Edit46->Text+"'");
	DM1->Qpoliklinik->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Data Poliklinik","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel38Click(TObject *Sender)
{
if(Edit27->Text == "" && Edit44->Text == "" && Edit45->Text == ""&& Edit46->Text == "")
	{
		MessageBoxA(0,"Lengkapi Seluruh Info Poliklinik . . . ","Poliklinik", MB_ICONWARNING | MB_OK);
	}

	else
	{
		DM1->Qpoliklinik->Close();
		DM1->Qpoliklinik->SQL->Clear();
		DM1->Qpoliklinik->SQL->Add("select *from poliklinik");
		DM1->Qpoliklinik->Open();

		if(DM1->Qpoliklinik->FieldByName("kodepoli")->AsString == Edit27->Text)
		{
		MessageBoxA(0,"No Poliklinik Sudah Ada . . .","Poliklinik",MB_ICONWARNING | MB_OK);
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();

		}
		else
		{
		DM1->Qpoliklinik->Append();
		DM1->Qpoliklinik->FieldByName("kodepoli")->AsString = Edit27->Text ;
		DM1->Qpoliklinik->FieldByName("namapoli")->AsString = Edit44->Text ;
		DM1->Qpoliklinik->FieldByName("kodedokter")->AsString = Edit45->Text ;
		DM1->Qpoliklinik->Post();
		MessageBoxA(0,"Anda Berhasil Mendaftar Poliklinik Baru . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();

		}

	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel81Click(TObject *Sender)
{
if(Edit46->Text=="")
{
	MessageBoxA(0,"Masukan Kode Poliklinik Terlebih Dahulu . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qpoliklinik->Close();
	DM1->Qpoliklinik->SQL->Clear();
	DM1->Qpoliklinik->SQL->Add("select *from poliklinik where kodepoli ='"+Edit46->Text+"'");
	DM1->Qpoliklinik->Open();

	if(!DM1->Qpoliklinik->IsEmpty())
	{
	   Edit27->Text=DM1->Qpoliklinik->FieldByName("kodepoli")->AsString;
	   Edit44->Text	=DM1->Qpoliklinik->FieldByName("namapoli")->AsString;
	   Edit45->Text =DM1->Qpoliklinik->FieldByName("kodedokter")->AsString;
	}
	else if(DM1->Qpoliklinik->IsEmpty())
	{
		MessageBoxA(0,"Kode Poliklinik Tidak Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();
	}

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel79Click(TObject *Sender)
{
if(	Edit27->Text == "" && Edit44->Text == "" || Edit45->Text == "")
	{
		MessageBoxA(0,"Cari Kode Poli Yang Ingin Diubah  . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}

	DM1->Qpoliklinik->Close();
	DM1->Qpoliklinik->SQL->Clear();
	DM1->Qpoliklinik->SQL->Add("select *from poliklinik where kodepoli ='"+Edit46->Text+"'");
	DM1->Qpoliklinik->Open();
	DM1->Qpoliklinik->Edit();

	if(	Edit27->Text == DM1->Qpoliklinik->FieldByName("kodepoli")->AsString &&
	Edit44->Text == DM1->Qpoliklinik->FieldByName("namapoli")->AsString && Edit45->Text == DM1->Qpoliklinik->FieldByName("kodedokter")->AsString)
	{
		MessageBoxA(0,"Anda Belum Mengubah Data Poliklinik . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
		DM1->Qpoliklinik->FieldByName("kodepoli")->AsString = Edit27->Text ;
		DM1->Qpoliklinik->FieldByName("namapoli")->AsString = Edit44->Text ;
		DM1->Qpoliklinik->FieldByName("kodedokter")->AsString = Edit45->Text ;
		DM1->Qpoliklinik->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Data Poliklinik ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();
	}

}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Edit46Change(TObject *Sender)
{
	DM1->Qpoliklinik->Close();
	DM1->Qpoliklinik->SQL->Clear();
	DM1->Qpoliklinik->SQL->Add("select*from poliklinik where kodepoli like '%"+Edit46->Text+"%'");
	DM1->Qpoliklinik->Open();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel82Click(TObject *Sender)
{
	DM1->Qpoliklinik->Close();
	DM1->Qpoliklinik->SQL->Clear();
	DM1->Qpoliklinik->SQL->Add("select *from poliklinik");
	DM1->Qpoliklinik->Open();
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();
}
//---------------------------------------------------------------------------




void __fastcall TPoliklinik::Panel89Click(TObject *Sender)
{
String type;
if(Edit50->Text == ""&& Edit49->Text == "")
	{
		MessageBoxA(0,"Lengkapi Seluruh Info Administrasi. . . ","Poliklinik", MB_ICONWARNING | MB_OK);
	}
	else {
		if (RadioButton3->Checked==true)
	{
		type="Cash";
	}
	else if (RadioButton4->Checked==true)
	{
		type="Credit";
	}
	else if(DM1->Qjenisbiaya->FieldByName("idjenisbiaya")->AsString == Edit50->Text)
		{
		MessageBoxA(0,"ID Jenis Biaya Sudah Ada . . .","Poliklinik",MB_ICONWARNING | MB_OK);
		Edit50->Clear();
		Edit49->Clear();
		}
		DM1->Qjenisbiaya->Close();
		DM1->Qjenisbiaya->SQL->Clear();
		DM1->Qjenisbiaya->SQL->Add("select *from jenisbiaya");
		DM1->Qjenisbiaya->Open();
		DM1->Qjenisbiaya->Append();
		DM1->Qjenisbiaya->FieldByName("idjenisbiaya")->AsString = Edit50->Text;
		DM1->Qjenisbiaya->FieldByName("namabiaya")->AsString = type;
		DM1->Qjenisbiaya->FieldByName("biayadokter")->AsString = Edit77->Text;
		DM1->Qjenisbiaya->FieldByName("biayaobat")->AsString = Edit78->Text;
		DM1->Qjenisbiaya->FieldByName("tarif")->AsString = Edit49->Text;
		DM1->Qjenisbiaya->Post();
		MessageBoxA(0,"Anda Berhasil Mengurus Administrasi . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
		Edit50->Clear();
		Edit49->Clear();
		}

	}


//---------------------------------------------------------------------------



void __fastcall TPoliklinik::Panel86Click(TObject *Sender)
{
	String ubah;
	DM1->Qjenisbiaya->Close();
	DM1->Qjenisbiaya->SQL->Clear();
	DM1->Qjenisbiaya->SQL->Add("select *from jenisbiaya where idjenisbiaya ='"+Edit50->Text+"'");
	DM1->Qjenisbiaya->Open();
	DM1->Qjenisbiaya->Edit();

	if(Edit49->Text == DM1->Qjenisbiaya->FieldByName("tarif")->AsString && ubah == DM1->Qjenisbiaya->FieldByName("namabiaya")->AsString && Edit77->Text == DM1->Qjenisbiaya->FieldByName("biayadokter")->AsString && Edit78->Text == DM1->Qjenisbiaya->FieldByName("biayaobat")->AsString)
	{
		MessageBoxA(0,"Anda Belum Mengubah Administrasi . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{

	if(RadioButton3->Checked==true)
	{
		ubah="Cash";
	}
	else if(RadioButton4->Checked==true)
	{
		ubah="Credit";
	}
		DM1->Qjenisbiaya->FieldByName("tarif")->AsString = Edit49->Text;
		DM1->Qjenisbiaya->FieldByName("biayadokter")->AsString = Edit77->Text;
		DM1->Qjenisbiaya->FieldByName("biayaobat")->AsString = Edit78->Text;
		DM1->Qjenisbiaya->FieldByName("namabiaya")->AsString = ubah;
		DM1->Qjenisbiaya->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Administarasi ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit50->Clear();
		Edit49->Clear();
	}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel88Click(TObject *Sender)
{
if(Edit48->Text=="")
{
	MessageBoxA(0,"Cari ID Biaya Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qjenisbiaya->Close();
	DM1->Qjenisbiaya->SQL->Clear();
	DM1->Qjenisbiaya->SQL->Add("delete from jenisbiaya where idjenisbiaya ='"+Edit48->Text+"'");
	DM1->Qjenisbiaya->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Administrasi Pasien","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit50->Clear();
		Edit49->Clear();
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel85Click(TObject *Sender)
{
	DM1->Qpasien->Close();
	DM1->Qpasien->SQL->Clear();
	DM1->Qpasien->SQL->Add("select *from pasien where nopasien = '"+Edit48->Text+"'");
	DM1->Qpasien->Open();
	DM1->Qjenisbiaya->Close();
	DM1->Qjenisbiaya->SQL->Clear();
	DM1->Qjenisbiaya->SQL->Add("select *from jenisbiaya where idjenisbiaya = '"+Edit50->Text+"'");
	DM1->Qjenisbiaya->Open();
	Edit50->Clear();
	Edit49->Clear();
	rbiaya->PrepareReport();
	rbiaya->ShowReport();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel62Click(TObject *Sender)
{
Panel83->Width=424;
Panel63->Visible=true;
Panel55->Width=0;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel90MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Panel87->Visible=true;
	Label88->Font->Color=clBlack;
	Image6->Visible=false;
	Image7->Visible=true;
	Label2->Font->Color=clWhite;
Label8->Font->Color=clWhite;
Panel8->Visible=false;
Image5->Visible=false;
Image4->Visible=true;
	PEA->Color=clTeal;
	Label3->Font->Color=clWhite;
	Label6->Font->Color=clWhite;
	Label7->Font->Color=clWhite;
	Panel9->Visible=false;
	Image9->Visible=false;
	Image8->Visible=true;
		Panel6->Color=clTeal;
	Label4->Font->Color=clWhite;
	Label5->Font->Color=clWhite;
	Panel10->Visible=false;
		Image10->Visible=true;
	Image11->Visible=false;
		Panel57->Visible=false;
	Label48->Font->Color=clWhite;
	Label49->Font->Color=clWhite;
	Image12->Visible=true;
	Image13->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel90MouseLeave(TObject *Sender)
{
	Panel87->Visible=false;
	Label88->Font->Color=clWhite;
	Image7->Visible=false;
	Image6->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel58MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel57->Visible=True;
	Label48->Font->Color=clBlack;
	Label49->Font->Color=clBlack;
	Image12->Visible=false;
	Image13->Visible=true;
	Label2->Font->Color=clWhite;
Label8->Font->Color=clWhite;
Panel8->Visible=false;
Image5->Visible=false;
Image4->Visible=true;
	Panel87->Visible=false;
	Label88->Font->Color=clWhite;
	Image7->Visible=false;
	Image6->Visible=true;
		PEA->Color=clTeal;
	Label3->Font->Color=clWhite;
	Label6->Font->Color=clWhite;
	Label7->Font->Color=clWhite;
	Panel9->Visible=false;
	Image9->Visible=false;
	Image8->Visible=true;
		Panel6->Color=clTeal;
	Label4->Font->Color=clWhite;
	Label5->Font->Color=clWhite;
	Panel10->Visible=false;
		Image10->Visible=true;
	Image11->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel58MouseLeave(TObject *Sender)
{
	Panel57->Visible=false;
	Label48->Font->Color=clWhite;
	Label49->Font->Color=clWhite;
	Image12->Visible=true;
	Image13->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label48MouseLeave(TObject *Sender)
{
	Panel57->Visible=false;
	Label48->Font->Color=clWhite;
	Label49->Font->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label48MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
	Panel57->Visible=True;
	Label48->Font->Color=clBlack;
	Label49->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label49MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
   	Panel57->Visible=True;
	Label48->Font->Color=clBlack;
	Label49->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Label49MouseLeave(TObject *Sender)
{
	Panel57->Visible=false;
	Label48->Font->Color=clWhite;
	Label49->Font->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel90Click(TObject *Sender)
{
	Panel91->Width=1400;
	Panel91->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel93Click(TObject *Sender)
{
	Panel91->Width=0;
	Panel87->Visible=false;
	Label88->Font->Color=clWhite;
	Image7->Visible=false;
	Image6->Visible=true;
	Edit47->Clear();
	Edit52->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel92Click(TObject *Sender)
{
DM1->Qdokter->Close();
DM1->Qdokter->SQL->Clear();
DM1->Qdokter->SQL->Add("select *from dokter where namadokter ='"+Edit47->Text+"'");
DM1->Qdokter->Open();

		if(!DM1->Qdokter->IsEmpty())
		{
			if(DM1->Qdokter->FieldByName("kodedokter")->AsString == Edit52->Text)
			{
			String a;
			a = DM1->Qdokter->FieldByName("directory")->AsString;
				MessageBoxA(0,"Selamat Memeriksa Pasien  . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
				Label95->Caption= DM1->Qdokter->FieldByName("kodedokter")->AsString;
				Label97->Caption= DM1->Qdokter->FieldByName("namadokter")->AsString;
				Label99->Caption= DM1->Qdokter->FieldByName("telepondokter")->AsString;
				Label103->Caption= DM1->Qdokter->FieldByName("alamatdokter")->AsString;
				Panel94->Width=1400;
				Panel94->BringToFront();
				Image3->Picture->LoadFromFile(a);
				Edit47->Clear();
				Edit52->Clear();
			}
			else
			{
				MessageBoxA(0,"Kode Tidak Ditemukan!","Poliklinik",MB_ICONINFORMATION | MB_OK);
				Edit47->Clear();
				Edit52->Clear();
			}
			}
		else{
		{
			MessageBoxA(0,"Dokter Tak Dikenal!","Poliklinik",MB_ICONINFORMATION | MB_OK);
			Edit47->Clear();
		}
}
        }
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel100Click(TObject *Sender)
{
		Panel94->Width=0;
		Panel94->SendToBack();
		Label107->Caption="-";
		Label108->Caption="-";
		Label95->Caption="-";
		Label97->Caption="-";
		Label99->Caption="-";
		Label103->Caption="-";
		Edit53->Clear();
		Edit54->Clear();
		Edit55->Clear();
		Edit56->Clear();
		Edit57->Clear();
		Edit58->Clear();
		Edit59->Clear();
		Edit60->Clear();
		Edit62->Clear();
		Edit63->Clear();
		Edit76->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::o(TObject *Sender)
{
	Panel44->Width=0;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::CheckBox1Click(TObject *Sender)
{
if (CheckBox1->Checked==true) {
	Edit2->PasswordChar=0;
}
else if (CheckBox1->Checked==false) {
		 Edit2->PasswordChar='*';
	 }
}
//---------------------------------------------------------------------------




void __fastcall TPoliklinik::Panel103Click(TObject *Sender)
{
if(Edit63->Text=="")
{
	MessageBoxA(0,"Masukan No.Pasien Terlebih Dahulu . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else{

		DM1->Qpasien->Close();
		DM1->Qpasien->SQL->Clear();
		DM1->Qpasien->SQL->Add("select *from pasien where nopasien ='"+Edit63->Text+"'");
		DM1->Qpasien->Open();
		if (!DM1->Qpasien->IsEmpty())
		{
			Label107->Caption = DM1->Qpasien->FieldByName("nopasien")->AsString;
			Label108->Caption = DM1->Qpasien->FieldByName("namapasien")->AsString;
		}
	else if(DM1->Qpasien->IsEmpty())
	{
		MessageBoxA(0,"No.Pasien Tidak Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel98Click(TObject *Sender)
{
if(Edit62->Text=="")
{
	MessageBoxA(0,"Masukan No Pemeriksaan Terlebih Dahulu . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qpemeriksaan->Close();
	DM1->Qpemeriksaan->SQL->Clear();
	DM1->Qpemeriksaan->SQL->Add("select *from pemeriksaan where nopemeriksaan ='"+Edit62->Text+"'");
	DM1->Qpemeriksaan->Open();

	if(!DM1->Qpemeriksaan->IsEmpty())
	{
	   Edit53->Text=DM1->Qpemeriksaan->FieldByName("nopemeriksaan")->AsString;
	   Edit54->Text	=DM1->Qpemeriksaan->FieldByName("keluhan")->AsString;
	   Edit55->Text =DM1->Qpemeriksaan->FieldByName("diagnosa")->AsString;
	   Edit56->Text=DM1->Qpemeriksaan->FieldByName("perawatan")->AsString;
	   Edit57->Text	=DM1->Qpemeriksaan->FieldByName("tindakan")->AsString;
	   Edit58->Text =DM1->Qpemeriksaan->FieldByName("beratbadan")->AsString;
	   Edit59->Text=DM1->Qpemeriksaan->FieldByName("tensidiastolik")->AsString;
	   Edit60->Text	=DM1->Qpemeriksaan->FieldByName("tensisistolik")->AsString;
	   Edit76->Text	=DM1->Qpemeriksaan->FieldByName("noresep")->AsString;
	}
	else if(DM1->Qpemeriksaan->IsEmpty())
	{
		MessageBoxA(0,"Kode Pemeriksaan Tidak Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit53->Clear();
		Edit54->Clear();
		Edit55->Clear();
		Edit56->Clear();
		Edit57->Clear();
		Edit58->Clear();
		Edit59->Clear();
		Edit60->Clear();
		Edit62->Clear();
		Edit63->Clear();
		Edit76->Clear();
	}

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel99Click(TObject *Sender)
{
	DM1->Qpemeriksaan->Close();
	DM1->Qpemeriksaan->SQL->Clear();
	DM1->Qpemeriksaan->SQL->Add("select *from pemeriksaan");
	DM1->Qpemeriksaan->Open();
		Edit53->Clear();
		Edit54->Clear();
		Edit55->Clear();
		Edit56->Clear();
		Edit57->Clear();
		Edit58->Clear();
		Edit59->Clear();
		Edit60->Clear();
		Edit62->Clear();
		Edit63->Clear();
		Edit76->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel97Click(TObject *Sender)
{
if(Edit62->Text=="")
{
	MessageBoxA(0,"Cari No Pemeriksaan Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qpemeriksaan->Close();
	DM1->Qpemeriksaan->SQL->Clear();
	DM1->Qpemeriksaan->SQL->Add("delete from pemeriksaan where nopemeriksaan ='"+Edit62->Text+"'");
	DM1->Qpemeriksaan->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Hasil Pemeriksaan Pasien","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit53->Clear();
		Edit54->Clear();
		Edit55->Clear();
		Edit56->Clear();
		Edit57->Clear();
		Edit58->Clear();
		Edit59->Clear();
		Edit60->Clear();
		Edit62->Clear();
		Edit63->Clear();
		Edit76->Clear();
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel96Click(TObject *Sender)
{
	DM1->Qpemeriksaan->Close();
	DM1->Qpemeriksaan->SQL->Clear();
	DM1->Qpemeriksaan->SQL->Add("select *from pemeriksaan where nopemeriksaan ='"+Edit62->Text+"'");
	DM1->Qpemeriksaan->Open();
	DM1->Qpemeriksaan->Edit();

	if(Edit53->Text==DM1->Qpemeriksaan->FieldByName("nopemeriksaan")->AsString &&
	   Edit54->Text	==DM1->Qpemeriksaan->FieldByName("keluhan")->AsString &&
	   Edit55->Text ==DM1->Qpemeriksaan->FieldByName("diagnosa")->AsString &&
	   Edit56->Text==DM1->Qpemeriksaan->FieldByName("perawatan")->AsString &&
	   Edit57->Text	==DM1->Qpemeriksaan->FieldByName("tindakan")->AsString &&
	   Edit58->Text ==DM1->Qpemeriksaan->FieldByName("beratbadan")->AsString &&
	   Edit59->Text==DM1->Qpemeriksaan->FieldByName("tensidiastolik")->AsString &&
	   Edit60->Text	==DM1->Qpemeriksaan->FieldByName("tensisistolik")->AsString&&
	   Edit76->Text	==DM1->Qpemeriksaan->FieldByName("noresep")->AsString)
	{
		MessageBoxA(0,"Anda Belum Mengubah Hasil Pemeriksaan . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
	   DM1->Qpemeriksaan->FieldByName("nopemeriksaan")->AsString=Edit53->Text;
		DM1->Qpemeriksaan->FieldByName("keluhan")->AsString=Edit54->Text;
	   DM1->Qpemeriksaan->FieldByName("diagnosa")->AsString=Edit55->Text ;
	   DM1->Qpemeriksaan->FieldByName("perawatan")->AsString=Edit56->Text;
	   DM1->Qpemeriksaan->FieldByName("tindakan")->AsString=Edit57->Text	;
	   DM1->Qpemeriksaan->FieldByName("beratbadan")->AsString=Edit58->Text ;
	   DM1->Qpemeriksaan->FieldByName("tensidiastolik")->AsString=Edit59->Text;
	   DM1->Qpemeriksaan->FieldByName("tensisistolik")->AsString=Edit60->Text;
	   DM1->Qpemeriksaan->FieldByName("noresep")->AsString=Edit76->Text;
	   DM1->Qpemeriksaan->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Data Pemeriksaan ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit53->Clear();
		Edit54->Clear();
		Edit55->Clear();
		Edit56->Clear();
		Edit57->Clear();
		Edit58->Clear();
		Edit59->Clear();
		Edit60->Clear();
		Edit62->Clear();
		Edit63->Clear();
		Edit76->Clear();
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel95Click(TObject *Sender)
{
if(Edit53->Text == "" && Edit54->Text == "" && Edit55->Text == "" && Edit56->Text == "" && Edit57->Text == "" && Edit58->Text == "" &&Edit59->Text == "" && Edit60->Text == "" && Edit62->Text == ""&& Edit63->Text == "")
	{
		MessageBoxA(0,"Lengkapi Seluruh Pemeriksaan. . . ","Poliklinik", MB_ICONWARNING | MB_OK);
	}

	else
	{

		DM1->Qpemeriksaan->Close();
		DM1->Qpemeriksaan->SQL->Clear();
		DM1->Qpemeriksaan->SQL->Add("select *from pemeriksaan");
		DM1->Qpemeriksaan->Open();

		if(DM1->Qpemeriksaan->FieldByName("nopemeriksaan")->AsString == Edit53->Text)
		{
		MessageBoxA(0,"No Pemeriksaan Sudah Ada . . .","Poliklinik",MB_ICONWARNING | MB_OK);
		Edit53->Clear();
		Edit54->Clear();
		Edit55->Clear();
		Edit56->Clear();
		Edit57->Clear();
		Edit58->Clear();
		Edit59->Clear();
		Edit60->Clear();
		Edit62->Clear();
		Edit63->Clear();
		Edit76->Clear();

		}
		else
		{
		DM1->Qpemeriksaan->Append();
	   DM1->Qpemeriksaan->FieldByName("nopemeriksaan")->AsString=Edit53->Text;
	   DM1->Qpemeriksaan->FieldByName("keluhan")->AsString=Edit54->Text;
	   DM1->Qpemeriksaan->FieldByName("diagnosa")->AsString=Edit55->Text ;
	   DM1->Qpemeriksaan->FieldByName("perawatan")->AsString=Edit56->Text;
	   DM1->Qpemeriksaan->FieldByName("tindakan")->AsString=Edit57->Text	;
	   DM1->Qpemeriksaan->FieldByName("beratbadan")->AsString=Edit58->Text ;
	   DM1->Qpemeriksaan->FieldByName("tensidiastolik")->AsString=Edit59->Text;
	   DM1->Qpemeriksaan->FieldByName("tensisistolik")->AsString=Edit60->Text;
	   DM1->Qpemeriksaan->FieldByName("noresep")->AsString=Edit76->Text;
	   DM1->Qpemeriksaan->Post();
		MessageBoxA(0,"Anda Berhasil Melakukan Pemeriksaan . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
		Panel101->Width=976;
		Panel101->BringToFront();
		Label107->Caption="-";
		Label108->Caption="-";
		Edit53->Clear();
		Edit54->Clear();
		Edit55->Clear();
		Edit56->Clear();
		Edit57->Clear();
		Edit58->Clear();
		Edit59->Clear();
		Edit60->Clear();
		Edit62->Clear();
		Edit63->Clear();
		Edit76->Clear();

		}


		}
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel106Click(TObject *Sender)
{
if(Edit68->Text=="")
{
	MessageBoxA(0,"Cari No Resep Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qresep->Close();
	DM1->Qresep->SQL->Clear();
	DM1->Qresep->SQL->Add("delete from resep where noresep ='"+Edit68->Text+"'");
	DM1->Qresep->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus ","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit68->Clear();
		Edit61->Clear();
		Edit64->Clear();
		Edit65->Clear();
		Edit66->Clear();
		Edit67->Clear();
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel104Click(TObject *Sender)
{
if(Edit64->Text == "" && Edit65->Text == "" && Edit66->Text == "" && Edit67->Text == "") {
		MessageBoxA(0,"Lengkapi Seluruh Resep. . . ","Poliklinik", MB_ICONWARNING | MB_OK);
	}

	else
	{

		DM1->Qresep->Close();
		DM1->Qresep->SQL->Clear();
		DM1->Qresep->SQL->Add("select *from resep");
		DM1->Qresep->Open();

		if(DM1->Qresep->FieldByName("noresep")->AsString == Edit64->Text)
		{
		MessageBoxA(0,"No Resep Tidak Boleh Sama . . .","Poliklinik",MB_ICONWARNING | MB_OK);
		Edit68->Clear();
		Edit61->Clear();
		Edit64->Clear();
		Edit65->Clear();
		Edit66->Clear();
		Edit67->Clear();

		}

		else
		{
		DM1->Qresep->Append();
	   DM1->Qresep->FieldByName("noresep")->AsString=Edit64->Text;
	   DM1->Qresep->FieldByName("dosis")->AsString=Edit65->Text ;
	   DM1->Qresep->FieldByName("jumlah")->AsString=Edit66->Text;
	   DM1->Qresep->FieldByName("kodeobat")->AsString=Edit67->Text	;
	   DM1->Qresep->Post();
		MessageBoxA(0,"Anda Berhasil Memberikan Resep . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
		Panel109->Width=976;
		Panel109->BringToFront();
		Label109->Width=0;
		Edit68->Clear();
		Edit61->Clear();
		Edit64->Clear();
		Edit65->Clear();
		Edit66->Clear();
		Edit67->Clear();
		}


}
	}
//----------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel105Click(TObject *Sender)
{

	DM1->Qresep->Close();
	DM1->Qresep->SQL->Clear();
	DM1->Qresep->SQL->Add("select *from resep where noresep ='"+Edit68->Text+"'");
	DM1->Qresep->Open();
	DM1->Qresep->Edit();

	if(Edit64->Text	==DM1->Qresep->FieldByName("noresep")->AsString &&
	   Edit65->Text ==DM1->Qresep->FieldByName("dosis")->AsString &&
	   Edit66->Text==DM1->Qresep->FieldByName("jumlah")->AsString &&
	   Edit67->Text	==DM1->Qresep->FieldByName("kodeobat")->AsString)
	{
		MessageBoxA(0,"Anda Belum Mengubah Resep Pasien . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
	   DM1->Qresep->FieldByName("noresep")->AsString=Edit64->Text;
	   DM1->Qresep->FieldByName("dosis")->AsString=Edit65->Text ;
	   DM1->Qresep->FieldByName("jumlah")->AsString=Edit66->Text;
	   DM1->Qresep->FieldByName("kodeobat")->AsString=Edit67->Text;
	   DM1->Qresep->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Resep Pasien ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit68->Clear();
		Edit61->Clear();
		Edit64->Clear();
		Edit65->Clear();
		Edit66->Clear();
		Edit67->Clear();
	}
}

//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel107Click(TObject *Sender)
{
	DM1->Qresep->Close();
	DM1->Qresep->SQL->Clear();
	DM1->Qresep->SQL->Add("select *from resep");
	DM1->Qresep->Open();
		Edit68->Clear();
		Edit61->Clear();
		Edit64->Clear();
		Edit65->Clear();
		Edit66->Clear();
		Edit67->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel108Click(TObject *Sender)
{
	DM1->Qresep->Close();
	DM1->Qresep->SQL->Clear();
	DM1->Qresep->SQL->Add("select *from resep where noresep ='"+Edit68->Text+"'");
	DM1->Qresep->Open();
if(Edit68->Text=="")
{
	MessageBoxA(0,"Masukan No Resep Terlebih Dahulu  . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qresep->Close();
	DM1->Qresep->SQL->Clear();
	DM1->Qresep->SQL->Add("select *from resep where noresep ='"+Edit68->Text+"'");
	DM1->Qresep->Open();

	if(!DM1->Qresep->IsEmpty())
	{

	   Edit64->Text	=DM1->Qresep->FieldByName("noresep")->AsString;
	   Edit65->Text =DM1->Qresep->FieldByName("dosis")->AsString;
	   Edit66->Text=DM1->Qresep->FieldByName("jumlah")->AsString ;
	   Edit67->Text	=DM1->Qresep->FieldByName("kodeobat")->AsString;
		Edit61->Text=DM1->Qresep->FieldByName("nopemeriksaan")->AsString;
	}
	else if(DM1->Qresep->IsEmpty())
	{
		MessageBoxA(0,"No Resep Tidak Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit68->Clear();
		Edit61->Clear();
		Edit64->Clear();
		Edit65->Clear();
		Edit66->Clear();
		Edit67->Clear();
	}

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Edit68Change(TObject *Sender)
{
	DM1->Qresep->Close();
	DM1->Qresep->SQL->Clear();
	DM1->Qresep->SQL->Add("select *from resep where noresep LIKE '%"+Edit68->Text+"%'");
	DM1->Qresep->Open();
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Edit62Change(TObject *Sender)
{
	DM1->Qpemeriksaan->Close();
	DM1->Qpemeriksaan->SQL->Clear();
	DM1->Qpemeriksaan->SQL->Add("select *from pemeriksaan where nopemeriksaan LIKE '%"+Edit62->Text+"%'");
	DM1->Qpemeriksaan->Open();
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel110Click(TObject *Sender)
{
if (Panel110->Top==238) {
	Panel110->Top=270;
	ComboBox6->Visible=true;
	Panel111->Top=312;
	Panel132->Top=350;
}
else if (Panel110->Top==270) {
		 Panel110->Top=302;
		 ComboBox7->Visible=true;
		 Panel111->Top=346;
		 Panel132->Top=385;

	 }
	 else if (Panel110->Top==302) {
			MessageBoxA(0,"Jangan Banyak-Banyak Ntar OverDosis . . . ","Poliklinik", MB_ICONWARNING | MB_OK);

	 }
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel111Click(TObject *Sender)
{
if(ComboBox6->Text == "" && ComboBox5->Text == "" && ComboBox7->Text == "")
	{
		MessageBoxA(0,"Masukan Data Obat . . . ","Poliklinik", MB_ICONWARNING | MB_OK);
	}

	else
	{

		DM1->Qobat->Close();
		DM1->Qobat->SQL->Clear();
		DM1->Qobat->SQL->Add("select *from obat");
		DM1->Qobat->Open();

		if(DM1->Qobat->FieldByName("namaobat")->AsString == ComboBox5->Text && DM1->Qobat->FieldByName("namaobat")->AsString == ComboBox6->Text || DM1->Qobat->FieldByName("namaobat")->AsString == ComboBox7->Text)
		{
		MessageBoxA(0,"No Obat Sudah Ada . . .","Poliklinik",MB_ICONWARNING | MB_OK);

		}
		else
		{
		DM1->Qobat->Append();
	   DM1->Qobat->FieldByName("namaobat")->AsString=ComboBox5->Text;
	   DM1->Qobat->FieldByName("namaobat")->AsString=ComboBox6->Text;
	   DM1->Qobat->FieldByName("namaobat")->AsString=ComboBox7->Text ;
	   DM1->Qobat->FieldByName("namaobat")->AsString=Edit69->Text ;
	   DM1->Qobat->Post();
	   MessageBoxA(0,"Anda Selesai Pemeriksaan Terima Kasih . . .","Poliklinik",MB_ICONINFORMATION | MB_OK);
	   ComboBox5->Text = "";
	   ComboBox6->Text = "";
	   ComboBox7->Text = "";
	   Edit69->Clear();
}
		}
	}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel118Click(TObject *Sender)
{
	rjadwal->PrepareReport();
	rjadwal->ShowReport();
}
//---------------------------------------------------------------------------




void __fastcall TPoliklinik::Panel120Click(TObject *Sender)
{
	Panel117->Width=0;
	Panel121->Width = 0;
	Panel123->Width = 0;
	Label131->Caption="-";
	Label132->Caption="-";
	Label133->Caption="-";
	Label134->Caption="-";
	Label135->Caption="-";
	Label136->Caption="-";
	Label141->Caption="-";
	Label161->Caption="-";
	Label162->Caption="-";
	Label163->Caption="-";
	Edit73->Clear();
	Panel122->Width=0;
	Panel124->Width=0;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel58Click(TObject *Sender)
{
	Panel117->Width=1400;
}
//---------------------------------------------------------------------------



void __fastcall TPoliklinik::Panel121Click(TObject *Sender)
{

		DM1->Qpemeriksaan->Close();
		DM1->Qpemeriksaan->SQL->Clear();
		DM1->Qpemeriksaan->SQL->Add("select *from pemeriksaan where nopemeriksaan ='"+Label141->Caption+"'");
		DM1->Qpemeriksaan->Open();

	if(!DM1->Qpemeriksaan->IsEmpty())
	{
	   Label151->Caption=DM1->Qpemeriksaan->FieldByName("keluhan")->AsString;
	   Label152->Caption=DM1->Qpemeriksaan->FieldByName("tindakan")->AsString;
	   Label153->Caption=DM1->Qpemeriksaan->FieldByName("perawatan")->AsString;
	}

		DM1->Qdokter->Close();
		DM1->Qdokter->SQL->Clear();
		DM1->Qdokter->SQL->Add("select *from dokter where kodedokter ='"+Label176->Caption+"'");
		DM1->Qdokter->Open();
		if (!DM1->Qdokter->IsEmpty())
		{
			Label150->Caption = DM1->Qdokter->FieldByName("namadokter")->AsString;
		}

		DM1->Qresep->Close();
		DM1->Qresep->SQL->Clear();
		DM1->Qresep->SQL->Add("select *from resep where noresep ='"+Edit73->Text+"'");
		DM1->Qresep->Open();

		if (!DM1->Qresep->IsEmpty())
		{
			Label154->Caption = DM1->Qresep->FieldByName("noresep")->AsString;
		}

	else if(DM1->Qpasien->IsEmpty())
	{
		MessageBoxA(0,"No Pasien Tdk Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
		if (Panel122->Width==0)
	{
	for(Panel122->Width = Panel122->Width; Panel122->Width <542;Panel122->Width++);
	Panel124->Width=0;
	}
	else if (Panel122->Width==542)
	{
	 for(Panel122->Width = Panel122->Width; Panel122->Width >0;Panel122->Width--);
	Panel124->Width=0;
	Panel122->Width=0;
	Panel129->Width=0;
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel123Click(TObject *Sender)
{
		DM1->Qjenisbiaya->Close();
		DM1->Qjenisbiaya->SQL->Clear();
		DM1->Qjenisbiaya->SQL->Add("select *from jenisbiaya where idjenisbiaya ='"+Edit73->Text+"'");
		DM1->Qjenisbiaya->Open();

	if(!DM1->Qjenisbiaya->IsEmpty())
	{
	   Label161->Caption=DM1->Qjenisbiaya->FieldByName("idjenisbiaya")->AsString;
	   Label162->Caption=DM1->Qjenisbiaya->FieldByName("namabiaya")->AsString;
	   Label163->Caption=DM1->Qjenisbiaya->FieldByName("tarif")->AsString;
	   Label182->Caption=DM1->Qjenisbiaya->FieldByName("biayadokter")->AsString;
	   Label185->Caption=DM1->Qjenisbiaya->FieldByName("biayaobat")->AsString;
	}

		if (Panel124->Width==0)
	{
	for(Panel124->Width = Panel124->Width; Panel124->Width <542;Panel124->Width++);
	Panel122->Width=0;
	Panel129->Width=0;
	}
	else if (Panel124->Width==542)
	{
	 for(Panel124->Width = Panel124->Width; Panel124->Width >0;Panel124->Width--);
	Panel122->Width=0;

	}

}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel119Click(TObject *Sender)
{
if(Edit73->Text=="")
{
	MessageBoxA(0,"Masukan No. Pasien Terlebih Dahulu . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
		DM1->Qpasien->Close();
		DM1->Qpasien->SQL->Clear();
		DM1->Qpasien->SQL->Add("select *from pasien where nopasien ='"+Edit73->Text+"'");
		DM1->Qpasien->Open();

	if(!DM1->Qpasien->IsEmpty())
	{
	   Label131->Caption=DM1->Qpasien->FieldByName("nopasien")->AsString;
	   Label132->Caption=DM1->Qpasien->FieldByName("namapasien")->AsString;
	   Label133->Caption=DM1->Qpasien->FieldByName("alamatpasien")->AsString;
	   Label134->Caption=DM1->Qpasien->FieldByName("teleponpasien")->AsString;
	   Label135->Caption=DM1->Qpasien->FieldByName("tgllahirpasien")->AsString;
	   Label136->Caption=DM1->Qpasien->FieldByName("jeniskelaminpasien")->AsString;
	}

		DM1->Qjadwalpraktek->Close();
		DM1->Qjadwalpraktek->SQL->Clear();
		DM1->Qjadwalpraktek->SQL->Add("select *from jadwalpraktek where kodejadwal ='"+Edit73->Text+"'");
		DM1->Qjadwalpraktek->Open();

		if (!DM1->Qjadwalpraktek->IsEmpty())
		{
			Label176->Caption = DM1->Qjadwalpraktek->FieldByName("kodedokter")->AsString;
		}

		DM1->Qpemeriksaan->Close();
		DM1->Qpemeriksaan->SQL->Clear();
		DM1->Qpemeriksaan->SQL->Add("select *from pemeriksaan where nopemeriksaan ='"+Edit73->Text+"'");
		DM1->Qpemeriksaan->Open();
		if (!DM1->Qpemeriksaan->IsEmpty())
		{
			Label141->Caption = DM1->Qpemeriksaan->FieldByName("nopemeriksaan")->AsString;
			Panel121->Width = 185;
			Panel123->Width = 185;
		}
	else if(DM1->Qpasien->IsEmpty())
	{
		MessageBoxA(0,"No Pasien Tdk Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
}
}
//---------------------------------------------------------------------------
void __fastcall TPoliklinik::Panel126Click(TObject *Sender)
{
if (Edit74->Text=="") {
Edit74->Text=DM1->Qlabel->FieldByName("label")->AsString;
}
else {
DM1->Qlabel->Close();
DM1->Qlabel->SQL->Clear();
DM1->Qlabel->SQL->Add("truncate label");
DM1->Qlabel->ExecSQL();
DM1->Qlabel->Close();
DM1->Qlabel->SQL->Clear();
DM1->Qlabel->SQL->Add("select * from label");
DM1->Qlabel->Open();
DM1->Qlabel->Append();
DM1->Qlabel->FieldByName("label")->AsString = Edit74->Text;
DM1->Qlabel->Post();
DM1->Qlabel->Close();
DM1->Qlabel->SQL->Clear();
DM1->Qlabel->SQL->Add("select * from label");
DM1->Qlabel->Open();
Label1->Caption = DM1->Qlabel->FieldByName("label")->AsString;
Panel126->Caption="Ubah Nama Poli";
Label59->Caption = DM1->Qlabel->FieldByName("label")->AsString;
Label1->Hint=DM1->Qlabel->FieldByName("label")->AsString;
Image14->Hint=DM1->Qlabel->FieldByName("label")->AsString;
Label59->Alignment=taCenter;
}
}

//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel33Click(TObject *Sender)
{
if (Panel125->Width==1062) {
	Panel125->Width=0;
}
else {
Panel46->Width=0;
Panel68->Width=0;
Panel43->Width=0;
Panel32->Width=0;
Panel125->Width=1062;
Edit74->Text=DM1->Qlabel->FieldByName("label")->AsString;
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::FormActivate(TObject *Sender)
{
DM1->Qlabel->Close();
DM1->Qlabel->SQL->Clear();
DM1->Qlabel->SQL->Add("select * from label");
DM1->Qlabel->Open();
Label1->Caption = DM1->Qlabel->FieldByName("label")->AsString;
Label59->Alignment=taCenter;
Label59->Caption = DM1->Qlabel->FieldByName("label")->AsString;
Edit74->Text = DM1->Qlabel->FieldByName("label")->AsString;
Label59->Alignment=taCenter;
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y)

{
Label2->Font->Color=clWhite;
Label8->Font->Color=clWhite;
Panel8->Visible=false;
Image5->Visible=false;
Image4->Visible=true;
	Panel87->Visible=false;
	Label88->Font->Color=clWhite;
	Image7->Visible=false;
	Image6->Visible=true;
		PEA->Color=clTeal;
	Label3->Font->Color=clWhite;
	Label6->Font->Color=clWhite;
	Label7->Font->Color=clWhite;
	Panel9->Visible=false;
	Image9->Visible=false;
	Image8->Visible=true;
		Panel6->Color=clTeal;
	Label4->Font->Color=clWhite;
	Label5->Font->Color=clWhite;
	Panel10->Visible=false;
		Image10->Visible=true;
	Image11->Visible=false;
		Panel57->Visible=false;
	Label48->Font->Color=clWhite;
	Label49->Font->Color=clWhite;
	Image12->Visible=true;
	Image13->Visible=false;
}
//---------------------------------------------------------------------------





void __fastcall TPoliklinik::Panel128Click(TObject *Sender)
{
		DM1->Qresep->Close();
		DM1->Qresep->SQL->Clear();
		DM1->Qresep->SQL->Add("select *from resep where noresep ='"+Label154->Caption+"'");
		DM1->Qresep->Open();

	if(!DM1->Qresep->IsEmpty())
	{
	   Label171->Caption=DM1->Qresep->FieldByName("noresep")->AsString;
	   Label172->Caption=DM1->Qresep->FieldByName("dosis")->AsString;
	   Label173->Caption=DM1->Qresep->FieldByName("jumlah")->AsString;
	   Label170->Caption=DM1->Qresep->FieldByName("kodeobat")->AsString;
	}

		else if(DM1->Qpasien->IsEmpty())
	{
		MessageBoxA(0,"No Pasien Tdk Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	if (Panel129->Width==0)
	{
	for(Panel129->Width = Panel129->Width; Panel129->Width <542;Panel129->Width++);
	}
	else if (Panel129->Width==542)
	{
	 for(Panel129->Width = Panel129->Width; Panel129->Width >0;Panel129->Width--);
	}

}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel131Click(TObject *Sender)
{
Panel130->Width=976;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel132Click(TObject *Sender)
{
Panel109->Width=0;
	   ComboBox5->Text = "";
	   ComboBox6->Text = "";
	   ComboBox7->Text = "";
	   Edit69->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel133Click(TObject *Sender)
{
		Panel101->Width=0;
		Edit68->Clear();
		Edit61->Clear();
		Edit64->Clear();
		Edit65->Clear();
		Edit66->Clear();
		Edit67->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Timer1Timer(TObject *Sender)
{
Label164->Caption=Time();
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel135Click(TObject *Sender)
{
if(Edit48->Text=="")
{
	MessageBoxA(0,"Masukan Kode Biaya Terlebih Dahulu . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
		DM1->Qpasien->Close();
		DM1->Qpasien->SQL->Clear();
		DM1->Qpasien->SQL->Add("select *from pasien where nopasien ='"+Edit48->Text+"'");
		DM1->Qpasien->Open();

		if(!DM1->Qpasien->IsEmpty())
		{
			Label85->Caption = DM1->Qpasien->FieldByName("nopasien")->AsString;
			Label86->Caption = DM1->Qpasien->FieldByName("namapasien")->AsString;
		}

		DM1->Qjenisbiaya->Close();
		DM1->Qjenisbiaya->SQL->Clear();
		DM1->Qjenisbiaya->SQL->Add("select *from jenisbiaya where idjenisbiaya ='"+Edit48->Text+"'");
		DM1->Qjenisbiaya->Open();
		if (!DM1->Qjenisbiaya->IsEmpty())
		{
		String kode;
		Edit50->Text=DM1->Qjenisbiaya->FieldByName("idjenisbiaya")->AsString;
		Edit49->Text =DM1->Qjenisbiaya->FieldByName("tarif")->AsString;
		kode = DM1->Qjenisbiaya->FieldByName("namabiaya")->AsString;
		Edit77->Text =DM1->Qjenisbiaya->FieldByName("biayadokter")->AsString;
		Edit78->Text =DM1->Qjenisbiaya->FieldByName("biayaobat")->AsString;
		if (kode=="Cash")
		{
			RadioButton3->Checked=true;
		}
		else if (kode=="Credit")
		{
			RadioButton4->Checked=true;
		}



	else if(DM1->Qpasien->IsEmpty())
	{
		MessageBoxA(0,"Pasien Tidak Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit50->Clear();
		Edit49->Clear();
	}

	else if(DM1->Qjenisbiaya->IsEmpty())
	{
		MessageBoxA(0,"Maaf ID Jenis Biaya Belum Terdaftar . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit50->Clear();
		Edit49->Clear();
		}
	}


}
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Label177Click(TObject *Sender)
{
Panel27->Width=0;
Panel67->Height=34;
Panel68->Width=0;
Panel43->Width=0;
Panel125->Width=0;
Panel32->Width=0;
Panel46->Width=0;
Label187->Caption="-";
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label179Click(TObject *Sender)
{
if (Panel125->Width==1011) {
	Panel125->Width=0;
}
else {
Panel46->Width=0;
Panel68->Width=0;
Panel43->Width=0;
Panel32->Width=0;
Panel125->Width=1011;
Panel67->Height=34;
}
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Label178Click(TObject *Sender)
{
if (Panel67->Height==34) {
	for(Panel67->Height = Panel67->Height ;Panel67->Height < 136 ; Panel67->Height++);
}
else {
for(Panel67->Height = Panel67->Height ;Panel67->Height > 34  ; Panel67->Height--);
}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label178MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
Label178->Color=clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label178MouseLeave(TObject *Sender)
{
Label178->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Label179MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
Label179->Color=clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel48MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
Image16->Visible=true;
Image15->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel48MouseLeave(TObject *Sender)
{
Image16->Visible=false;
Image15->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Panel46MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y)
{
Image16->Visible=false;
Image15->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image21Click(TObject *Sender)
{
if(Edit39->Text=="")
{
	MessageBoxA(0,"Anda Harus Mengisi Kode Dokter Untuk Mencari . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qdokter->Close();
	DM1->Qdokter->SQL->Clear();
	DM1->Qdokter->SQL->Add("select *from dokter where kodedokter ='"+Edit39->Text+"'");
	DM1->Qdokter->Open();

	if(!DM1->Qdokter->IsEmpty())
	{
		String a;
		a = DM1->Qdokter->FieldByName("directory")->AsString;
		Edit28->Text = DM1->Qdokter->FieldByName("kodedokter")->AsString;
		Edit36->Text = DM1->Qdokter->FieldByName("namadokter")->AsString;
		Edit37->Text = DM1->Qdokter->FieldByName("alamatdokter")->AsString;
		Edit38->Text = DM1->Qdokter->FieldByName("telepondokter")->AsString;
		Image2->Picture->LoadFromFile(a);

	}
	else if(DM1->Qdokter->IsEmpty())
	{
		MessageBoxA(0,"Maaf Kode Dokter Tidak Terdaftar . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit36->Clear();
		Edit37->Clear();
		Edit38->Clear();
		Edit39->Clear();
		Edit28->Clear();
	}

}
}
//---------------------------------------------------------------------------



void __fastcall TPoliklinik::Image24Click(TObject *Sender)
{
if(Edit43->Text=="")
{
	MessageBoxA(0,"Masukan Kode Obat Terlebih Dahulu . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("select *from obat where kodeobat ='"+Edit43->Text+"'");
	DM1->Qobat->Open();

	if(!DM1->Qobat->IsEmpty())
	{
		Edit14->Text = DM1->Qobat->FieldByName("kodeobat")->AsString;
		Edit21->Text = DM1->Qobat->FieldByName("namaobat")->AsString;
		Edit16->Text = DM1->Qobat->FieldByName("merk")->AsString;
		ComboBox4->Text = DM1->Qobat->FieldByName("satuan")->AsString;
		Edit41->Text = DM1->Qobat->FieldByName("hargajual")->AsString;
		Edit42->Text = DM1->Qobat->FieldByName("noresep")->AsString;
	}
	else if(DM1->Qobat->IsEmpty())
	{
		MessageBoxA(0,"Obat Tidak Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();
		Edit43->Clear();
	}

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image27Click(TObject *Sender)
{
if(Edit46->Text=="")
{
	MessageBoxA(0,"Masukan Kode Poliklinik Terlebih Dahulu . . .","Poliklinik",MB_OK |MB_ICONINFORMATION);
}

else
{
	DM1->Qpoliklinik->Close();
	DM1->Qpoliklinik->SQL->Clear();
	DM1->Qpoliklinik->SQL->Add("select *from poliklinik where kodepoli ='"+Edit46->Text+"'");
	DM1->Qpoliklinik->Open();

	if(!DM1->Qpoliklinik->IsEmpty())
	{
	   Edit27->Text=DM1->Qpoliklinik->FieldByName("kodepoli")->AsString;
	   Edit44->Text	=DM1->Qpoliklinik->FieldByName("namapoli")->AsString;
	   Edit45->Text =DM1->Qpoliklinik->FieldByName("kodedokter")->AsString;
	}
	else if(DM1->Qpoliklinik->IsEmpty())
	{
		MessageBoxA(0,"Kode Poliklinik Tidak Terdaftar  . . . ","Poliklinik",
		MB_ICONWARNING | MB_OK);
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();
	}

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image26Click(TObject *Sender)
{
	DM1->Qpoliklinik->Close();
	DM1->Qpoliklinik->SQL->Clear();
	DM1->Qpoliklinik->SQL->Add("select *from poliklinik where kodepoli ='"+Edit46->Text+"'");
	DM1->Qpoliklinik->Open();
	DM1->Qpoliklinik->Edit();

	if(	Edit27->Text == DM1->Qpoliklinik->FieldByName("kodepoli")->AsString &&
	Edit44->Text == DM1->Qpoliklinik->FieldByName("namapoli")->AsString && Edit45->Text == DM1->Qpoliklinik->FieldByName("kodedokter")->AsString)
	{
		MessageBoxA(0,"Anda Belum Mengubah Data Poliklinik . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
		DM1->Qpoliklinik->FieldByName("kodepoli")->AsString = Edit27->Text ;
		DM1->Qpoliklinik->FieldByName("namapoli")->AsString = Edit44->Text ;
		DM1->Qpoliklinik->FieldByName("kodedokter")->AsString = Edit45->Text ;
		DM1->Qpoliklinik->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Data Poliklinik ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image25Click(TObject *Sender)
{
if(Edit46->Text=="")
{
	MessageBoxA(0,"Cari Kode Poli Yang Ingin Dicari","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qpoliklinik->Close();
	DM1->Qpoliklinik->SQL->Clear();
	DM1->Qpoliklinik->SQL->Add("delete from poliklinik where kodepoli ='"+Edit46->Text+"'");
	DM1->Qpoliklinik->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Data Poliklinik","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit27->Clear();
		Edit44->Clear();
		Edit45->Clear();
		Edit46->Clear();

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image22Click(TObject *Sender)
{
if(Edit43->Text=="")
{
	MessageBoxA(0,"Cari Kode Obat Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("delete from obat where kodeobat ='"+Edit43->Text+"'");
	DM1->Qobat->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Data Obat","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit43->Clear();
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image23Click(TObject *Sender)
{

	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("select *from obat where kodeobat ='"+Edit43->Text+"'");
	DM1->Qobat->Open();
	DM1->Qobat->Edit();

	if(	Edit14->Text == DM1->Qobat->FieldByName("kodeobat")->AsString &&
	Edit21->Text == DM1->Qobat->FieldByName("namaobat")->AsString &&
	Edit16->Text == DM1->Qobat->FieldByName("merk")->AsString &&
	ComboBox4->Text == DM1->Qobat->FieldByName("satuan") &&
	Edit41->Text == DM1->Qobat->FieldByName("hargajual")&&
	Edit42->Text == DM1->Qobat->FieldByName("noresep"))
	{
		MessageBoxA(0,"Anda Belum Mengubah Data Obat . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
		DM1->Qobat->FieldByName("kodeobat")->AsString = Edit14->Text ;
		DM1->Qobat->FieldByName("namaobat")->AsString = Edit21->Text ;
		DM1->Qobat->FieldByName("merk")->AsString = Edit16->Text ;
		DM1->Qobat->FieldByName("satuan")->AsString = ComboBox4->Text ;
		DM1->Qobat->FieldByName("hargajual")->AsString = Edit41->Text ;
		DM1->Qobat->FieldByName("noresep")->AsString = Edit42->Text ;
		DM1->Qobat->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Data Obat ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit14->Clear();
		Edit21->Clear();
		Edit16->Clear();
		Edit41->Clear();
		Edit42->Clear();
		Edit43->Clear();
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image19Click(TObject *Sender)
{
		DM1->Qdokter->Close();
	DM1->Qdokter->SQL->Clear();
	DM1->Qdokter->SQL->Add("select *from dokter where kodedokter ='"+Edit39->Text+"'");
	DM1->Qdokter->Open();
	DM1->Qdokter->Edit();

	if(	Edit28->Text == DM1->Qdokter->FieldByName("kodedokter")->AsString &&
	Edit36->Text == DM1->Qdokter->FieldByName("namadokter")->AsString && Edit37->Text == DM1->Qdokter->FieldByName("alamatdokter")->AsString &&
	Edit38->Text == DM1->Qdokter->FieldByName("telepondokter"))
	{
		MessageBoxA(0,"Anda Belum Mengubah Data Dokter . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
		DM1->Qdokter->FieldByName("kodedokter")->AsString = Edit28->Text ;
		DM1->Qdokter->FieldByName("namadokter")->AsString = Edit36->Text ;
		DM1->Qdokter->FieldByName("alamatdokter")->AsString = Edit37->Text ;
		DM1->Qdokter->FieldByName("telepondokter")->AsString = Edit38->Text ;
		DM1->Qdokter->FieldByName("directory")->AsString = Edit51->Text ;
		DM1->Qdokter->Post();
		MessageBoxA(0,"Anda Berhasil Mengubah Data Dokter ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit36->Clear();
		Edit37->Clear();
		Edit38->Clear();
		Edit39->Clear();
		Edit28->Clear();
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image20Click(TObject *Sender)
{
if(Edit39->Text=="")
{
	MessageBoxA(0,"Cari Kode Dokter Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qpegawai->Close();
	DM1->Qpegawai->SQL->Clear();
	DM1->Qpegawai->SQL->Add("delete from dokter where kodedokter ='"+Edit39->Text+"'");
	DM1->Qpegawai->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Data Dokter","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
		Edit36->Clear();
		Edit37->Clear();
		Edit38->Clear();
		Edit39->Clear();
		Edit28->Clear();

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image17Click(TObject *Sender)
{
if (Edit23->Text == "" ||
	Edit24->Text == "" || Edit25->Text == "" ||
	Edit26->Text == "" || DateTimePicker1->Date == Now()) {
		MessageBoxA(0,"Anda Belum Mengubah Data Pegawai . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
}
else {
	DM1->Qpegawai->Close();
	DM1->Qpegawai->SQL->Clear();
	DM1->Qpegawai->SQL->Add("select *from pegawai where nip ='"+Edit35->Text+"'");
	DM1->Qpegawai->Open();
	DM1->Qpegawai->Edit();

	if(	Edit23->Text == DM1->Qpegawai->FieldByName("nip")->AsString &&
	Edit24->Text == DM1->Qpegawai->FieldByName("namapegawai")->AsString && Edit25->Text == DM1->Qpegawai->FieldByName("alamatpegawai")->AsString &&
	Edit26->Text == DM1->Qpegawai->FieldByName("teleponpegawai")->AsString && DateTimePicker1->Date == DM1->Qpegawai->FieldByName("tgllahirpegawai")->AsDateTime)
	{
		MessageBoxA(0,"Anda Belum Mengubah Data Pegawai . . .","Poliklinik",
		MB_ICONWARNING | MB_OK);
	}
	else
	{
		String a;
		a= DM1->Qpegawai->FieldByName("directory")->AsString;
		DM1->Qpegawai->FieldByName("nip")->AsString = Edit23->Text ;
		DM1->Qpegawai->FieldByName("namapegawai")->AsString = Edit24->Text ;
		DM1->Qpegawai->FieldByName("alamatpegawai")->AsString = Edit25->Text ;
		DM1->Qpegawai->FieldByName("teleponpegawai")->AsString = Edit26->Text ;
		DM1->Qpegawai->FieldByName("tgllahirpegawai")->AsDateTime = DateTimePicker1->Date ;
		DM1->Qpegawai->FieldByName("directory")->AsString = Edit51->Text ;
		MessageBoxA(0,"Anda Berhasil Mengubah Data Pegawai ","Poliklinik",
		MB_ICONINFORMATION | MB_OK);
		Edit23->Clear();
		Edit24->Clear();
		Edit25->Clear();
		Edit26->Clear();
		DateTimePicker1->Date=Now();
	}
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Image18Click(TObject *Sender)
{
if(Edit35->Text=="")
{
	MessageBoxA(0,"Cari NIP Pegawai Yang Ingin Dihapus","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qpegawai->Close();
	DM1->Qpegawai->SQL->Clear();
	DM1->Qpegawai->SQL->Add("delete from pegawai where nip ='"+Edit23->Text+"'");
	DM1->Qpegawai->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Menghapus Data Pegawai","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
	Edit23->Clear();
		Edit24->Clear();
		Edit25->Clear();
		Edit26->Clear();

}
}
//---------------------------------------------------------------------------



void __fastcall TPoliklinik::Panel136Click(TObject *Sender)
{
	DM1->Qpasien->Close();
	DM1->Qpasien->SQL->Clear();
	DM1->Qpasien->SQL->Add("select *from pasien where nopasien = '"+Edit73->Text+"'");
	DM1->Qpasien->Open();
	DM1->Qjenisbiaya->Close();
	DM1->Qjenisbiaya->SQL->Clear();
	DM1->Qjenisbiaya->SQL->Add("select *from jenisbiaya where idjenisbiaya = '"+Label161->Caption+"'");
	DM1->Qjenisbiaya->Open();
	rbiaya->PrepareReport();
	rbiaya->ShowReport();
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::Panel137Click(TObject *Sender)
{
if(Label56->Caption=="-")
{
	MessageBoxA(0,"Cari No.Pasien Yang Ingin Dihapus . . .","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
}
else
{
	DM1->Qjadwalpraktek->Close();
	DM1->Qjadwalpraktek->SQL->Clear();
	DM1->Qjadwalpraktek->SQL->Add("delete from jadwalpraktek where kodejadwal ='"+Label56->Caption+"'");
	DM1->Qjadwalpraktek->ExecSQL();
	MessageBoxA(0,"Anda Berhasil Membatalkan Jadwal Praktek","Poliklinik",
	MB_ICONINFORMATION | MB_OK);
	Edit33->Clear();
	Edit34->Clear();
	Edit40->Clear();
	ComboBox1->Text="";
	ComboBox2->Text="";
	ComboBox3->Text="";
	Label56->Caption="-";
	Label57->Caption="-";
	Label58->Caption="-";

}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::Edit78Change(TObject *Sender)
{
int a,b;
float tarif;
a=StrToInt(Edit77->Text);
b=StrToInt(Edit78->Text);
tarif=a+b;
Edit49->Text=tarif;
}
//---------------------------------------------------------------------------


void __fastcall TPoliklinik::RadioButton3Click(TObject *Sender)
{
int a,b;
float tarif;
a=StrToInt(Edit77->Text);
b=StrToInt(Edit78->Text);
tarif=a+b;
Edit49->Text=tarif;
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::RadioButton4Click(TObject *Sender)
{
int a,b;
float tarif;
a=StrToInt(Edit77->Text);
b=StrToInt(Edit78->Text);
tarif=a+b;
Edit49->Text=tarif;
}
//---------------------------------------------------------------------------




void __fastcall TPoliklinik::ComboBox5Change(TObject *Sender)
{
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
  if (ComboBox5->TextHint == "PILIH OBAT") {
	 DM1->Qobat->SQL->Add("select * from obat");
	 DM1->Qobat->Open();
	}
	else{
	DM1->Qobat->SQL->Add("select * from obat where namaobat ='"+ComboBox5->Text+"'");
	DM1->Qobat->Open();
		}
	Edit69->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::ComboBox5DropDown(TObject *Sender)
{
	ComboBox5->Clear();
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("select distinct namaobat from obat where namaobat like '%"+ComboBox5->Text+"%'");
	DM1->Qobat->Open();
	ComboBox5->Text="";
	ComboBox5->Items->Add("PILIH OBAT");

	while ((!DM1->Qobat->Eof))

	{
		ComboBox5->Items->Add(DM1->Qobat->FieldByName("namaobat")->AsString);
		DM1->Qobat->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::ComboBox6Change(TObject *Sender)
{
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
  if (ComboBox6->TextHint == "PILIH OBAT") {
	 DM1->Qobat->SQL->Add("select * from obat");
	 DM1->Qobat->Open();
	}
	else{
	DM1->Qobat->SQL->Add("select * from obat where namaobat ='"+ComboBox6->Text+"'");
	DM1->Qobat->Open();
		}
	Edit69->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::ComboBox6DropDown(TObject *Sender)
{
	ComboBox6->Clear();
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("select distinct namaobat from obat where namaobat like '%"+ComboBox6->Text+"%'");
	DM1->Qobat->Open();
	ComboBox6->Text="";
	ComboBox6->Items->Add("PILIH OBAT");

	while ((!DM1->Qobat->Eof))

	{
		ComboBox6->Items->Add(DM1->Qobat->FieldByName("namaobat")->AsString);
		DM1->Qobat->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall TPoliklinik::ComboBox7DropDown(TObject *Sender)
{
	ComboBox7->Clear();
	DM1->Qobat->Close();
	DM1->Qobat->SQL->Clear();
	DM1->Qobat->SQL->Add("select distinct namaobat from obat where namaobat like '%"+ComboBox7->Text+"%'");
	DM1->Qobat->Open();
	ComboBox7->Text="";
	ComboBox7->Items->Add("PILIH OBAT");

	while ((!DM1->Qobat->Eof))

	{
		ComboBox7->Items->Add(DM1->Qobat->FieldByName("namaobat")->AsString);
		DM1->Qobat->Next();
	}
}
//---------------------------------------------------------------------------
