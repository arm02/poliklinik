//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Touch.GestureMgr.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include <Vcl.WinXCtrls.hpp>
//---------------------------------------------------------------------------
class TPoliklinik : public TForm
{
__published:	// IDE-managed Components
	TActionList *ActionList1;
	TAction *Action1;
	TGestureManager *GestureManager1;
	TPanel *AppBar;
	TImage *CloseButton;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel1;
	TLabel *Label1;
	TPanel *Panel5;
	TLabel *Label2;
	TPanel *PEA;
	TLabel *Label3;
	TPanel *Panel6;
	TLabel *Label4;
	TLabel *Label5;
	TPanel *Panel7;
	TPanel *Panel8;
	TPanel *Panel9;
	TPanel *Panel10;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TPanel *Panel14;
	TEdit *Edit1;
	TEdit *Edit2;
	TPanel *Panel15;
	TPanel *Panel16;
	TCheckBox *CheckBox1;
	TLabel *Label13;
	TPanel *Panel17;
	TPanel *Panel18;
	TEdit *Edit3;
	TPanel *Panel19;
	TPanel *Pdaftar;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TPanel *Panel21;
	TPanel *Panel22;
	TCheckBox *CheckBox2;
	TLabel *Label14;
	TPanel *Panel23;
	TEdit *Edit7;
	TPanel *Panel24;
	TPanel *Panel20;
	TEdit *Edit8;
	TLabel *Label15;
	TEdit *Edit9;
	TLabel *Label16;
	TPanel *Panel25;
	TPanel *Panel26;
	TLabel *Label17;
	TPanel *Panel27;
	TPanel *Panel28;
	TPanel *Panel29;
	TPanel *Panel30;
	TPanel *Panel31;
	TPanel *Panel33;
	TPanel *Panel34;
	TPanel *Panel35;
	TPanel *Panel36;
	TPanel *Panel37;
	TPanel *Panel39;
	TPanel *Panel40;
	TPanel *Panel41;
	TLabel *Label18;
	TEdit *Edit10;
	TLabel *Label19;
	TEdit *Edit11;
	TLabel *Label20;
	TEdit *Edit12;
	TLabel *Label21;
	TEdit *Edit13;
	TLabel *Label22;
	TLabel *Label23;
	TEdit *Edit15;
	TLabel *Label24;
	TEdit *Edit17;
	TEdit *Edit18;
	TEdit *Edit19;
	TPanel *Panel42;
	TPanel *Panel44;
	TLabel *Label28;
	TPanel *Panel46;
	TLabel *Label29;
	TEdit *Edit23;
	TEdit *Edit24;
	TEdit *Edit25;
	TEdit *Edit26;
	TPanel *Panel47;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TLabel *Label30;
	TPanel *Panel45;
	TLabel *Label31;
	TLabel *Label32;
	TLabel *Label33;
	TLabel *Label34;
	TLabel *Label35;
	TLabel *Label36;
	TLabel *Label37;
	TLabel *Label38;
	TLabel *Label39;
	TLabel *Label40;
	TLabel *Label41;
	TLabel *Label42;
	TLabel *Lnip;
	TLabel *Lnamapegawai;
	TLabel *Lalamatpegawai;
	TLabel *Lteleponpegawai;
	TLabel *Ltgllahirpegawai;
	TLabel *Ljeniskelamin;
	TImage *fotopegawai1;
	TImage *Image1;
	TPanel *Panel53;
	TOpenDialog *OpenDialog1;
	TPanel *Panel54;
	TPanel *Panel56;
	TPanel *Panel55;
	TPanel *Panel59;
	TLabel *Label47;
	TPanel *Panel60;
	TPanel *Panel62;
	TPanel *Panel63;
	TPanel *Panel64;
	TEdit *Edit33;
	TComboBox *ComboBox1;
	TPanel *Panel65;
	TLabel *Label50;
	TLabel *Label51;
	TLabel *Label52;
	TLabel *Label53;
	TLabel *Label54;
	TLabel *Label55;
	TPanel *Panel66;
	TLabel *Label56;
	TLabel *Label57;
	TLabel *Label58;
	TPanel *Panel58;
	TLabel *Label48;
	TLabel *Label49;
	TPanel *Panel57;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TEdit *Edit34;
	TPanel *Panel67;
	TLabel *Label59;
	TDBGrid *DBGrid1;
	TEdit *Edit35;
	TPanel *Panel48;
	TPanel *Panel49;
	TPanel *Panel50;
	TPanel *Panel51;
	TPanel *Panel68;
	TLabel *Label60;
	TEdit *Edit28;
	TEdit *Edit36;
	TEdit *Edit37;
	TDBGrid *DBGrid2;
	TPanel *Panel69;
	TPanel *Panel70;
	TPanel *Panel71;
	TPanel *Panel72;
	TPanel *Panel73;
	TEdit *Edit39;
	TImage *Image2;
	TPanel *Panel74;
	TEdit *Edit40;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker3;
	TDateTimePicker *DateTimePicker4;
	TLabel *Label65;
	TPanel *Panel43;
	TLabel *Label66;
	TLabel *Label67;
	TLabel *Label68;
	TLabel *Label69;
	TLabel *Label70;
	TLabel *Label71;
	TLabel *Label72;
	TEdit *Edit14;
	TEdit *Edit16;
	TEdit *Edit21;
	TEdit *Edit41;
	TEdit *Edit42;
	TDBGrid *DBGrid3;
	TEdit *Edit43;
	TPanel *Panel61;
	TPanel *Panel75;
	TPanel *Panel76;
	TPanel *Panel77;
	TPanel *Panel78;
	TComboBox *ComboBox4;
	TPanel *Panel32;
	TLabel *Label73;
	TEdit *Edit27;
	TEdit *Edit44;
	TEdit *Edit45;
	TLabel *Label74;
	TLabel *Label75;
	TLabel *Label76;
	TPanel *Panel79;
	TPanel *Panel38;
	TPanel *Panel80;
	TDBGrid *DBGrid4;
	TEdit *Edit46;
	TPanel *Panel81;
	TPanel *Panel82;
	TPanel *Panel83;
	TLabel *Label77;
	TLabel *Label78;
	TLabel *Label79;
	TEdit *Edit49;
	TEdit *Edit50;
	TPanel *Panel86;
	TPanel *Panel88;
	TPanel *Panel89;
	TLabel *Label80;
	TLabel *Label81;
	TLabel *Label82;
	TLabel *Label83;
	TLabel *Label84;
	TLabel *Label85;
	TLabel *Label86;
	TPanel *Panel87;
	TPanel *Panel90;
	TLabel *Label88;
	TPanel *Panel91;
	TPanel *Panel92;
	TPanel *Panel93;
	TEdit *Edit47;
	TEdit *Edit52;
	TPanel *Panel94;
	TLabel *Label87;
	TLabel *Label89;
	TLabel *Label90;
	TLabel *Label91;
	TImage *Image3;
	TLabel *Label92;
	TLabel *Label93;
	TLabel *Label94;
	TLabel *Label95;
	TLabel *Label96;
	TLabel *Label97;
	TLabel *Label98;
	TLabel *Label99;
	TLabel *Label100;
	TLabel *Label101;
	TLabel *Label102;
	TLabel *Label103;
	TPanel *Panel100;
	TPanel *Panel102;
	TPanel *Panel101;
	TLabel *Label109;
	TEdit *Edit61;
	TEdit *Edit64;
	TEdit *Edit65;
	TEdit *Edit66;
	TEdit *Edit67;
	TDBGrid *DBGrid7;
	TEdit *Edit68;
	TPanel *Panel104;
	TPanel *Panel105;
	TPanel *Panel106;
	TPanel *Panel107;
	TPanel *Panel108;
	TPanel *Panel109;
	TLabel *Label110;
	TEdit *Edit69;
	TLabel *Label111;
	TLabel *Label112;
	TPanel *Panel110;
	TPanel *Panel111;
	TDBGrid *DBGrid8;
	TPanel *Panel112;
	TLabel *Label113;
	TLabel *Label114;
	TLabel *Label115;
	TLabel *Label116;
	TLabel *Label117;
	TPanel *Panel113;
	TPanel *Panel114;
	TPanel *Panel115;
	TPanel *Panel116;
	TPanel *Panel118;
	TfrxReport *rjadwal;
	TfrxDBDataset *DBjadwal;
	TfrxReport *rpegawai;
	TfrxDBDataset *DBpegawai;
	TfrxDBDataset *DBdokter;
	TfrxReport *rdokter;
	TfrxDBDataset *DBobat;
	TfrxReport *robat;
	TPanel *Panel117;
	TLabel *Label118;
	TEdit *Edit73;
	TPanel *Panel119;
	TLabel *Label119;
	TLabel *Label120;
	TLabel *Label121;
	TLabel *Label122;
	TLabel *Label123;
	TLabel *Label124;
	TLabel *Label125;
	TLabel *Label126;
	TPanel *Panel120;
	TLabel *Label127;
	TLabel *Label128;
	TLabel *Label129;
	TLabel *Label130;
	TLabel *Label131;
	TLabel *Label132;
	TLabel *Label133;
	TLabel *Label134;
	TLabel *Label135;
	TLabel *Label136;
	TLabel *Label137;
	TLabel *Label139;
	TLabel *Label141;
	TPanel *Panel121;
	TPanel *Panel122;
	TLabel *Label138;
	TLabel *Label140;
	TLabel *Label142;
	TLabel *Label143;
	TLabel *Label144;
	TLabel *Label145;
	TLabel *Label146;
	TLabel *Label147;
	TLabel *Label148;
	TLabel *Label149;
	TLabel *Label150;
	TLabel *Label151;
	TLabel *Label152;
	TLabel *Label153;
	TLabel *Label154;
	TPanel *Panel123;
	TPanel *Panel124;
	TLabel *Label155;
	TLabel *Label156;
	TLabel *Label157;
	TLabel *Label158;
	TLabel *Label159;
	TLabel *Label160;
	TLabel *Label161;
	TLabel *Label162;
	TLabel *Label163;
	TPanel *Panel125;
	TPanel *Panel126;
	TEdit *Edit74;
	TfrxDBDataset *DBlabel;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TImage *Image10;
	TImage *Image11;
	TImage *Image13;
	TImage *Image12;
	TImage *Image14;
	TPanel *Panel127;
	TPanel *Panel13;
	TPanel *Panel11;
	TLabel *Label11;
	TLabel *Label12;
	TPanel *Panel12;
	TPanel *Panel128;
	TPanel *Panel129;
	TLabel *Label61;
	TLabel *Label62;
	TLabel *Label63;
	TLabel *Label64;
	TLabel *Label166;
	TLabel *Label167;
	TLabel *Label168;
	TLabel *Label171;
	TLabel *Label172;
	TLabel *Label173;
	TLabel *Label165;
	TLabel *Label169;
	TLabel *Label170;
	TLabel *Label174;
	TPanel *Panel130;
	TEdit *Edit53;
	TEdit *Edit54;
	TEdit *Edit55;
	TEdit *Edit56;
	TEdit *Edit57;
	TEdit *Edit58;
	TEdit *Edit59;
	TEdit *Edit60;
	TEdit *Edit62;
	TEdit *Edit63;
	TEdit *Edit76;
	TLabel *Label105;
	TLabel *Label106;
	TLabel *Label107;
	TLabel *Label108;
	TPanel *Panel103;
	TPanel *Panel95;
	TPanel *Panel96;
	TPanel *Panel97;
	TPanel *Panel98;
	TPanel *Panel99;
	TLabel *Label104;
	TPanel *Panel131;
	TDBGrid *DBGrid6;
	TPanel *Panel132;
	TPanel *Panel133;
	TLabel *Label164;
	TTimer *Timer1;
	TPanel *Panel134;
	TEdit *Edit32;
	TPanel *Panel52;
	TLabel *Label46;
	TEdit *Edit31;
	TLabel *Label45;
	TLabel *Label44;
	TEdit *Edit30;
	TEdit *Edit29;
	TLabel *Label43;
	TLabel *Label27;
	TEdit *Edit22;
	TDateTimePicker *DateTimePicker2;
	TLabel *Label26;
	TEdit *Edit20;
	TLabel *Label25;
	TLabel *Label175;
	TPanel *Panel85;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TEdit *Edit48;
	TPanel *Panel135;
	TPanel *Panel84;
	TLabel *Label176;
	TLabel *Label177;
	TLabel *Label178;
	TLabel *Label179;
	TImage *Image15;
	TImage *Image16;
	TImage *Image17;
	TImage *Image18;
	TImage *Image19;
	TImage *Image20;
	TImage *Image22;
	TImage *Image23;
	TEdit *Edit77;
	TEdit *Edit78;
	TfrxReport *rbiaya;
	TfrxDBDataset *DBpasien;
	TfrxDBDataset *DBbiaya;
	TImage *Image21;
	TImage *Image24;
	TImage *Image25;
	TImage *Image26;
	TImage *Image27;
	TImage *Image28;
	TImage *Image29;
	TEdit *Edit38;
	TImage *Image30;
	TImage *Image31;
	TImage *Image32;
	TImage *Image33;
	TLabel *Label180;
	TLabel *Label181;
	TLabel *Label182;
	TLabel *Label183;
	TLabel *Label184;
	TLabel *Label185;
	TPanel *Panel136;
	TPanel *Panel137;
	TEdit *Edit51;
	TLabel *Label186;
	TLabel *Label187;
	TComboBox *ComboBox5;
	TComboBox *ComboBox6;
	TComboBox *ComboBox7;
	void __fastcall CloseButtonClick(TObject *Sender);
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormGesture(TObject *Sender, const TGestureEventInfo &EventInfo,
          bool &Handled);
	void __fastcall Panel4Click(TObject *Sender);
	void __fastcall Panel3Click(TObject *Sender);
	void __fastcall Panel3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel3MouseLeave(TObject *Sender);
	void __fastcall Panel4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel4MouseLeave(TObject *Sender);
	void __fastcall Label2MouseLeave(TObject *Sender);
	void __fastcall Label2MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label3MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label3MouseLeave(TObject *Sender);
		void __fastcall Label4MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label4MouseLeave(TObject *Sender);
		void __fastcall Label5MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label5MouseLeave(TObject *Sender);
	void __fastcall Panel6MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel6MouseLeave(TObject *Sender);
	void __fastcall PEAMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall PEAMouseLeave(TObject *Sender);
	void __fastcall Panel5MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel5MouseLeave(TObject *Sender);
	void __fastcall Label1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label1MouseLeave(TObject *Sender);
	void __fastcall Label9MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label9MouseLeave(TObject *Sender);
	void __fastcall Label10MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label10MouseLeave(TObject *Sender);
	void __fastcall Panel12MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel12MouseLeave(TObject *Sender);
	void __fastcall Label12MouseLeave(TObject *Sender);
	void __fastcall Label12MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel12Click(TObject *Sender);
	void __fastcall Label12Click(TObject *Sender);
	void __fastcall Panel16Click(TObject *Sender);
	void __fastcall Panel5Click(TObject *Sender);
	void __fastcall Label2Click(TObject *Sender);
	void __fastcall Label8Click(TObject *Sender);
	void __fastcall Panel17Click(TObject *Sender);
	void __fastcall Panel19Click(TObject *Sender);
	void __fastcall Panel15Click(TObject *Sender);
	void __fastcall Panel22Click(TObject *Sender);
	void __fastcall Label1DblClick(TObject *Sender);
	void __fastcall Panel24Click(TObject *Sender);
	void __fastcall Panel26Click(TObject *Sender);
	void __fastcall Panel9Click(TObject *Sender);
	void __fastcall PEAClick(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall Label6Click(TObject *Sender);
	void __fastcall Label7Click(TObject *Sender);
	void __fastcall Panel40Click(TObject *Sender);
	void __fastcall Panel28MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel28MouseLeave(TObject *Sender);
	void __fastcall Panel29MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel29MouseLeave(TObject *Sender);
	void __fastcall Panel30MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel30MouseLeave(TObject *Sender);
	void __fastcall Panel31MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel31MouseLeave(TObject *Sender);
	void __fastcall Panel33MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel33MouseLeave(TObject *Sender);
	void __fastcall Panel25Click(TObject *Sender);
	void __fastcall Panel43Click(TObject *Sender);
	void __fastcall Panel6Click(TObject *Sender);
	void __fastcall Panel28Click(TObject *Sender);
	void __fastcall Panel21Click(TObject *Sender);
	void __fastcall Panel47Click(TObject *Sender);
	void __fastcall Panel42Click(TObject *Sender);
	void __fastcall Panel52Click(TObject *Sender);
	void __fastcall Panel53Click(TObject *Sender);
	void __fastcall Panel54Click(TObject *Sender);
	void __fastcall Panel59Click(TObject *Sender);
	void __fastcall Panel63Click(TObject *Sender);
	void __fastcall Panel65Click(TObject *Sender);
	void __fastcall Panel66Click(TObject *Sender);
	void __fastcall Panel60Click(TObject *Sender);
	void __fastcall Panel67Click(TObject *Sender);
	void __fastcall Panel48Click(TObject *Sender);
	void __fastcall Edit35Change(TObject *Sender);
	void __fastcall Panel49Click(TObject *Sender);
	void __fastcall Panel50Click(TObject *Sender);
	void __fastcall Panel51Click(TObject *Sender);
	void __fastcall Panel29Click(TObject *Sender);
	void __fastcall Panel72Click(TObject *Sender);
	void __fastcall Panel71Click(TObject *Sender);
	void __fastcall Panel69Click(TObject *Sender);
	void __fastcall Edit39Change(TObject *Sender);
	void __fastcall Panel70Click(TObject *Sender);
	void __fastcall Panel73Click(TObject *Sender);
	void __fastcall Panel74Click(TObject *Sender);
	void __fastcall Panel30Click(TObject *Sender);
	void __fastcall Panel61Click(TObject *Sender);
	void __fastcall Panel78Click(TObject *Sender);
	void __fastcall Panel76Click(TObject *Sender);
	void __fastcall Edit43Change(TObject *Sender);
	void __fastcall Panel75Click(TObject *Sender);
	void __fastcall Panel77Click(TObject *Sender);
	void __fastcall Panel31Click(TObject *Sender);
	void __fastcall Panel80Click(TObject *Sender);
	void __fastcall Panel38Click(TObject *Sender);
	void __fastcall Panel81Click(TObject *Sender);
	void __fastcall Panel79Click(TObject *Sender);
	void __fastcall Edit46Change(TObject *Sender);
	void __fastcall Panel82Click(TObject *Sender);
	void __fastcall Panel89Click(TObject *Sender);
	void __fastcall Panel86Click(TObject *Sender);
	void __fastcall Panel88Click(TObject *Sender);
	void __fastcall Panel85Click(TObject *Sender);
	void __fastcall Panel62Click(TObject *Sender);
	void __fastcall Panel90MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel90MouseLeave(TObject *Sender);
	void __fastcall Panel58MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel58MouseLeave(TObject *Sender);
	void __fastcall Label48MouseLeave(TObject *Sender);
	void __fastcall Label48MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label49MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label49MouseLeave(TObject *Sender);
	void __fastcall Panel90Click(TObject *Sender);
	void __fastcall Panel93Click(TObject *Sender);
	void __fastcall Panel92Click(TObject *Sender);
	void __fastcall Panel100Click(TObject *Sender);
	void __fastcall o(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall Panel103Click(TObject *Sender);
	void __fastcall Panel98Click(TObject *Sender);
	void __fastcall Panel99Click(TObject *Sender);
	void __fastcall Panel97Click(TObject *Sender);
	void __fastcall Panel96Click(TObject *Sender);
	void __fastcall Panel95Click(TObject *Sender);
	void __fastcall Panel106Click(TObject *Sender);
	void __fastcall Panel104Click(TObject *Sender);
	void __fastcall Panel105Click(TObject *Sender);
	void __fastcall Panel107Click(TObject *Sender);
	void __fastcall Panel108Click(TObject *Sender);
	void __fastcall Edit68Change(TObject *Sender);
	void __fastcall Edit62Change(TObject *Sender);
	void __fastcall Panel110Click(TObject *Sender);
	void __fastcall Panel111Click(TObject *Sender);
	void __fastcall Panel118Click(TObject *Sender);
	void __fastcall Panel120Click(TObject *Sender);
	void __fastcall Panel58Click(TObject *Sender);
	void __fastcall Panel121Click(TObject *Sender);
	void __fastcall Panel123Click(TObject *Sender);
	void __fastcall Panel119Click(TObject *Sender);
	void __fastcall Panel126Click(TObject *Sender);
	void __fastcall Panel33Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel128Click(TObject *Sender);
	void __fastcall Panel131Click(TObject *Sender);
	void __fastcall Panel132Click(TObject *Sender);
	void __fastcall Panel133Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Panel135Click(TObject *Sender);
	void __fastcall Label177Click(TObject *Sender);
	void __fastcall Label179Click(TObject *Sender);
	void __fastcall Label178Click(TObject *Sender);
	void __fastcall Label178MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Label178MouseLeave(TObject *Sender);
	void __fastcall Label179MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel48MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Panel48MouseLeave(TObject *Sender);
	void __fastcall Panel46MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image21Click(TObject *Sender);
	void __fastcall Image24Click(TObject *Sender);
	void __fastcall Image27Click(TObject *Sender);
	void __fastcall Image26Click(TObject *Sender);
	void __fastcall Image25Click(TObject *Sender);
	void __fastcall Image22Click(TObject *Sender);
	void __fastcall Image23Click(TObject *Sender);
	void __fastcall Image19Click(TObject *Sender);
	void __fastcall Image20Click(TObject *Sender);
	void __fastcall Image17Click(TObject *Sender);
	void __fastcall Image18Click(TObject *Sender);
	void __fastcall Panel136Click(TObject *Sender);
	void __fastcall Panel137Click(TObject *Sender);
	void __fastcall Edit78Change(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
	void __fastcall ComboBox5Change(TObject *Sender);
	void __fastcall ComboBox5DropDown(TObject *Sender);
	void __fastcall ComboBox6Change(TObject *Sender);
	void __fastcall ComboBox6DropDown(TObject *Sender);
	void __fastcall ComboBox7DropDown(TObject *Sender);






private:	// User declarations
	void __fastcall AppBarResize(void);
	void __fastcall AppBarShow(int mode);
public:		// User declarations
	__fastcall TPoliklinik(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPoliklinik *Poliklinik;
//---------------------------------------------------------------------------
#endif
