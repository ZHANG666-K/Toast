#include "ToastPluginImpl.h"

#include "Toast.h"

ToastPluginImpl::~ToastPluginImpl()
{
}

bool ToastPluginImpl::initialize(const QStringList& args, QString& error)
{
    return true;
}

bool ToastPluginImpl::extensionsInitialize()
{
    return true;
}

bool ToastPluginImpl::delayedInitialize()
{
    return true;
}

void ToastPluginImpl::showTip(const QString& text)
{
    Toast::showTip(text);
}
