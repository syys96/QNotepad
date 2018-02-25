//
// Created by syys on 18-2-25.
//

#include "Utils.h"

QString c2qs(const char *m_str)
{
    return QString(QLatin1String(m_str));
}

QFileInfo c2finfo(const char *m_str)
{
    return QFileInfo(c2qs(m_str));
}

const char * qs2c(QString *m_qstr)
{
    return const_cast<char *>(m_qstr->toStdString().c_str());
}

std::string qs2ss(QString *m_qstr)
{
    return m_qstr->toStdString();
}