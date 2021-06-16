#include "qtmime.h"

N::RarFileInference:: RarFileInference (void)
                    : MimePlugin       (    )
{
}

N::RarFileInference::~RarFileInference(void)
{
}

int N::RarFileInference::type(void) const
{
  return 1030004 ;
}

QString N::RarFileInference::name (void) const
{
  return QObject::tr("RAR") ;
}

QStringList N::RarFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "rar"    ;
  return S      ;
}

int N::RarFileInference::Acquire (void) const
{
  return 128 ;
}

int N::RarFileInference::Header (void) const
{
  return 10 ;
}

int N::RarFileInference::Footer (void) const
{
  return 8 ;
}

int N::RarFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::RarFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::RarFileInference::match(QString suffix)
{
  if ( suffix.toLower() == "rar" ) return true ;
  return false                                 ;
}

int N::RarFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::RarFileInference::verify(QByteArray & trailer)
{
  return false ;
}
