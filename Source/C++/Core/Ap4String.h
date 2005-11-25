/*****************************************************************
|
|    AP4 - Strings
|
|    Copyright 2002 Gilles Boccon-Gibod
|
|
|    This file is part of Bento4/AP4 (MP4 Atom Processing Library).
|
|    Unless you have obtained Bento4 under a difference license,
|    this version of Bento4 is Bento4|GPL.
|    Bento4|GPL is free software; you can redistribute it and/or modify
|    it under the terms of the GNU General Public License as published by
|    the Free Software Foundation; either version 2, or (at your option)
|    any later version.
|
|    Bento4|GPL is distributed in the hope that it will be useful,
|    but WITHOUT ANY WARRANTY; without even the implied warranty of
|    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
|    GNU General Public License for more details.
|
|    You should have received a copy of the GNU General Public License
|    along with Bento4|GPL; see the file COPYING.  If not, write to the
|    Free Software Foundation, 59 Temple Place - Suite 330, Boston, MA
|    02111-1307, USA.
|
****************************************************************/

#ifndef _AP4_STRING_H_
#define _AP4_STRING_H_

/*----------------------------------------------------------------------
|       includes
+---------------------------------------------------------------------*/
#include "Ap4Config.h"
#include "Ap4Types.h"

/*----------------------------------------------------------------------
|       AP4_String
+---------------------------------------------------------------------*/
class AP4_String
{
public:
    // constructors
    AP4_String();
    AP4_String(const char* s);
    AP4_String(const AP4_String& s);

    // destructor
    ~AP4_String();

    // operators
    const AP4_String& operator=(const AP4_String& s);
    char operator[](unsigned int index) const {
        return m_Chars[index];
    }

    // methods
    AP4_Size GetLength() const   { return m_Length; }
    const char* GetChars() const { return m_Chars;  }

private:
    // class members
    static char EmptyString;

    // members
    char*    m_Chars;
    AP4_Size m_Length;
};

#endif // _AP4_STRING_H_