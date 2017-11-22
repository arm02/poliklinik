//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDM1 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *koneksi;
	TADOQuery *Qlogin;
	TADOQuery *Qpegawai;
	TADOQuery *Qpendaftaran;
	TADOQuery *Qpasien;
	TADOQuery *Qjenisbiaya;
	TADOQuery *Qpemeriksaan;
	TADOQuery *Qresep;
	TADOQuery *Qobat;
	TADOQuery *Qjadwalpraktek;
	TADOQuery *Qdokter;
	TADOQuery *Qpoliklinik;
	TDataSource *DSlogin;
	TDataSource *DSpendaftaran;
	TDataSource *DSpemeriksaan;
	TDataSource *DSdokter;
	TDataSource *DSjadwalpraktek;
	TDataSource *DSpegawai;
	TDataSource *DSpasien;
	TDataSource *DSresep;
	TDataSource *DSobat;
	TDataSource *DSpoliklinik;
	TADOQuery *Qlabel;
	TDataSource *DSlabel;
	TDataSource *DSjenisbiaya;
private:	// User declarations
public:		// User declarations
	__fastcall TDM1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM1 *DM1;
//---------------------------------------------------------------------------
#endif
