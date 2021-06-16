#include "qtmime.h"

N::TiffFileInference:: TiffFileInference (void)
                     : MimePlugin        (    )
{
}

N::TiffFileInference::~TiffFileInference(void)
{
}

int N::TiffFileInference::type(void) const
{
  return 1020002 ;
}

QString N::TiffFileInference::name (void) const
{
  return QObject::tr("Tagged Image File Format") ;
}

QStringList N::TiffFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "tif"    ;
  S << "tiff"   ;
  return S      ;
}

int N::TiffFileInference::Acquire (void) const
{
  return 128 ;
}

int N::TiffFileInference::Header (void) const
{
  return 10 ;
}

int N::TiffFileInference::Footer (void) const
{
  return 8 ;
}

int N::TiffFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::TiffFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::TiffFileInference::match(QString suffix)
{
  if ( suffix.toLower() == "tif"  ) return true ;
  if ( suffix.toLower() == "tiff" ) return true ;
  return false                                  ;
}

int N::TiffFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::TiffFileInference::verify(QByteArray & trailer)
{
  return false ;
}
