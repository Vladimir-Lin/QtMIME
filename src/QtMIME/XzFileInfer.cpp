#include "qtmime.h"

N::XzFileInference:: XzFileInference (void)
                   : MimePlugin      (    )
                   , XZ              (    )
{
}

N::XzFileInference::~XzFileInference(void)
{
}

int N::XzFileInference::type(void) const
{
  return 1010003 ;
}

QString N::XzFileInference::name (void) const
{
  return QObject::tr("XZ Utils") ;
}

QStringList N::XzFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "xz"     ;
  return S      ;
}

int N::XzFileInference::Acquire (void) const
{
  return 128 ;
}

int N::XzFileInference::Header (void) const
{
  return 6 ;
}

int N::XzFileInference::Footer (void) const
{
  return 12 ;
}

int N::XzFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::XzFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::XzFileInference::match(QString suffix)
{
  return ( suffix.toLower() == "xz" ) ;
}

int N::XzFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::XzFileInference::verify(QByteArray & trailer)
{
  return false ;
}
