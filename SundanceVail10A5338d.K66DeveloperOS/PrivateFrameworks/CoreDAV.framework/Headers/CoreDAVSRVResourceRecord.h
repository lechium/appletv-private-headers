/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString;

@interface CoreDAVSRVResourceRecord : NSObject {
	NSString *_serviceString;	// 4 = 0x4
	NSNumber *_priority;	// 8 = 0x8
	NSNumber *_weight;	// 12 = 0xc
	NSNumber *_port;	// 16 = 0x10
	NSString *_target;	// 20 = 0x14
}
@property(retain) NSNumber *port;	// G=0x34c08819; S=0x34c0882d; @synthesize=_port
@property(retain) NSNumber *priority;	// G=0x34c087d1; S=0x34c087e5; @synthesize=_priority
@property(retain) NSString *serviceString;	// G=0x34c087ad; S=0x34c087c1; @synthesize=_serviceString
@property(retain) NSString *target;	// G=0x34c0883d; S=0x34c08851; @synthesize=_target
@property(retain) NSNumber *weight;	// G=0x34c087f5; S=0x34c08809; @synthesize=_weight
- (void)dealloc;	// 0x34c085c1
- (id)description;	// 0x34c08661
// declared property getter: - (id)port;	// 0x34c08819
// declared property getter: - (id)priority;	// 0x34c087d1
// declared property getter: - (id)serviceString;	// 0x34c087ad
// declared property setter: - (void)setPort:(id)port;	// 0x34c0882d
// declared property setter: - (void)setPriority:(id)priority;	// 0x34c087e5
// declared property setter: - (void)setServiceString:(id)string;	// 0x34c087c1
// declared property setter: - (void)setTarget:(id)target;	// 0x34c08851
// declared property setter: - (void)setWeight:(id)weight;	// 0x34c08809
// declared property getter: - (id)target;	// 0x34c0883d
// declared property getter: - (id)weight;	// 0x34c087f5
@end
