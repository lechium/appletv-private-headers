/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVBSRManager : BRSingleton {
@private
	BOOL _performingBSR;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x32f33819
+ (id)singleton;	// 0x32f33809
- (id)init;	// 0x32f33829
- (void)_performResetFromIR;	// 0x32f33979
- (void)_showBSRScreenWithController:(id)controller;	// 0x32f33a51
- (void)dealloc;	// 0x32f338a5
- (void)enterBSRModeWithCompletionBlock:(id)completionBlock;	// 0x32f33901
- (void)enterWithModes:(id)modes withCompletionBlock:(id)completionBlock;	// 0x32f3393d
@end

