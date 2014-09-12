//===- subzero/src/IceClFlags.h - Cl Flags for translation ------*- C++ -*-===//
//
//                        The Subzero Code Generator
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares command line flags controlling translation.
//
//===----------------------------------------------------------------------===//

#ifndef SUBZERO_SRC_ICECLFLAGS_H
#define SUBZERO_SRC_ICECLFLAGS_H

#include "IceTypes.def"

namespace Ice {

// TODO(stichnot) Move more command line flags into ClFlags.
class ClFlags {
public:
  ClFlags()
      : DisableInternal(false), SubzeroTimingEnabled(false),
        DisableTranslation(false), DisableGlobals(false),
        FunctionSections(false), UseSandboxing(false), DefaultGlobalPrefix(""),
        DefaultFunctionPrefix("") {}
  bool DisableInternal;
  bool SubzeroTimingEnabled;
  bool DisableTranslation;
  bool DisableGlobals;
  bool FunctionSections;
  bool UseSandboxing;
  IceString DefaultGlobalPrefix;
  IceString DefaultFunctionPrefix;
};

} // end of namespace Ice

#endif // SUBZERO_SRC_ICECLFLAGS_H
