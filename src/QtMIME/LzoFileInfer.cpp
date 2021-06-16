#include "qtmime.h"

N::LzoFileInference:: LzoFileInference (void)
                    : MimePlugin       (    )
                    , LZO              (    )
{
}

N::LzoFileInference::~LzoFileInference(void)
{
}

int N::LzoFileInference::type(void) const
{
  return 1010004 ;
}

QString N::LzoFileInference::name (void) const
{
  return QObject::tr("Lempel-Ziv-Oberhumer data compression") ;
}

QStringList N::LzoFileInference::Suffixes (void) const
{
  QStringList S ;
  S << "lzo"    ;
  return S      ;
}

int N::LzoFileInference::Acquire (void) const
{
  return 16 ;
}

int N::LzoFileInference::Header (void) const
{
  return 8 ;
}

int N::LzoFileInference::Footer (void) const
{
  return 8 ;
}

int N::LzoFileInference::Minimum (void) const
{
  return 8 ;
}

bool N::LzoFileInference::guess(QString filename)
{
  QString S = Suffix(filename) ;
  return match(S)              ;
}

bool N::LzoFileInference::match(QString suffix)
{
  return ( suffix . toLower ( ) == "lzo" ) ;
}

int N::LzoFileInference::guess(QByteArray & header)
{
  return QtLzo::isLZO ( header ) ? 1 : 0 ;
}

bool N::LzoFileInference::verify(QByteArray & trailer)
{
  return QtLzo::IsTail ( trailer ) ;
}
