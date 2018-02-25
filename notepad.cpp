//
// Created by syys on 18-2-24.
//

#include "notepad.h"

Notepad::Notepad(QWidget *parent):QMainWindow(parent) {
    resize(800, 600);
    m_menubar = new QMenuBar(this);
    setMenuBar(m_menubar);
    m_statusBar = new QStatusBar(this);
    setStatusBar(m_statusBar);
    central_widget = new QWidget(this);
    setCentralWidget(central_widget);

    setUI();

}

Notepad::~Notepad() {

}

void Notepad::setUI() {
    if (objectName().isEmpty())
        setObjectName(tr("Notepad"));
    setWindowTitle(tr("Notepad"));

    tabWidget = new QTabWidget(this);
    m_edit1 = new ScintillaEdit();
    m_edit2 = new ScintillaEdit();
    tabWidget->addTab(m_edit1, tr("New "));
    tabWidget->addTab(m_edit2, tr("new "));

    central_layout = new QVBoxLayout();
    central_layout->addWidget(tabWidget);
    central_widget->setLayout(central_layout);
}
