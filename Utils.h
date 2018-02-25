//
// Created by syys on 18-2-25.
//

#ifndef QTTEST_UTILS_H
#define QTTEST_UTILS_H

#include <QFileInfo>
#include <string>

QString c2qs(const char *m_str);
QFileInfo c2finfo(const char *m_str);
const char * qs2c(QString *m_qstr);
std::string qs2ss(QString *m_qstr);

#endif //QTTEST_UTILS_H


