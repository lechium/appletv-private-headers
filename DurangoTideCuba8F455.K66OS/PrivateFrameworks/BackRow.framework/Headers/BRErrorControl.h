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
- (id)initWithError:(id)error;	// 0x32f5e1a5
- (void)controlWasDeactivated;	// 0x32f5e0f1
- (void)dealloc;	// 0x32f5e15d
@end
