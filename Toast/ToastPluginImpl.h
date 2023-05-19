#pragma once

#include "ToastPlugin.h"

class ToastPluginImpl : public ToastPlugin {
    Q_OBJECT;
    Q_INTERFACES(ToastPlugin)
    Q_PLUGIN_METADATA(IID "cn.hiyj.ToastPlugin" FILE "ToastPlugin.json")

public:
    ~ToastPluginImpl() override;

    /**
     * @brief 批量初始化
     * @param args 程序启动参数
     * @param error 初始化错误信息
     * @return 初始化状态
     */
    bool initialize(const QStringList& args, QString& error) override;

    /**
     * @brief 初始化之后扩展初始化
     * @return 初始化状态
     */
    bool extensionsInitialize() override;

    /**
     * @brief 延迟初始化，执行信号功能
     * @return 初始化状态
     */
    bool delayedInitialize() override;

    /**
     * @brief 显示提示
     * @param text 提示内容
     */
    void showTip(const QString& text) override;
};
