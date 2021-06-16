#include "qtmime.h"

N::JpegFileInference:: JpegFileInference (void)
                     : MimePlugin        (    )
{
}

N::JpegFileInference::~JpegFileInference(void)
{
}

int N::JpegFileInference::type(void) const
{
  return 1020001 ;
}

QString N::JpegFileInference::name (void) const
{
  return QObject::tr("Joint Photographic Experts Group") ;
}

QStringList N::JpegFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "jpg"    ;
  S << "jpeg"   ;
  return S      ;
}

int N::JpegFileInference::Acquire (void) const
{
  return 128 ;
}

int N::JpegFileInference::Header (void) const
{
  return 10 ;
}

int N::JpegFileInference::Footer (void) const
{
  return 8 ;
}

int N::JpegFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::JpegFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::JpegFileInference::match(QString suffix)
{
  if ( suffix.toLower() == "jpg"  ) return true ;
  if ( suffix.toLower() == "jpeg" ) return true ;
  return false                                  ;
}

int N::JpegFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::JpegFileInference::verify(QByteArray & trailer)
{
  return false ;
}
