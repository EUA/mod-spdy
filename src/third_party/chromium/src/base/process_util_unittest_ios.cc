// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/memory/scoped_ptr.h"
#include "base/process_util.h"
#include "testing/gtest/include/gtest/gtest.h"

TEST(ProcessUtilTestIos, Memory) {
  scoped_ptr<base::ProcessMetrics> process_metrics(
      base::ProcessMetrics::CreateProcessMetrics(
          base::GetCurrentProcessHandle()));

  ASSERT_NE(0u, process_metrics->GetWorkingSetSize());
}
