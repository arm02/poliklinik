object DM1: TDM1
  OldCreateOrder = False
  Height = 387
  Width = 444
  object koneksi: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;User ID=root;Data' +
      ' Source=poliklinik;Initial Catalog=poliklinik'
    LoginPrompt = False
    Left = 40
    Top = 32
  end
  object Qlogin: TADOQuery
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from login;')
    Left = 104
    Top = 32
  end
  object Qpegawai: TADOQuery
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from pegawai;')
    Left = 104
    Top = 88
  end
  object Qpendaftaran: TADOQuery
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from pendaftaran;')
    Left = 152
    Top = 32
  end
  object Qpasien: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from pasien;')
    Left = 152
    Top = 88
  end
  object Qjenisbiaya: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from jenisbiaya;')
    Left = 360
    Top = 32
  end
  object Qpemeriksaan: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from pemeriksaan;')
    Left = 208
    Top = 32
  end
  object Qresep: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from resep;')
    Left = 208
    Top = 88
  end
  object Qobat: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from obat;')
    Left = 264
    Top = 96
  end
  object Qjadwalpraktek: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from jadwalpraktek;')
    Left = 312
    Top = 32
  end
  object Qdokter: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from dokter;')
    Left = 264
    Top = 32
  end
  object Qpoliklinik: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select *from poliklinik;')
    Left = 312
    Top = 96
  end
  object DSlogin: TDataSource
    DataSet = Qlogin
    Left = 32
    Top = 184
  end
  object DSpendaftaran: TDataSource
    DataSet = Qpendaftaran
    Left = 88
    Top = 184
  end
  object DSpemeriksaan: TDataSource
    DataSet = Qpemeriksaan
    Left = 136
    Top = 184
  end
  object DSdokter: TDataSource
    DataSet = Qdokter
    Left = 184
    Top = 184
  end
  object DSjadwalpraktek: TDataSource
    DataSet = Qjadwalpraktek
    Left = 232
    Top = 184
  end
  object DSpegawai: TDataSource
    DataSet = Qpegawai
    Left = 328
    Top = 184
  end
  object DSpasien: TDataSource
    DataSet = Qpasien
    Left = 32
    Top = 248
  end
  object DSresep: TDataSource
    DataSet = Qresep
    Left = 88
    Top = 248
  end
  object DSobat: TDataSource
    DataSet = Qobat
    Left = 136
    Top = 248
  end
  object DSpoliklinik: TDataSource
    DataSet = Qpoliklinik
    Left = 184
    Top = 248
  end
  object Qlabel: TADOQuery
    Active = True
    Connection = koneksi
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from label;')
    Left = 360
    Top = 112
  end
  object DSlabel: TDataSource
    DataSet = Qlabel
    Left = 232
    Top = 256
  end
  object DSjenisbiaya: TDataSource
    DataSet = Qjenisbiaya
    Left = 344
    Top = 264
  end
end
