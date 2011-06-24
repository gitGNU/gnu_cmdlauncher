/*
 * CmdLauncher
 *
 * Copyright (c) 2011 Hong Xu
 *
 *
 * This file is part of CmdLauncher.
 *
 * CmdLauncher is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 * 
 * CmdLauncher is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with CmdLauncher. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>
#include <QIcon>
#include <QPixmap>
#include <QString>
#include <QStringList>

class AboutDialog : public QDialog
{
    Q_OBJECT
public:
    AboutDialog(QWidget*              parent = 0,
                const QString&        name = QString(),
                const QString&        description = QString(),
                const QStringList&    authors = QStringList(),
                const QString&        url = QString(),
                const QPixmap&        pixmap = QPixmap());

};

#endif // ABOUTDIALOG_H
