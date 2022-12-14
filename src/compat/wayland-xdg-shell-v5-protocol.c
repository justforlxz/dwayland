/*
 * This file is *NOT* autogenerated.
 * It contains XDGShellV5 with method names modified to be not clashing with XDG stable
 * Strings inside the sent protocol remain the same
 */
/*
 * SPDX-FileCopyrightText: 2008-2013 Kristian Høgsberg
 * SPDX-FileCopyrightText: 2013 Rafael Antognolli
 * SPDX-FileCopyrightText: 2013 Jasper St. Pierre
 * SPDX-FileCopyrightText: 2010-2013 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 */

#include "wayland-util.h"
#include <stdint.h>
#include <stdlib.h>

extern const struct wl_interface wl_output_interface;
extern const struct wl_interface wl_seat_interface;
extern const struct wl_interface wl_surface_interface;
extern const struct wl_interface zxdg_popup_v5_interface;
extern const struct wl_interface zxdg_surface_v5_interface;

static const struct wl_interface *types[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    &zxdg_surface_v5_interface,
    &wl_surface_interface,
    &zxdg_popup_v5_interface,
    &wl_surface_interface,
    &wl_surface_interface,
    &wl_seat_interface,
    NULL,
    NULL,
    NULL,
    &zxdg_surface_v5_interface,
    &wl_seat_interface,
    NULL,
    NULL,
    NULL,
    &wl_seat_interface,
    NULL,
    &wl_seat_interface,
    NULL,
    NULL,
    &wl_output_interface,
};

static const struct wl_message zxdg_shell_v5_requests[] = {
    {"destroy", "", types + 0},
    {"use_unstable_version", "i", types + 0},
    {"get_xdg_surface", "no", types + 4},
    {"get_xdg_popup", "nooouii", types + 6},
    {"pong", "u", types + 0},
};

static const struct wl_message zxdg_shell_v5_events[] = {
    {"ping", "u", types + 0},
};

WL_EXPORT const struct wl_interface zxdg_shell_v5_interface = {
    "xdg_shell",
    1,
    5,
    zxdg_shell_v5_requests,
    1,
    zxdg_shell_v5_events,
};

static const struct wl_message zxdg_surface_v5_requests[] = {
    {"destroy", "", types + 0},
    {"set_parent", "?o", types + 13},
    {"set_title", "s", types + 0},
    {"set_app_id", "s", types + 0},
    {"show_window_menu", "ouii", types + 14},
    {"move", "ou", types + 18},
    {"resize", "ouu", types + 20},
    {"ack_configure", "u", types + 0},
    {"set_window_geometry", "iiii", types + 0},
    {"set_maximized", "", types + 0},
    {"unset_maximized", "", types + 0},
    {"set_fullscreen", "?o", types + 23},
    {"unset_fullscreen", "", types + 0},
    {"set_minimized", "", types + 0},
};

static const struct wl_message zxdg_surface_v5_events[] = {
    {"configure", "iiau", types + 0},
    {"close", "", types + 0},
};

WL_EXPORT const struct wl_interface zxdg_surface_v5_interface = {
    "xdg_surface",
    1,
    14,
    zxdg_surface_v5_requests,
    2,
    zxdg_surface_v5_events,
};

static const struct wl_message zxdg_popup_v5_requests[] = {
    {"destroy", "", types + 0},
};

static const struct wl_message zxdg_popup_v5_events[] = {
    {"popup_done", "", types + 0},
};

WL_EXPORT const struct wl_interface zxdg_popup_v5_interface = {
    "xdg_popup",
    1,
    1,
    zxdg_popup_v5_requests,
    1,
    zxdg_popup_v5_events,
};
