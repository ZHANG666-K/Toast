#pragma once

#include <QReadWriteLock>
#include <QWidget>

class QReadWriteLock;

namespace Ui {
class ToastClass;
}
class Toast : public QWidget {
    Q_OBJECT;

public:
    Toast(QWidget* parent = nullptr);
    ~Toast();

    void setText(const QString& text);

    void showAnimation(int timeout = 2000); // 动画方式show出，默认2秒后消失

public:
    // 静态调用
    static void showTip(const QString& text);

protected:
    virtual void paintEvent(QPaintEvent* event);

    static QList<QWidget*>& Widgets();

    static QReadWriteLock& Lock();

private:
    Ui::ToastClass* ui = nullptr;
};
