#include "qtmime.h"

N::PngFileInference:: PngFileInference (void)
                    : MimePlugin       (    )
{
}

N::PngFileInference::~PngFileInference(void)
{
}

int N::PngFileInference::type(void) const
{
  return 1020003 ;
}

QString N::PngFileInference::name (void) const
{
  return QObject::tr("Portable Network Graphics") ;
}

QStringList N::PngFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "png"    ;
  return S      ;
}

int N::PngFileInference::Acquire (void) const
{
  return 128 ;
}

int N::PngFileInference::Header (void) const
{
  return 10 ;
}

int N::PngFileInference::Footer (void) const
{
  return 8 ;
}

int N::PngFileInference::Minimum (void) const
{
  return 18 ;
}

bool N::PngFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::PngFileInference::match(QString suffix)
{
  return ( suffix.toLower() == "png" ) ;
}

int N::PngFileInference::guess(QByteArray & header)
{
  return 0 ;
}

bool N::PngFileInference::verify(QByteArray & trailer)
{
  return false ;
}
