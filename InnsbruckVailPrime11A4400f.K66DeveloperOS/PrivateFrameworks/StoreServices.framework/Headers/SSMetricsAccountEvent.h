/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSMetricsBaseEvent.h"

@class NSString;

@interface SSMetricsAccountEvent : SSMetricsBaseEvent {
}
@property(retain, nonatomic) NSString *accountEventType;	// G=0x32865edd; S=0x32865ef9; 
- (id)init;	// 0x32865e89
// declared property getter: - (id)accountEventType;	// 0x32865edd
// declared property setter: - (void)setAccountEventType:(id)type;	// 0x32865ef9
- (void)setAccountEventTypeWithEventIdentifier:(int)eventIdentifier;	// 0x32865f15
@end
