/*
 * Copyright (c) 2017 Balabit
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */

#ifndef GEOIP_HELPER_H_INCLUDED
#define GEOIP_HELPER_H_INCLUDED

#include <syslog-ng.h>
#include <maxminddb.h>
void append_mmdb_entry_data_to_gstring(GString *target, MMDB_entry_data_s *entry_data);
gboolean mmdb_open_database(const gchar *path, MMDB_s *database);
MMDB_entry_data_list_s *dump_geodata_into_msg(LogMessage *msg,
                                              MMDB_entry_data_list_s *entry_data_list,
                                              GArray *path, gint *status);


#endif
