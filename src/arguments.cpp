/*****************************************************************************
 * Copyright (C) 1997-2019 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 */

#include <algorithm>

#include "arguments.h"

/*! the argument list is documented if one of its
 *  arguments is documented
 */
bool ArgumentList::hasDocumentation() const
{
  return std::any_of(begin(),end(),[](const Argument &a){ return a.hasDocumentation(); });
}

/*! the template argument list is documented if one of its
 *  template arguments is documented
 */
bool ArgumentList::hasTemplateDocumentation() const
{
  return std::any_of(begin(),end(),[](const Argument &a){ return a.hasTemplateDocumentation(); });
}
