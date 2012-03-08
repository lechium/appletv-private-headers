/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView : UIKeyboardMenuView {
@private
	int m_currentInputModeIndex;	// 136 = 0x88
	BOOL m_keyboardSettingsFromSwitcher;	// 140 = 0x8c
	NSMutableArray *m_inputModes;	// 144 = 0x90
}
@property(retain, nonatomic) NSArray *inputModes;	// G=0x35a30819; S=0x35a30035; @synthesize=m_inputModes
@property(assign, nonatomic) BOOL keyboardSettingsFromSwitcher;	// G=0x35a30829; S=0x35a30839; @synthesize=m_keyboardSettingsFromSwitcher
+ (id)activeInstance;	// 0x3576c71d
+ (id)sharedInstance;	// 0x35a2ffd9
- (id)initWithFrame:(CGRect)frame;	// 0x35a2ff0d
- (void)dealloc;	// 0x35a2ff8d
- (int)defaultSelectedIndex;	// 0x35a306f5
- (void)didSelectItemAtIndex:(int)index;	// 0x35a307b1
// declared property getter: - (id)inputModes;	// 0x35a30819
// declared property getter: - (BOOL)keyboardSettingsFromSwitcher;	// 0x35a30829
- (id)nextInputMode;	// 0x35a30361
- (int)numberOfItems;	// 0x35a30581
- (CGSize)preferredSize;	// 0x35a305c5
- (id)previousInputMode;	// 0x35a3044d
- (void)selectInputMode:(id)mode;	// 0x35a3032d
- (void)selectNextInputMode;	// 0x35a30405
- (void)selectPreviousInputMode;	// 0x35a30539
- (void)selectRowForInputMode:(id)inputMode;	// 0x35a302ad
- (id)selectedInputMode;	// 0x35a30201
- (void)setInputMode:(id)mode;	// 0x35a302f1
// declared property setter: - (void)setInputModes:(id)modes;	// 0x35a30035
// declared property setter: - (void)setKeyboardSettingsFromSwitcher:(BOOL)switcher;	// 0x35a30839
- (id)titleForItemAtIndex:(int)index;	// 0x35a3073d
@end

