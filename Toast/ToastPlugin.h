#pragma once

#include "toast_global.h"

#include "PluginInterface.h"

class TOAST_EXPORT ToastPlugin : public PluginInterface {
public:
    virtual ~ToastPlugin() = 0;

    /**
     * @brief 批量初始化
     * @param args 程序启动参数
     * @param error 初始化错误信息
     * @return 初始化状态
     */
    virtual bool initialize(const QStringList& args, QString& error) = 0;

    /**
     * @brief 初始化之后扩展初始化
     * @return 初始化状态
     */
    virtual bool extensionsInitialize() = 0;

    /**
     * @brief 延迟初始化，执行信号功能
     * @return 初始化状态
     */
    virtual bool delayedInitialize() = 0;

    /**
     * @brief 显示提示
     * @param text 提示内容
     */
    virtual void showTip(const QString& text) = 0;
};

QT_BEGIN_NAMESPACE
Q_DECLARE_INTERFACE(ToastPlugin, "cn.hiyj.ToastPlugin")
QT_END_NAMESPACE