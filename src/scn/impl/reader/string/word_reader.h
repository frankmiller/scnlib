// Copyright 2017 Elias Kosunen
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// This file is a part of scnlib:
//     https://github.com/eliaskosunen/scnlib

#pragma once

#include <scn/impl/reader/common.h>

namespace scn {
    SCN_BEGIN_NAMESPACE

    namespace impl {
        template <typename SourceCharT>
        class word_reader {
        public:
            constexpr word_reader() = default;

            template <typename SourceRange, typename SourceReader>
            scan_expected<iterator_value_result<ranges::iterator_t<SourceRange>,
                                           std::basic_string_view<SourceCharT>>>
            read(SourceRange& source, SourceReader& source_reader)
            {
                return read_with_source_reader(source_reader, source);
            }
        };
    }  // namespace impl

    SCN_END_NAMESPACE
}  // namespace scn
