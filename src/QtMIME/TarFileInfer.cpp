#include "qtmime.h"

N::TarFileInference:: TarFileInference (void)
                    : MimePlugin       (    )
{
}

N::TarFileInference::~TarFileInference(void)
{
}

int N::TarFileInference::type(void) const
{
  return 1030002 ;
}

QString N::TarFileInference::name (void) const
{
  return QObject::tr("GNU Tar") ;
}

QStringList N::TarFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "tar"    ;
  return S      ;
}

int N::TarFileInference::Acquire (void) const
{
  return 128 ;
}

int N::TarFileInference::Header (void) const
{
  return 10 ;
}

int N::TarFileInference::Footer (void) const
{
  return 8 ;
}

int N::TarFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::TarFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::TarFileInference::match(QString suffix)
{
  if ( suffix.toLower() == "tar" ) return true ;
  return false                                 ;
}

int N::TarFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::TarFileInference::verify(QByteArray & trailer)
{
  return false ;
}
