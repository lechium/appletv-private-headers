/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class __NSHostExtraIvars, NSArray;

@interface NSHost : NSObject {
@private
	NSArray *names;	// 4 = 0x4
	NSArray *addresses;	// 8 = 0x8
	id reserved;	// 12 = 0xc
}
@property(readonly, retain) NSArray *addresses;	// G=0x31a5c09d; converted property
@property(readonly, retain) NSArray *names;	// G=0x31a5be8d; converted property
@property(assign, nonatomic) __NSHostExtraIvars *reserved;	// G=0x31a5c1ed; S=0x31a5c1fd; @synthesize
+ (id)currentHost;	// 0x31a5a685
+ (void)flushHostCache;	// 0x31a5c1e9
+ (id)hostWithAddress:(id)address;	// 0x31a5a71d
+ (id)hostWithName:(id)name;	// 0x31a5a6d1
+ (BOOL)isHostCacheEnabled;	// 0x31a5c1e1
+ (void)setHostCacheEnabled:(BOOL)enabled;	// 0x31a5c1e5
- (id)initToResolve:(id)resolve as:(int)as;	// 0x31a5a5a5
- (void)__resolveWithFlags:(int)flags resultArray:(id)array handler:(id)handler;	// 0x31a5ab5d
- (id)address;	// 0x31a5beb9
// converted property getter: - (id)addresses;	// 0x31a5c09d
- (void)blockingResolveUntil:(int)until;	// 0x31a5a9c5
- (void)dealloc;	// 0x31a5c169
- (id)description;	// 0x31a5c0dd
- (BOOL)isEqualToHost:(id)host;	// 0x31a5bba1
- (id)localizedName;	// 0x31a5c0c9
- (id)name;	// 0x31a5bc95
// converted property getter: - (id)names;	// 0x31a5be8d
// declared property getter: - (id)reserved;	// 0x31a5c1ed
- (void)resolve:(id)resolve;	// 0x31a5a769
- (void)resolveCurrentHostWithHandler:(id)handler;	// 0x31a5b301
// declared property setter: - (void)setReserved:(id)reserved;	// 0x31a5c1fd
@end

