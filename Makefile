export THEOS_DEVICE_IP = 192.168.1.65
export PACKAGE_VERSION = 1.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = BBTANPro
BBTANPro_FILES = Tweak.xm
BBTANPro_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 backboardd"
