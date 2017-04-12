#ifndef QVKIMPLATFORMINPUTCONTEXTPLUGIN_H
#define QVKIMPLATFORMINPUTCONTEXTPLUGIN_H

#include <qpa/qplatforminputcontextplugin_p.h>
#include "qvkimplatforminputcontext.h"


class QVkImPlatformInputContextPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QPlatformInputContextFactoryInterface"
                      FILE "vkim.json")

public:
    QVkImPlatformInputContextPlugin();
    ~QVkImPlatformInputContextPlugin();

    QVkImPlatformInputContext* create(const QString &key, const QStringList &paramList);
};

#endif // QVKIMPLATFORMINPUTCONTEXTPLUGIN_H
