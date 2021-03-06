#ifndef ANIMEITEMDELEGATE_H
#define ANIMEITEMDELEGATE_H
#include <QStyledItemDelegate>
class AnimeItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit AnimeItemDelegate(QObject *parent = 0);

    // QAbstractItemDelegate interface
public:
    virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    virtual bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
    virtual QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
signals:
    void ItemClicked(const QModelIndex &index);
private:
    QScopedPointer<QWidget> contentWidget;
    mutable QPixmap pixmap;

};

#endif // ANIMEITEMDELEGATE_H
