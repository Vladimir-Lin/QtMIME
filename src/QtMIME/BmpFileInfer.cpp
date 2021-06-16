#include "qtmime.h"

N::BmpFileInference:: BmpFileInference (void)
                    : MimePlugin       (    )
{
}

N::BmpFileInference::~BmpFileInference(void)
{
}

int N::BmpFileInference::type(void) const
{
  return 1020004 ;
}

QString N::BmpFileInference::name (void) const
{
  return QObject::tr("Windows Bitmap") ;
}

QStringList N::BmpFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "bmp"    ;
  return S      ;
}

int N::BmpFileInference::Acquire (void) const
{
  return 128 ;
}

int N::BmpFileInference::Header (void) const
{
  return 10 ;
}

int N::BmpFileInference::Footer (void) const
{
  return 8 ;
}

int N::BmpFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::BmpFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::BmpFileInference::match(QString suffix)
{
  return ( suffix.toLower() == "bmp" ) ;
}

int N::BmpFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::BmpFileInference::verify(QByteArray & trailer)
{
  return false ;
}
