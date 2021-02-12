/*
 * Copyright 2010-2021 JetBrains s.r.o. Use of this source code is governed by the Apache 2.0 license
 * that can be found in the LICENSE file.
 */

#include "TestSupport.hpp"
#include "ThreadRegistry.hpp"

MemoryState* kotlin::InitMemoryForTests() {
    auto threadDataNode = mm::ThreadRegistry::Instance().RegisterCurrentThread();
    return reinterpret_cast<MemoryState*>(threadDataNode);
}

void kotlin::DeinitMemoryForTests(MemoryState* state) {
    auto threadDataNode = reinterpret_cast<mm::ThreadRegistry::Node*>(state);
    mm::ThreadRegistry::Instance().Unregister(threadDataNode);
    // Nullify current thread data. The thread is still alive, so this is safe.
    mm::ThreadRegistry::TestSupport::SetCurrentThreadData(nullptr);
}