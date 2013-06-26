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
@property(retain) NSNumber *port;	// G=0x337082a1; S=0x337082b5; @synthesize=_port
@property(retain) NSNumber *priority;	// G=0x33708259; S=0x3370826d; @synthesize=_priority
@property(retain) NSString *serviceString;	// G=0x33708235; S=0x33708249; @synthesize=_serviceString
@property(retain) NSString *target;	// G=0x337082c5; S=0x337082d9; @synthesize=_target
@property(retain) NSNumber *weight;	// G=0x3370827d; S=0x33708291; @synthesize=_weight
- (void)dealloc;	// 0x33708049
- (id)description;	// 0x337080e9
// declared property getter: - (id)port;	// 0x337082a1
// declared property getter: - (id)priority;	// 0x33708259
// declared property getter: - (id)serviceString;	// 0x33708235
// declared property setter: - (void)setPort:(id)port;	// 0x337082b5
// declared property setter: - (void)setPriority:(id)priority;	// 0x3370826d
// declared property setter: - (void)setServiceString:(id)string;	// 0x33708249
// declared property setter: - (void)setTarget:(id)target;	// 0x337082d9
// declared property setter: - (void)setWeight:(id)weight;	// 0x33708291
// declared property getter: - (id)target;	// 0x337082c5
// declared property getter: - (id)weight;	// 0x3370827d
@end
