/*
 * Copyright 2020 The Android Open Source Project
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
 */
#pragma once

#if !defined(TARGET_FLOSS)
#error "sysprops_module is supposed to be FLOSS specific"
#endif

#include "module.h"

namespace bluetooth {
namespace sysprops {

class SyspropsModule : public bluetooth::Module {
 public:
  SyspropsModule();
  SyspropsModule(const SyspropsModule&) = delete;
  SyspropsModule& operator=(const SyspropsModule&) = delete;

  ~SyspropsModule();

  static const ModuleFactory Factory;

 protected:
  void ListDependencies(ModuleList* list) const override;

  void Start() override;

  void Stop() override;

  std::string ToString() const override;

 private:
  struct impl;
  std::unique_ptr<impl> pimpl_;
  void parse_config(std::string file_path);
};

}  // namespace sysprops
}  // namespace bluetooth
