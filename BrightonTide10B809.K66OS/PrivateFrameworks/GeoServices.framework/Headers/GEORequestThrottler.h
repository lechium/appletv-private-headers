/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMapTable;

@interface GEORequestThrottler : NSObject {
	NSMapTable *_throttleMap;	// 4 = 0x4
}
+ (id)sharedThrottler;	// 0x33f6ce41
- (id)init;	// 0x33f6ce6d
- (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x33f9ea2d
- (BOOL)allowRequest:(unsigned)request toURL:(id)url;	// 0x33f6cf39
- (void)clear;	// 0x33f9eadd
- (void)dealloc;	// 0x33f9ea61
@end

