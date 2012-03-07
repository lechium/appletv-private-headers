/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {
	FTMessageDelivery *_delivery;	// 4 = 0x4
	NSArray *_regions;	// 8 = 0x8
}
@property(readonly, assign) BOOL isLoaded;	// G=0x33fae2bd; 
@property(readonly, assign) BOOL isLoading;	// G=0x33fae2e1; 
@property(readonly, assign) NSArray *regions;	// G=0x33fae2d1; 
+ (id)sharedInstance;	// 0x33fae871
- (void)_buildMessageDeliveryIfNeeded;	// 0x33fae349
- (id)autorelease;	// 0x33fae2b9
- (void)dealloc;	// 0x33fae43d
- (void)flushRegions;	// 0x33fae305
// declared property getter: - (BOOL)isLoaded;	// 0x33fae2bd
// declared property getter: - (BOOL)isLoading;	// 0x33fae2e1
- (void)message:(id)message deliveredWithError:(id)error resultCode:(int)code resultDictionary:(id)dictionary;	// 0x33fae635
- (id)regionForID:(id)anId;	// 0x33fae579
// declared property getter: - (id)regions;	// 0x33fae2d1
- (oneway void)release;	// 0x33fae2ad
- (unsigned)retainCount;	// 0x33fae2b1
- (void)startLoading;	// 0x33fae4bd
@end
