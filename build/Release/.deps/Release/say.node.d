cmd_Release/say.node := ln -f "Release/obj.target/say.node" "Release/say.node" 2>/dev/null || (rm -rf "Release/say.node" && cp -af "Release/obj.target/say.node" "Release/say.node")
