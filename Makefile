CFLAGS = -std=c++17 -O2 -g -Wall
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi -lvulkan-1
INC = ./vulkan_win/x64/vulkan-1.dll

VulkanTest: main.cpp WindowWin.cpp
	x86_64-w64-mingw32-g++ $(CFLAGS) -O2 -s -lm -mwindows main.cpp WindowWin.cpp -o out.exe /home/cyber-demon/vulkan_win/x64/vulkan-1.dll

.PHONY: test clean

test: VulkanTest
	./VulkanTest

clean:
	rm -f VulkanTest

