#include "qtmime.h"

N::GzFileInference:: GzFileInference (void)
                   : MimePlugin      (    )
                   , GZ              (    )
{
}

N::GzFileInference::~GzFileInference(void)
{
}

int N::GzFileInference::type(void) const
{
  return 1010001 ;
}

QString N::GzFileInference::name (void) const
{
  return QObject::tr("GNU ZIP") ;
}

QStringList N::GzFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "gz"     ;
  return S      ;
}

int N::GzFileInference::Acquire (void) const
{
  return 128 ;
}

int N::GzFileInference::Header (void) const
{
  return 10 ;
}

int N::GzFileInference::Footer (void) const
{
  return 8 ;
}

int N::GzFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::GzFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::GzFileInference::match(QString suffix)
{
  return ( suffix.toLower() == "gz" ) ;
}

int N::GzFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::GzFileInference::verify(QByteArray & trailer)
{
  return false ;
}
