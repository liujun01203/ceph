// -*- mode:C++; tab-width:8; c-basic-offset:2; indent-tabs-mode:t -*-
// vim: ts=8 sw=2 smarttab

#ifndef CEPH_JOURNAL_SETTINGS_H
#define CEPH_JOURNAL_SETTINGS_H

#include "include/int_types.h"

namespace journal {

struct Settings {
  double commit_interval = 5;         ///< commit position throttle (in secs)
};

} // namespace journal

#endif // # CEPH_JOURNAL_SETTINGS_H
