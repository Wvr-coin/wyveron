// Copyright (c) 2019 The wvr developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLwvrWIDGET_H
#define COINCONTROLwvrWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlwvrWidget;
}

class CoinControlwvrWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlwvrWidget(QWidget *parent = nullptr);
    ~CoinControlwvrWidget();

private:
    Ui::CoinControlwvrWidget *ui;
};

#endif // COINCONTROLwvrWIDGET_H
