/*
 * Copyright 2018-2020 Qter(qsaker@qq.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 */
#ifndef SAKTCPSERVERDEBUGPAGE_HH
#define SAKTCPSERVERDEBUGPAGE_HH

#include "SAKDebugPage.hh"

class SAKTcpServerDevice;
class SAKTcpServerDeviceController;
class SAKTcpServerDebugPage : public SAKDebugPage
{
    Q_OBJECT
public:
    Q_INVOKABLE SAKTcpServerDebugPage(int type, QString name, QWidget *parent = Q_NULLPTR);
};

#endif
