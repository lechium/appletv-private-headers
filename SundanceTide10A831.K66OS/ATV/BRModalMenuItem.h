/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMenuItem;

__attribute__((visibility("hidden")))
@interface BRModalMenuItem : BRControl {
	XXStruct_40SSZC _modeSwitchPreferredSize;	// 84 = 0x54
	id _onModeSwitch;	// 92 = 0x5c
	int _mode;	// 96 = 0x60
	BRControl *_modeSwitch;	// 100 = 0x64
	BRMenuItem *_menuItem;	// 104 = 0x68
}
@property(retain, nonatomic) BRMenuItem *menuItem;	// G=0x3f7129; S=0x3f6ca9; @synthesize=_menuItem
@property(assign, nonatomic) int mode;	// G=0x3f70f9; S=0x3f7109; @synthesize=_mode
@property(retain, nonatomic) BRControl *modeSwitch;	// G=0x3f7119; S=0x3f6d09; @synthesize=_modeSwitch
@property(assign, nonatomic) XXStruct_40SSZC modeSwitchPreferredSize;	// G=0x3f70a9; S=0x3f70c1; @synthesize=_modeSwitchPreferredSize
@property(copy, nonatomic) id onModeSwitch;	// G=0x3f70d5; S=0x3f70e9; @synthesize=_onModeSwitch
- (id)init;	// 0x3f6c59
- (void).cxx_destruct;	// 0x3f7139
- (BOOL)brEventAction:(id)action;	// 0x3f6f3d
- (CGRect)focusCursorFrame;	// 0x3f6fcd
- (void)layoutSubcontrols;	// 0x3f6d7d
// declared property getter: - (id)menuItem;	// 0x3f7129
// declared property getter: - (int)mode;	// 0x3f70f9
// declared property getter: - (id)modeSwitch;	// 0x3f7119
// declared property getter: - (XXStruct_40SSZC)modeSwitchPreferredSize;	// 0x3f70a9
// declared property getter: - (id)onModeSwitch;	// 0x3f70d5
// declared property setter: - (void)setMenuItem:(id)item;	// 0x3f6ca9
// declared property setter: - (void)setMode:(int)mode;	// 0x3f7109
// declared property setter: - (void)setModeSwitch:(id)aSwitch;	// 0x3f6d09
// declared property setter: - (void)setModeSwitchPreferredSize:(XXStruct_40SSZC)size;	// 0x3f70c1
// declared property setter: - (void)setOnModeSwitch:(id)aSwitch;	// 0x3f70e9
@end
