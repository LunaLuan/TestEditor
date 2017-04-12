#include "qvkimplatforminputcontextplugin.h"

QVkImPlatformInputContextPlugin::QVkImPlatformInputContextPlugin()
{

}

QVkImPlatformInputContext *QVkImPlatformInputContextPlugin::create(const QString &key,
                                                                   const QStringList &paramList)
{
    Q_UNUSED(paramList);

    if(key == QLatin1String("vkim")) {
        return new QVkImPlatformInputContext;
    }
    return 0;
}
