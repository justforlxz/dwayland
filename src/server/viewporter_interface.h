/*
    SPDX-FileCopyrightText: 2020 Vlad Zahorodnii <vlad.zahorodnii@kde.org>

    SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

#pragma once

#include <DWayland/Server/kwaylandserver_export.h>

#include <QObject>

namespace KWaylandServer
{
class Display;
class ViewporterInterfacePrivate;

/**
 * The ViewporterInterface is an extension that allows clients to crop and scale surfaces.
 *
 * The ViewporterInterface extensions provides a way for Wayland clients to crop and scale their
 * surfaces. This effectively breaks the direct connection between the buffer and the surface size.
 *
 * ViewporterInterface corresponds to the Wayland interface @c wp_viewporter.
 */
class KWAYLANDSERVER_EXPORT ViewporterInterface : public QObject
{
    Q_OBJECT

public:
    explicit ViewporterInterface(Display *display, QObject *parent = nullptr);
    ~ViewporterInterface() override;

private:
    QScopedPointer<ViewporterInterfacePrivate> d;
};

} // namespace KWaylandServer
