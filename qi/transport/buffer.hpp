/*
** buffer.hpp
** Login : <ctaf42@cgestes-de2>
** Started on  Wed Nov 17 16:02:35 2010 Cedric GESTES
** $Id$
**
** Author(s):
**  - Cedric GESTES <gestes@aldebaran-robotics.com>
**
** Copyright (C) 2010 Cedric GESTES
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef   __QI_TRANSPORT_BUFFER_HPP__
#define   __QI_TRANSPORT_BUFFER_HPP__

#include <string>

namespace qi {
  namespace transport {
    //use a string for the moment, but this will be a zerocopybuffer.
    typedef std::string Buffer;
  }
}


#endif // __QI_TRANSPORT_BUFFER_HPP__
