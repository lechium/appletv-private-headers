/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRWaitSpinnerControl, NSString, BRHeaderControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVAPDirectedScanController : BRController {
	BRWaitSpinnerControl *_spinner;	// 96 = 0x60
	NSString *_networkName;	// 100 = 0x64
	BRHeaderControl *_header;	// 104 = 0x68
	BRTextControl *_prompt;	// 108 = 0x6c
}
- (id)initWithNetworkName:(id)networkName;	// 0x1eb9e9
- (void)dealloc;	// 0x1ebbcd
- (void)setFrame:(CGRect)frame;	// 0x1ebc59
@end
