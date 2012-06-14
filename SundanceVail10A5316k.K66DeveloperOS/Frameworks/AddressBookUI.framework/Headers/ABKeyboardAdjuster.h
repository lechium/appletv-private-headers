/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject {
@private
	NSMutableSet *_adjustmentRecords;	// 4 = 0x4
	BOOL _active;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL active;	// G=0x34cb71a9; S=0x34cb6f05; @synthesize=_active
+ (id)sharedAdjuster;	// 0x34cb7171
- (id)init;	// 0x34cb69b5
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x34cb65c5
- (void)_keyboardWillHide:(id)_keyboard;	// 0x34cb68dd
- (void)_keyboardWillShow:(id)_keyboard;	// 0x34cb6805
// declared property getter: - (BOOL)active;	// 0x34cb71a9
- (void)addScrollView:(id)view;	// 0x34cb6b21
- (void)cancelDelayedAdjustmentsForView:(id)view;	// 0x34cb659d
- (BOOL)containsScrollView:(id)view;	// 0x34cb6c09
- (void)dateFieldDateDidBeginEditingNotification:(id)dateFieldDate;	// 0x34cb6e6d
- (void)dateFieldDateDidEndEditingNotification:(id)dateFieldDate;	// 0x34cb6eb9
- (void)dealloc;	// 0x34cb6aa5
- (void)manuallyAdjustEdgeInsets:(UIEdgeInsets)insets force:(BOOL)force;	// 0x34cb6689
- (id)recordForScrollView:(id)scrollView;	// 0x34cb6555
- (void)removeScrollView:(id)view;	// 0x34cb6b85
- (void)resetAdjustment;	// 0x34cb7145
// declared property setter: - (void)setActive:(BOOL)active;	// 0x34cb6f05
- (BOOL)shouldForceAutomaticKeyboardForView:(id)view;	// 0x34cb6c55
- (void)textFieldTextDidBeginEditingNotification:(id)textFieldText;	// 0x34cb6d3d
- (void)textFieldTextDidEndEditingNotification:(id)textFieldText;	// 0x34cb6d89
- (void)textViewTextDidBeginEditingNotification:(id)textViewText;	// 0x34cb6dd5
- (void)textViewTextDidEndEditingNotification:(id)textViewText;	// 0x34cb6e21
@end
