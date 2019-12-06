#ifndef LISTVIEW_H
#define LISTVIEW_H
#include <QListView>

class ListView : public QListView
{
    Q_OBJECT
public:
    ListView(QWidget *parent = nullptr);

    virtual void keyPressEvent(QKeyEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void showEvent(QShowEvent *event) override;

Q_SIGNALS:
    void extract(const QModelIndex &index);
};

#endif // LISTVIEW_H
