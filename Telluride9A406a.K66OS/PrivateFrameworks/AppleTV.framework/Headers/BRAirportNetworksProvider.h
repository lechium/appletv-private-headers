/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRAirportNetworksProvider : NSObject <BRProvider> {
@private
	NSArray *_networks;	// 4 = 0x4
}
- (id)initWithNetworks:(id)networks;	// 0x330f12b5
- (id)controlFactory;	// 0x330f1389
- (id)dataAtIndex:(long)index;	// 0x330f13ed
- (long)dataCount;	// 0x330f13cd
- (void)dealloc;	// 0x330f1269
- (id)hashForDataAtIndex:(long)index;	// 0x330f140d
- (void)setNetworks:(id)networks;	// 0x330f1309
@end

