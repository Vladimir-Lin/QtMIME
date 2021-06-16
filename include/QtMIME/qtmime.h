/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin
 *
 ****************************************************************************/

#ifndef QT_MIME_H
#define QT_MIME_H

#include <Essentials>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTMIME_LIB)
#    define Q_MIME_EXPORT Q_DECL_EXPORT
#  else
#    define Q_MIME_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_MIME_EXPORT
#endif

namespace N
{

class Q_MIME_EXPORT GzFileInference      ;
class Q_MIME_EXPORT BzFileInference      ;
class Q_MIME_EXPORT XzFileInference      ;
class Q_MIME_EXPORT LzoFileInference     ;
class Q_MIME_EXPORT JpegFileInference    ;
class Q_MIME_EXPORT TiffFileInference    ;
class Q_MIME_EXPORT PngFileInference     ;
class Q_MIME_EXPORT BmpFileInference     ;
class Q_MIME_EXPORT Iso9660FileInference ;
class Q_MIME_EXPORT TarFileInference     ;
class Q_MIME_EXPORT ZipFileInference     ;
class Q_MIME_EXPORT RarFileInference     ;
class Q_MIME_EXPORT Lzma7zFileInference  ;

class Q_MIME_EXPORT GzFileInference : public MimePlugin
                                    , public GZ
{
  public:

    explicit GzFileInference     (void) ;
    virtual ~GzFileInference     (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT BzFileInference : public MimePlugin
                                    , public BZIP2
{
  public:

    explicit BzFileInference     (void) ;
    virtual ~BzFileInference     (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT XzFileInference : public MimePlugin
                                    , public XZ
{
  public:

    explicit XzFileInference     (void) ;
    virtual ~XzFileInference     (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT LzoFileInference : public MimePlugin
                                     , public LZO
{
  public:

    explicit LzoFileInference    (void) ;
    virtual ~LzoFileInference    (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT JpegFileInference : public MimePlugin
{
  public:

    explicit JpegFileInference   (void) ;
    virtual ~JpegFileInference   (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT TiffFileInference : public MimePlugin
{
  public:

    explicit TiffFileInference   (void) ;
    virtual ~TiffFileInference   (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT PngFileInference : public MimePlugin
{
  public:

    explicit PngFileInference    (void) ;
    virtual ~PngFileInference    (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT BmpFileInference : public MimePlugin
{
  public:

    explicit BmpFileInference    (void) ;
    virtual ~BmpFileInference    (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT Iso9660FileInference : public MimePlugin
{
  public:

    explicit Iso9660FileInference (void) ;
    virtual ~Iso9660FileInference (void) ;

    virtual int         type      (void) const ;
    virtual QString     name      (void) const ;
    virtual QStringList Suffixes  (void) const ;
    virtual int         Acquire   (void) const ;
    virtual int         Header    (void) const ;
    virtual int         Footer    (void) const ;
    virtual int         Minimum   (void) const ;

    virtual bool        guess     (QString filename) ;
    virtual bool        match     (QString suffix) ;
    virtual int         guess     (QByteArray & header) ; // return MimeId
    virtual bool        verify    (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT TarFileInference : public MimePlugin
{
  public:

    explicit TarFileInference    (void) ;
    virtual ~TarFileInference    (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT ZipFileInference : public MimePlugin
{
  public:

    explicit ZipFileInference    (void) ;
    virtual ~ZipFileInference    (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT RarFileInference : public MimePlugin
{
  public:

    explicit RarFileInference    (void) ;
    virtual ~RarFileInference    (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

class Q_MIME_EXPORT Lzma7zFileInference : public MimePlugin
{
  public:

    explicit Lzma7zFileInference (void) ;
    virtual ~Lzma7zFileInference (void) ;

    virtual int         type     (void) const ;
    virtual QString     name     (void) const ;
    virtual QStringList Suffixes (void) const ;
    virtual int         Acquire  (void) const ;
    virtual int         Header   (void) const ;
    virtual int         Footer   (void) const ;
    virtual int         Minimum  (void) const ;

    virtual bool        guess    (QString filename) ;
    virtual bool        match    (QString suffix) ;
    virtual int         guess    (QByteArray & header) ; // return MimeId
    virtual bool        verify   (QByteArray & trailer) ;

  protected:

  private:

};

}

Q_DECLARE_METATYPE(N::GzFileInference)
Q_DECLARE_METATYPE(N::BzFileInference)
Q_DECLARE_METATYPE(N::XzFileInference)
Q_DECLARE_METATYPE(N::LzoFileInference)
Q_DECLARE_METATYPE(N::JpegFileInference)
Q_DECLARE_METATYPE(N::TiffFileInference)
Q_DECLARE_METATYPE(N::PngFileInference)
Q_DECLARE_METATYPE(N::BmpFileInference)
Q_DECLARE_METATYPE(N::Iso9660FileInference)
Q_DECLARE_METATYPE(N::TarFileInference)
Q_DECLARE_METATYPE(N::ZipFileInference)
Q_DECLARE_METATYPE(N::RarFileInference)
Q_DECLARE_METATYPE(N::Lzma7zFileInference)

QT_END_NAMESPACE

#endif
