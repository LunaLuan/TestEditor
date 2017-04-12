#ifndef QVKIMPLATFORMINPUTCONTEXT_H
#define QVKIMPLATFORMINPUTCONTEXT_H

#include <qpa/qplatforminputcontext.h>
#include "qvkimplatforminputcontext.h"

class QDBusInterface;


class QVkImPlatformInputContext : public QPlatformInputContext {
    

public:
    QVkImPlatformInputContext();
    ~QVkImPlatformInputContext();

    // QPlatformInputContext interface
    bool isValid() const;

    void showInputPanel();
    void hideInputPanel();

    bool isInputPanelVisible() const;

    void setFocusObject(QObject *object);

private slots:
    void keyboardSpecialKeyClicked(int key);
    void keyboardKeyClicked(const QString &character);

private:
    QDBusInterface *m_keyboardInterface;
    QObject *m_focusObject;

};

#endif // QVKIMPLATFORMINPUTCONTEXT_H
