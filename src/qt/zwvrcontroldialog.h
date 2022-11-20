// Copyright (c) 2017-2019 The wvr developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZwvrCONTROLDIALOG_H
#define ZwvrCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zwvr/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZwvrControlDialog;
}

class CZwvrControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZwvrControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZwvrControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZwvrControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZwvrControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZwvrControlDialog(QWidget *parent);
    ~ZwvrControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZwvrControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZwvrControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZwvrCONTROLDIALOG_H
