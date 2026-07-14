cmake_minimum_required(VERSION 3.10)

# Project එකේ නම
project(MyModMenu)

# ImGui ෆෝල්ඩර් එකේ තියෙන ෆයිල් ටික
set(IMGUI_SOURCES
    imgui/imgui.cpp
    imgui/imgui_draw.cpp
    imgui/imgui_tables.cpp
    imgui/imgui_widgets.cpp
)

# .dylib එක හදන්න කියන විධානය
add_library(MyModMenu SHARED src/main.cpp ${IMGUI_SOURCES})

# Include කරන ෆෝල්ඩර් පෙන්වා දීම
target_include_directories(MyModMenu PRIVATE imgui)

# === iOS සඳහා විශේෂිත වෙනස්කම් ===
if (CMAKE_SYSTEM_NAME STREQUAL "iOS")
    # GitHub Action එකේදී Code Sign කිරීම (සහතික ඉල්ලීම) අක්‍රිය කිරීම
    set_target_properties(MyModMenu PROPERTIES
        XCODE_ATTRIBUTE_CODE_SIGNING_REQUIRED "NO"
        XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY ""
        XCODE_ATTRIBUTE_CODE_SIGNING_ALLOWED "NO"
        XCODE_ATTRIBUTE_ENABLE_BITCODE "NO"
    )
endif()