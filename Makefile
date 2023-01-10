TARGET := iphone:clang:14.5:7.0
INSTALL_TARGET_PROCESSES = Notability
ARCHS = armv7 armv7s

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = NotabilityShortcuts

NotabilityShortcuts_FILES = Tweak.xm
NotabilityShortcuts_FRAMEWORKS = UIKit
NotabilityShortcuts_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk