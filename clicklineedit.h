/*
Copyright 2013 Jared Wiltshire

This file is part of VAG Blocks.

VAG Blocks is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

VAG Blocks is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with VAG Blocks.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CLICKLINEEDIT_H
#define CLICKLINEEDIT_H

#include <QLineEdit>

class clickLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit clickLineEdit(QWidget *parent = 0);
signals:
    void clicked();
protected:
    void mousePressEvent(QMouseEvent* event);
};

#endif // CLICKLINEEDIT_H
