#ifndef HUSSARWINDOW_H
#define HUSSARWINDOW_H

#include <QMainWindow>
#include "hussarsession.h"

class HussarWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit HussarWindow(QWidget *parent = 0);
    virtual QSize sizeHint() const;

signals:

public slots:

private:
    HussarSession *session;
    QSize preferredSize;
};

#endif // HUSSARWINDOW_H
