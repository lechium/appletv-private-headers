/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView : UIKeyboardMenuView {
	int m_currentInputModeIndex;	// 180 = 0xb4
	BOOL m_keyboardSettingsFromSwitcher;	// 184 = 0xb8
	NSMutableArray *m_inputModes;	// 188 = 0xbc
}
@property(retain, nonatomic) NSArray *inputModes;	// G=0x31fb2681; S=0x31d38475; @synthesize=m_inputModes
@property(assign, nonatomic) BOOL keyboardSettingsFromSwitcher;	// G=0x31d386a9; S=0x31d38461; @synthesize=m_keyboardSettingsFromSwitcher
+ (id)activeInstance;	// 0x31cdc1a5
+ (id)sharedInstance;	// 0x31d37c71
- (id)initWithFrame:(CGRect)frame;	// 0x31d37ccd
- (void)dealloc;	// 0x31fb1dd5
- (int)defaultSelectedIndex;	// 0x31fb24a9
- (void)didSelectItemAtIndex:(int)index;	// 0x31fb2619
// declared property getter: - (id)inputModes;	// 0x31fb2681
// declared property getter: - (BOOL)keyboardSettingsFromSwitcher;	// 0x31d386a9
- (id)nextInputMode;	// 0x31fb2001
- (int)numberOfItems;	// 0x31fb2261
- (CGSize)preferredSize;	// 0x31fb2289
- (id)previousInputMode;	// 0x31fb20ed
- (void)selectInputMode:(id)mode;	// 0x31fb1fcd
- (void)selectNextInputMode;	// 0x31fb20a5
- (void)selectPreviousInputMode;	// 0x31fb21d1
- (void)selectRowForInputMode:(id)inputMode;	// 0x31fb1f4d
- (id)selectedInputMode;	// 0x31fb1e25
- (void)setInputMode:(id)mode;	// 0x31fb1f91
// declared property setter: - (void)setInputModes:(id)modes;	// 0x31d38475
// declared property setter: - (void)setKeyboardSettingsFromSwitcher:(BOOL)switcher;	// 0x31d38461
- (void)show;	// 0x31fb2219
- (id)subtitleForItemAtIndex:(int)index;	// 0x31fb2561
- (id)titleForItemAtIndex:(int)index;	// 0x31fb24ed
@end
