#include "imgui.h" // 1. ImGui ෆයිල් එක මෙතනින් ලින්ක් කරනවා

// මේක අපි මුලින්ම False (Off) කරලා තියන්නේ
bool show_esp_lines = false; 

void DrawOurMenu() {
    // Menu එක පටන් ගන්නවා
    ImGui::Begin("My Custom Mod Menu"); 
    
    // Menu එක ඇතුලේ පොඩි මාතෘකාවක්
    ImGui::Text("Player Settings"); 
    
    // On/Off කරන Checkbox එක
    ImGui::Checkbox("Enable ESP Lines", &show_esp_lines); 
    
    ImGui::End(); // Menu එක ඉවරයි
}

// 2. අර එළියේ තිබ්බ if condition එක අපි අලුත් Function එකක් ඇතුලට දැම්මා
void RenderOurHacks() {
    if (show_esp_lines == true) {
        // පස්සේ මෙතනට අපි ඇත්තම ESP අඳින Code එක දානවා
        // දැනට Error එකක් එන නිසා DrawESPLine එක අයින් කරලා තියෙන්නේ
    }
}