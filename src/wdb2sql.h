/**
 *     \file  src/wdb2sql.h
 *    \brief  WDB Parser
 *
 * Copyright (C) 2008 MaNGOS foundation <http://www.getmangos.com/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// types used to define data-types, not referenced within the wdb files.
enum e_t_coltype {
	CT_FLOAT = 0,
	CT_STRING,
	CT_BITMASK,
	CT_U8,
	CT_U16,
	CT_U32,
	CT_S8,
	CT_S16,
	CT_S32
};

// the wdb header
struct {
	char		signature[4];
	uint32_t	version;
	char		language[4];
	uint32_t	rowcount;
	uint32_t	unknown;
} header;

struct {
	uint32_t	version;
	char		signature[4];

	char		*wdbschema;
	char		*sqlschema;
} config;

//   enumerated array of our column types.
enum e_t_coltype	field_types[1024];
int			field_count;
