#include "qtmime.h"

N::ZipFileInference:: ZipFileInference (void)
                    : MimePlugin       (    )
{
}

N::ZipFileInference::~ZipFileInference(void)
{
}

int N::ZipFileInference::type(void) const
{
  return 1030003 ;
}

QString N::ZipFileInference::name (void) const
{
  return QObject::tr("ZIP") ;
}

QStringList N::ZipFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "zip"    ;
  return S      ;
}

int N::ZipFileInference::Acquire (void) const
{
  return 128 ;
}

int N::ZipFileInference::Header (void) const
{
  return 10 ;
}

int N::ZipFileInference::Footer (void) const
{
  return 8 ;
}

int N::ZipFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::ZipFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::ZipFileInference::match(QString suffix)
{
  if ( suffix.toLower() == "zip" ) return true ;
  return false                                 ;
}

int N::ZipFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::ZipFileInference::verify(QByteArray & trailer)
{
  return false ;
}
