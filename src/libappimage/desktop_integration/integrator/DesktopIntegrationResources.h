#pragma once

#include <string>
#include <vector>
#include <map>

namespace appimage {
    namespace desktop_integration {
        /**
         * Holds the raw values of all desktop integration resources grouped by kind as they will be passed around the
         * different steps of the desktop integration process.
         *
         * The ResourcesExtractor class should be used to fill this struct.
         *
         * This is mean to be a simple container. If any procedures or validation is added to this entity it should
         * be transformed into a class and properly create getters and setters.
         */
        struct DesktopIntegrationResources {
            std::string desktopEntryPath;
            std::vector<char> desktopEntryData;

            std::string appStreamPath;
            std::vector<char> appStreamData;

            std::map<std::string, std::vector<char>> icons;
            std::map<std::string, std::vector<char>> mimeTypePackages;
        };
    }
}