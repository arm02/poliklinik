//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------


#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Unit3.cpp", Form3);
USEFORM("Unit1.cpp", DM1); /* TDataModule: File Type */
USEFORM("Unit2.cpp", Poliklinik);


//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->UseMetropolisUI();
		Application->Title = "Metropolis UI Application";
		Application->CreateForm(__classid(TDM1), &DM1);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TPoliklinik), &Poliklinik);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
