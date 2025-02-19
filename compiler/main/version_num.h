/*
 * Copyright 2020-2021 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 * 
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * 
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _version_num_H_
#define _version_num_H_

#define MAJOR_VERSION 1
#define MINOR_VERSION 24
#define UPDATE_VERSION 0

static const char* BUILD_VERSION =
#include "BUILD_VERSION"
;

// Flip this to 'true' when we're ready to roll out a release; then
// back after branching
//
static bool officialRelease = true;

#endif
