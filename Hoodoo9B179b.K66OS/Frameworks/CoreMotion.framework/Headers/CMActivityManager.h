/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library


@interface CMActivityManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;	// G=0x34dd4cad; 
@property(copy) id activityHandler;	// G=0x34dd4c8d; S=0x34dd4569; 
- (id)init;	// 0x34dd44b9
// declared property getter: - (id)activityHandler;	// 0x34dd4c8d
- (void)dealloc;	// 0x34dd451d
// declared property getter: - (BOOL)isActivityAvailable;	// 0x34dd4cad
// declared property setter: - (void)setActivityHandler:(id)handler;	// 0x34dd4569
- (void)startWatchdogCheckins;	// 0x34dd4219
- (void)stopWatchdogCheckins;	// 0x34dd4481
@end

