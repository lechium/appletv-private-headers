/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class BRContextMenuControl;

__attribute__((visibility("hidden")))
@interface BRAccessibilityManager : BRSingleton {
	BRContextMenuControl *_utilityMenu;	// 4 = 0x4
	BOOL _optionMenuEnabled;	// 8 = 0x8
	BOOL _ignoreNextEvent;	// 9 = 0x9
}
@property(assign, nonatomic) BOOL ignoreNextEvent;	// G=0x2e9309; S=0x2e9319; @synthesize=_ignoreNextEvent
@property(assign, nonatomic) BOOL optionMenuEnabled;	// G=0x2e92f9; S=0x2e8a65; @synthesize=_optionMenuEnabled
+ (void)setSingleton:(id)singleton;	// 0x2e89a5
+ (id)singleton;	// 0x2e8995
- (id)init;	// 0x2e89c9
- (void).cxx_destruct;	// 0x2e9329
- (void)_captionsSelected:(id)selected;	// 0x2e8b31
- (void)_dismissContextMenu:(id)menu;	// 0x2e8af5
- (void)_returnHome:(id)home;	// 0x2e8c25
- (void)_showAccessibilityMenu;	// 0x2e8d61
- (void)_voiceOverSelected:(id)selected;	// 0x2e8b89
- (BOOL)contextMenuIsVisible;	// 0x2e8ac9
- (BOOL)handleEventAction:(id)action;	// 0x2e91ed
// declared property getter: - (BOOL)ignoreNextEvent;	// 0x2e9309
// declared property getter: - (BOOL)optionMenuEnabled;	// 0x2e92f9
// declared property setter: - (void)setIgnoreNextEvent:(BOOL)event;	// 0x2e9319
// declared property setter: - (void)setOptionMenuEnabled:(BOOL)enabled;	// 0x2e8a65
@end
