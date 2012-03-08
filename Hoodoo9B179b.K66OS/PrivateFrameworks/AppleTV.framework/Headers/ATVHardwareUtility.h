/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVHardwareUtility : BRSingleton {
@private
	BOOL _isEmbeddedHardwareDevice;	// 4 = 0x4
}
+ (BOOL)bootedFromRecoveryPartition;	// 0x3015bb89
+ (id)configurationInfo;	// 0x3015bc31
+ (BOOL)isEmbeddedHardwareDevice;	// 0x3015bb55
+ (id)mediaFolderPath;	// 0x3015bb8d
+ (void)pushDiagnosticLogsAtPaths:(id)paths;	// 0x3015bf9d
+ (BOOL)reboot;	// 0x3015bbdd
+ (void)setSILState_HardwareProblem;	// 0x3015bb21
+ (void)setSILState_Off;	// 0x3015ba51
+ (void)setSILState_On;	// 0x3015ba85
+ (void)setSILState_RejectedCommand;	// 0x3015baed
+ (void)setSILState_Starting;	// 0x3015bab9
+ (void)setSingleton:(id)singleton;	// 0x3015ba41
+ (id)singleton;	// 0x3015ba31
- (id)init;	// 0x3015c10d
- (BOOL)_determineIfEmbeddedHardwareDevice;	// 0x3015c171
- (BOOL)_isEmbeddedHardwareDevice;	// 0x3015c161
@end

