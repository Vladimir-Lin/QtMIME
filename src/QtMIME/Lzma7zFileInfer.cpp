#include "qtmime.h"

N::Lzma7zFileInference:: Lzma7zFileInference (void)
                       : MimePlugin          (    )
{
}

N::Lzma7zFileInference::~Lzma7zFileInference(void)
{
}

int N::Lzma7zFileInference::type(void) const
{
  return 1030005 ;
}

QString N::Lzma7zFileInference::name (void) const
{
  return QObject::tr("7z LZMA") ;
}

QStringList N::Lzma7zFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "7z"     ;
  return S      ;
}

int N::Lzma7zFileInference::Acquire (void) const
{
  return 128 ;
}

int N::Lzma7zFileInference::Header (void) const
{
  return 10 ;
}

int N::Lzma7zFileInference::Footer (void) const
{
  return 8 ;
}

int N::Lzma7zFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::Lzma7zFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::Lzma7zFileInference::match(QString suffix)
{
  if ( suffix.toLower() == "7z" ) return true ;
  return false                                ;
}

int N::Lzma7zFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::Lzma7zFileInference::verify(QByteArray & trailer)
{
  return false ;
}
