/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardNumbers : BRKeyboard {
	BRControl *_thirdRow;	// 48 = 0x30
}
- (id)init;	// 0x30f549
- (float)_actionKeysContainerSpacing;	// 0x30f785
- (id)_keyboardDataFileName;	// 0x30f741
- (float)_mainKeysHorizontalSpacing;	// 0x30f771
- (float)_mainKeysVerticalSpacing;	// 0x30f769
- (int)_numberOfMainKeyColumns;	// 0x30f765
- (int)_numberOfMainKeyRows;	// 0x30f761
- (id)_optionCharactersForKeyboardInput;	// 0x30f75d
- (id)_popupKeyboardDataFileName;	// 0x30f735
- (float)_preferredTextEntryControlWidth;	// 0x30f779
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x30f78d
- (void)dealloc;	// 0x30f5a5
- (id)keyboardControl;	// 0x30f625
- (CGRect)keyboardControlFrame;	// 0x30f795
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x30f731
- (id)name;	// 0x30f619
- (id)switchToThisKeyboardIdentifier;	// 0x30f5f1
@end
