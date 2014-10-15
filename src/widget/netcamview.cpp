/*
    Copyright (C) 2014 by Project Tox <https://tox.im>

    This file is part of qTox, a Qt-based graphical interface for Tox.

    This program is libre software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

    See the COPYING file for more details.
*/

#include "netcamview.h"
<<<<<<< HEAD:src/widget/netcamview.cpp
#include "src/core.h"
=======
#include "core.h"
#include "widget/videosurface.h"
>>>>>>> NetVideoSource, YUV shader, fixes:widget/netcamview.cpp
#include <QLabel>
#include <QHBoxLayout>

NetCamView::NetCamView(QWidget* parent)
    : QWidget(parent)
    , mainLayout{new QHBoxLayout()}
{
    setLayout(mainLayout);
    setWindowTitle("Tox video");
    setMinimumSize(320,240);

    videoSurface = new VideoSurface(this);

    mainLayout->addWidget(videoSurface);
}

void NetCamView::setSource(VideoSource *s)
{
    videoSurface->setSource(s);
}
