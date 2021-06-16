#include "qtmime.h"

N::Iso9660FileInference:: Iso9660FileInference (void)
                        : MimePlugin           (    )
{
}

N::Iso9660FileInference::~Iso9660FileInference(void)
{
}

int N::Iso9660FileInference::type(void) const
{
  return 1030001 ;
}

QString N::Iso9660FileInference::name (void) const
{
  return QObject::tr("ISO 9660") ;
}

QStringList N::Iso9660FileInference::Suffixes (void) const
{
  QStringList S ;
  S << "iso"    ;
  return S      ;
}

int N::Iso9660FileInference::Acquire (void) const
{
  return 128 ;
}

int N::Iso9660FileInference::Header (void) const
{
  return 10 ;
}

int N::Iso9660FileInference::Footer (void) const
{
  return 8 ;
}

int N::Iso9660FileInference::Minimum (void) const
{
  return 18 ;
}

bool N::Iso9660FileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::Iso9660FileInference::match(QString suffix)
{
  if ( suffix.toLower() == "iso" ) return true ;
  return false                                 ;
}

int N::Iso9660FileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::Iso9660FileInference::verify(QByteArray & trailer)
{
  return false ;
}
