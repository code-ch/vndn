/* -*- Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil -*- */
/*
 * Copyright (c) 2011 University of California, Los Angeles
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Alexander Afanasyev <alexander.afanasyev@ucla.edu>
 */

#ifndef _CCNB_PARSER_NO_ARGU_DEPTH_FIRST_VISITOR_H_
#define _CCNB_PARSER_NO_ARGU_DEPTH_FIRST_VISITOR_H_

#include "ccnb-parser-no-argu-visitor.h"

namespace vndn
{
namespace CcnbParser
{

/**
 * \ingrou ndn-ccnb
 * \brief Depth-first visitor that takes no arguments and returns boost::any value
 */
class NoArguDepthFirstVisitor : public NoArguVisitor
{
public:
    virtual boost::any visit (Blob & );
    virtual boost::any visit (Udata &);
    virtual boost::any visit (Tag &  );
    virtual boost::any visit (Attr & );
    virtual boost::any visit (Dtag & );
    virtual boost::any visit (Dattr &);
    virtual boost::any visit (Ext &  );
};

}
}

#endif // _CCNB_PARSER_NO_ARGU_DEPTH_FIRST_VISITOR_H_
