/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import </libobjc.A.h>

@class NSString, NSMutableDictionary;

@interface PLProcessNetworkInfo : NSObject {
	NSString *processName;	// 4 = 0x4
	NSMutableDictionary *coalescedStats;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableDictionary *coalescedStats;	// G=0x32429409; S=0x32429419; @synthesize
@property(copy, nonatomic) NSString *processName;	// G=0x32429429; S=0x3242943d; @synthesize
// declared property getter: - (id)coalescedStats;	// 0x32429409
- (void)dealloc;	// 0x324293a5
// declared property getter: - (id)processName;	// 0x32429429
// declared property setter: - (void)setCoalescedStats:(id)stats;	// 0x32429419
// declared property setter: - (void)setProcessName:(id)name;	// 0x3242943d
@end
