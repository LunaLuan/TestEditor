#ifndef DOCUMENTHANDLER_H
#define DOCUMENTHANDLER_H

#include <QQuickTextDocument>

#include <QtGui/QTextCharFormat>
#include <QtCore/QTextCodec>

#include <qqmlfile.h>

class DocumentHandler : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QUrl fileUrl
               READ fileUrl
               WRITE setFileUrl
               NOTIFY fileUrlChanged)
    Q_PROPERTY(QString text
               READ text
               WRITE setText
               NOTIFY textChanged)
    Q_PROPERTY(QString documentTitle
               READ documentTitle
               WRITE setDocumentTitle
               NOTIFY documentTitleChanged)

public:
    explicit DocumentHandler(QObject *parent = 0);
    QUrl fileUrl();
    QString text();
    QString documentTitle();


public slots:
    void setFileUrl(const QUrl &arg);
    void setText(const QString &arg);
    void setDocumentTitle(QString arg);

signals:
    void fileUrlChanged();
    void textChanged();
    void documentTitleChanged();

public:
    QUrl m_fileUrl;
    QString m_text;
    QString m_documentTitle;
};

#endif // DOCUMENTHANDLER_H
