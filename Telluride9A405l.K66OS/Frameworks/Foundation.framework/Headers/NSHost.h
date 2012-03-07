/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, __NSHostExtraIvars;

@interface NSHost : NSObject {
@private
	NSArray *names;	// 4 = 0x4
	NSArray *addresses;	// 8 = 0x8
	id reserved;	// 12 = 0xc
}
@property(readonly, retain) NSArray *addresses;	// G=0x302c5919; converted property
@property(readonly, retain) NSArray *names;	// G=0x302c5719; converted property
@property(assign, nonatomic) __NSHostExtraIvars *reserved;	// G=0x302c5a65; S=0x302c5a75; @synthesize
+ (id)currentHost;	// 0x302c4049
+ (void)flushHostCache;	// 0x302c5a61
+ (id)hostWithAddress:(id)address;	// 0x302c40e1
+ (id)hostWithName:(id)name;	// 0x302c4095
+ (BOOL)isHostCacheEnabled;	// 0x302c5a59
+ (void)setHostCacheEnabled:(BOOL)enabled;	// 0x302c5a5d
- (id)initToResolve:(id)resolve as:(int)as;	// 0x302c3f69
- (void)__resolveWithFlags:(int)flags resultArray:(id)array handler:(id)handler;	// 0x302c44e5
- (id)address;	// 0x302c5745
// converted property getter: - (id)addresses;	// 0x302c5919
- (void)blockingResolveUntil:(int)until;	// 0x302c438d
- (void)dealloc;	// 0x302c59e5
- (id)description;	// 0x302c5959
- (BOOL)isEqualToHost:(id)host;	// 0x302c5465
- (id)localizedName;	// 0x302c5945
- (id)name;	// 0x302c5535
// converted property getter: - (id)names;	// 0x302c5719
// declared property getter: - (id)reserved;	// 0x302c5a65
- (void)resolve:(id)resolve;	// 0x302c412d
- (void)resolveCurrentHostWithHandler:(id)handler;	// 0x302c4c2d
// declared property setter: - (void)setReserved:(id)reserved;	// 0x302c5a75
@end
