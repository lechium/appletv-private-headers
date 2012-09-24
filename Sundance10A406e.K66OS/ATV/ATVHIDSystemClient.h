/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVHIDSystemClient : XXUnknownSuperclass {
	IOHIDEventSystemClientRef _hidSystemClient;	// 4 = 0x4
	IOHIDServiceClientRef _appleTVIRService;	// 8 = 0x8
	NSArray *_remotes;	// 12 = 0xc
}
@property(readonly, retain) NSArray *remotes;	// G=0x191abd; converted property
+ (id)sharedInstance;	// 0x1913b1
- (id)init;	// 0x1913ed
- (long)_init;	// 0x19144d
- (void)cancelLearning;	// 0x191ddd
- (void)commitLearningRemote;	// 0x191c91
- (void)dealloc;	// 0x1915ed
- (void)deleteRemote:(id)remote;	// 0x191b6d
- (BOOL)isPairedWithAppleRemote;	// 0x1918b9
- (id)mcuVersion;	// 0x191885
- (void)pairAppleRemote;	// 0x1918ed
- (void)processHIDEvent:(IOHIDEventRef)event;	// 0x191649
- (id)propertyForKey:(id)key error:(id *)error;	// 0x191a1d
// converted property getter: - (id)remotes;	// 0x191abd
- (void)rereadRemotes;	// 0x191b11
- (void)resetLearningRemote;	// 0x191c59
- (void)saveLearning;	// 0x191d8d
- (void)setName:(id)name ofRemote:(id)remote;	// 0x191bd5
- (BOOL)setProperty:(id)property forKey:(id)key error:(id *)error;	// 0x191a51
- (void)setSILState_HardwareProblem;	// 0x191e89
- (void)setSILState_Off;	// 0x191e19
- (void)setSILState_On;	// 0x191e35
- (void)setSILState_RejectedCommand;	// 0x191e6d
- (void)setSILState_Starting;	// 0x191e51
- (void)setSILToState:(id)state;	// 0x191ea5
- (void)sleepDisplay;	// 0x1919ad
- (void)startLearningUsagePage:(unsigned)page usageCode:(unsigned)code forRemoteUUID:(id)remoteUUID;	// 0x191cdd
- (void)unpairAppleRemote;	// 0x19194d
- (void)wakeDisplay;	// 0x1919e5
@end
