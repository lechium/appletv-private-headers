/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRAlertControl.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface BRErrorControl : BRAlertControl {
@private
	NSError *_error;	// 76 = 0x4c
}
- (id)initWithError:(id)error;	// 0x328eb741
- (void)controlWasDeactivated;	// 0x328eb68d
- (void)dealloc;	// 0x328eb6f9
@end

