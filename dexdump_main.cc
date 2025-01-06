/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Main driver of the dexdump utility.
 *
 * This is a re-implementation of the original dexdump utility that was
 * based on Dalvik functions in libdex into a new dexdump that is now
 * based on Art functions in libart instead. The output is very similar to
 * to the original for correct DEX files. Error messages may differ, however.
 * Also, ODEX files are no longer supported.
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "dexdump.h"
#include <android-base/logging.h>

namespace art {

// static const char *gProgName = "dextocpp";

/*
 * Shows usage.
 */
// static void usage() {

//     std::cerr << "Copyright (C) 2007 The Android Open Source Project\n";
//     std::cerr
//         << gProgName
//         << ": [-a] [-c] [-d] [-e] [-f] [-h] [-i] [-j] [-l layout] [-o outfile]"
//            " dexfile...\n";
//     std::cerr << " -a : display annotations\n";
//     std::cerr << " -c : verify checksum and exit\n";
//     std::cerr << " -d : disassemble code sections\n";
//     std::cerr << " -e : display exported items only\n";
//     std::cerr << " -f : display summary information from file header\n";
//     std::cerr << " -g : display CFG for dex\n";
//     std::cerr << " -h : display file header details\n";
//     std::cerr << " -i : ignore checksum failures\n";
//     std::cerr << " -j : disable dex file verification\n";
//     std::cerr << " -l : output layout, either 'plain' or 'xml'\n";
//     std::cerr << " -o : output file name (defaults to stdout)\n";
// }

} // namespace art

int main(int argc, char **argv) {
    // Output all logging to stderr.
    android::base::SetLogger(android::base::StderrLogger);

    if (argc > 1) {
        int result = art::processFile(argv[1]);
        return result;
    }
    art::gOutFile = fopen("hello.txt", "w");

    return 0;
}
