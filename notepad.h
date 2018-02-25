//
// Created by syys on 18-2-24.
//

#ifndef QTTEST_NOTEPAD_H
#define QTTEST_NOTEPAD_H

#include <QWidget>
#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>
#include <QTabBar>
#include <QTabWidget>
#include <QHBoxLayout>

#include "scintilla/qt/ScintillaEdit/ScintillaEdit.h"

class Notepad final : public QMainWindow
{
    Q_OBJECT
public:
    explicit Notepad(QWidget *parent = Q_NULLPTR);
    ~Notepad();
    void setUI();
    void setMenu();
    void setEdit();

private:
    QTabWidget *tabWidget;
    ScintillaEdit *m_edit1, *m_edit2;
    QHBoxLayout *w_layout;
    QVBoxLayout *central_layout;
    QWidget *m_widget;
    QMenuBar *m_menubar;
    QWidget *central_widget;
    QStatusBar *m_statusBar;
};

#endif //QTTEST_NOTEPAD_H
