/*
    Copyright 2013-2015 Dario Casalinuovo. All rights reserved.

    This file is part of libjackcompat.

    libjackcompat is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libjackcompat is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libjackcompat.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "jack/session.h"


int
jack_set_session_callback(jack_client_t* client,
	JackSessionCallback callback, void* cookie)
{
	return -1;
}


int
jack_session_reply(jack_client_t* client,
	jack_session_event_t* event)
{
	return -1;
}


void
jack_session_event_free(jack_session_event_t* event)
{
}


char
jack_client_get_uuid(jack_client_t* client)
{
	return -1;
}


jack_session_command_t*
jack_session_notify(jack_client_t* client, const char* target,
	jack_session_event_type_t type, const char* path)
{
	return NULL;
}


void
jack_session_commands_free(jack_session_command_t* commands)
{
}


char
jack_get_uuid_for_client_name(jack_client_t* client, const char* name)
{
	return -1;
}


char
jack_get_client_name_by_uuid(jack_client_t* client, const char* uuid)
{
	return -1;
}


int
jack_reserve_client_name(jack_client_t* client,
	const char* name, const char* uuid)
{
	return -1;
}


int
jack_client_has_session_callback(jack_client_t* client, const char* name)
{
	return -1;
}
