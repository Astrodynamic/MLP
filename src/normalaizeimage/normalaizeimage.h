#ifndef NORMALAIZEIMAGE_H
#define NORMALAIZEIMAGE_H

#include <QObject>
#include <QPixmap>

class NormalaizeImage : QObject {
  Q_OBJECT

 public:
  explicit NormalaizeImage(QObject *parent = nullptr);
  static QImage normalize(QPixmap, int);

 private:
  int pix_size_ = 28;
};

#endif  // NORMALAIZEIMAGE_H
