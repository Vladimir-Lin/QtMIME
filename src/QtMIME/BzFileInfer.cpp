#include "qtmime.h"

N::BzFileInference:: BzFileInference (void)
                   : MimePlugin      (    )
                   , BZIP2           (    )
{
}

N::BzFileInference::~BzFileInference(void)
{
}

int N::BzFileInference::type(void) const
{
  return 1010002 ;
}

QString N::BzFileInference::name (void) const
{
  return QObject::tr("GNU BZIP2") ;
}

QStringList N::BzFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "bz2"    ;
  S << "bz"     ;
  return S      ;
}

int N::BzFileInference::Acquire (void) const
{
  return 128 ;
}

int N::BzFileInference::Header (void) const
{
  return 4 ;
}

int N::BzFileInference::Footer (void) const
{
  return 10 ;
}

int N::BzFileInference::Minimum (void) const
{
  return 14 ;
}

bool N::BzFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::BzFileInference::match(QString suffix)
{
  QString bz2 = suffix.toLower()  ;
  if ( bz2 == "bz2" ) return true ;
  if ( bz2 == "bz"  ) return true ;
  return false                    ;
}

int N::BzFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::BzFileInference::verify(QByteArray & trailer)
{
  return false ;
}
