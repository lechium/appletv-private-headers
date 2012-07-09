/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "NSObject.h"


@protocol ABSwellTextViewDelegate <NSObject>
- (void)swellTextView:(id)view didChangeSize:(CGSize)size;
- (void)swellTextViewDidBeginEditing:(id)swellTextView;
- (void)swellTextViewDidEndEditing:(id)swellTextView;
- (BOOL)swellTextViewShouldBeginEditing:(id)swellTextView;
- (BOOL)swellTextViewShouldEndEditing:(id)swellTextView;
- (void)swellTextViewTextDidChange:(id)swellTextViewText;
@end
