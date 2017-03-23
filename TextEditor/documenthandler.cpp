#include "documenthandler.h"

DocumentHandler::DocumentHandler(QObject *parent) : QObject(parent)
{

}

QUrl DocumentHandler::fileUrl() {
   return m_fileUrl;
}

QString DocumentHandler::text() {
    return m_text;
}

QString DocumentHandler::documentTitle() {
    return m_documentTitle;
}


void DocumentHandler::setFileUrl(const QUrl &arg) {
    if(m_fileUrl != arg) {
        m_fileUrl = arg;
        QString fileName = arg.fileName();
        QFile file(arg.toLocalFile());
        if(file.open(QFile::ReadOnly)) {
            setText(QString(file.readAll()));
            if(fileName.isEmpty()) {
                m_documentTitle = QStringLiteral("untitled");
            }
            else {
                m_documentTitle = fileName;
            }
            emit textChanged();
            emit documentTitleChanged();
        }
        emit fileUrlChanged();
    }
}

void DocumentHandler::setText(const QString &arg) {
    if(m_text != arg) {
        m_text = arg;
        emit textChanged();
    }
}

void DocumentHandler::setDocumentTitle(QString arg) {
    if(m_documentTitle != arg) {
        m_documentTitle = arg;
        emit documentTitleChanged();
    }
}


