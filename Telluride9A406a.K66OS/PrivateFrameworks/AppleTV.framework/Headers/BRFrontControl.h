/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeStack;

__attribute__((visibility("hidden")))
@interface BRFrontControl : BRControl {
@private
	BRMarqueeStack *_marqueeStack;	// 48 = 0x30
}
- (void)dealloc;	// 0x33093da9
- (void)setMarqueeStack:(id)stack;	// 0x33093df5
@end
