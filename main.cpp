#include <QtGui/QApplication>
#include "mirrorwindow.h"

#include <cv.h>

int main(int argc, char *argv[])
{
    // guess a good number of threads...
    cv::setNumThreads(0);

    QApplication a(argc, argv);
    MirrorWindow w;
    w.show();

    return a.exec();
}
