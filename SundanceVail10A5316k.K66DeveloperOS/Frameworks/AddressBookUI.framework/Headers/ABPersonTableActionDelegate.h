/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABStyleProviding.h"
#import "NSObject.h"


@protocol ABPersonTableActionDelegate <NSObject, ABStyleProviding>
@optional
- (void)action:(id)action willShowButton:(id)button forValueAtIndex:(int)index inPropertyGroup:(id)propertyGroup;
- (void)presentDifferentiationSheetForAction:(id)action;
@end

