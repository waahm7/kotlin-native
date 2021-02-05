/*
 * Copyright 2010-2021 JetBrains s.r.o. and Kotlin Programming Language contributors.
 * Use of this source code is governed by the Apache 2.0 license that can be found in the license/LICENSE.txt file.
 */

package kotlin.text

//
// NOTE: THIS FILE IS AUTO-GENERATED by the GenerateUnicodeData.kt
// See: https://github.com/JetBrains/kotlin/tree/master/libraries/stdlib
//

// 4 ranges totally
internal fun Char.titlecaseCharImpl(): Char {
    val code = this.toInt()
    if (code in 0x01c4..0x01cc || code in 0x01f1..0x01f3) {
        return (3 * ((code + 1) / 3)).toChar()
    }
    if (code in 0x10d0..0x10fa || code in 0x10fd..0x10ff) {
        return this
    }
    return uppercaseCharImpl()
}