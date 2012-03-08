/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class BRAirportNetwork;
@protocol ATVAPPasswordEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate> {
@private
	BRAirportNetwork *_network;	// 160 = 0xa0
	id<ATVAPPasswordEntryDelegate> _delegate;	// 164 = 0xa4
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x32f82eed
- (void)dealloc;	// 0x32f83139
- (void)setInitialPassword:(id)password;	// 0x32f831ed
- (void)textDidChange:(id)text;	// 0x32f83199
- (void)textDidEndEditing:(id)text;	// 0x32f8319d
@end

