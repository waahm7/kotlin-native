/*
 * Copyright 2010-2021 JetBrains s.r.o. Use of this source code is governed by the Apache 2.0 license
 * that can be found in the LICENSE file.
 */

#include "TestSupport.hpp"

// No-op, requires for the new MM only.
MemoryState* kotlin::InitMemoryForTests() { return nullptr; }

// No-op, requires for the new MM only.
void kotlin::DeinitMemoryForTests(MemoryState* state) {}