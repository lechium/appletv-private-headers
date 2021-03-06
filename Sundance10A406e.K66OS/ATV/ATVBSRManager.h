/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVBSRManager : BRSingleton {
	BOOL _performingBSR;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x13b001
+ (id)singleton;	// 0x13aff1
- (id)init;	// 0x13b011
- (void)_performResetFromIR;	// 0x13b161
- (void)_showBSRScreenWithController:(id)controller;	// 0x13b275
- (void)dealloc;	// 0x13b08d
- (void)enterBSRModeWithCompletionBlock:(id)completionBlock;	// 0x13b0e9
- (void)enterWithModes:(id)modes withCompletionBlock:(id)completionBlock;	// 0x13b125
@end

