/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAlertControl.h"
#import "AppleTV-Structs.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface BRErrorControl : BRAlertControl {
	NSError *_error;	// 108 = 0x6c
}
- (id)initWithError:(id)error;	// 0x288d05
- (void)controlWasDeactivated;	// 0x288e51
- (void)dealloc;	// 0x288e05
@end
