/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSSet;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRNowPlayingProvider : XXUnknownSuperclass <BRProvider> {
	id<BRControlFactory> _factory;	// 4 = 0x4
	NSSet *_types;	// 8 = 0x8
	NSString *_playerMediaAssetID;	// 12 = 0xc
}
+ (id)providerForTypes:(id)types;	// 0x3660f1
- (void)_checkPlayerState;	// 0x366529
- (id)_initWithTypes:(id)types;	// 0x366299
- (void)_playerStateChanged:(id)changed;	// 0x3664d9
- (id)controlFactory;	// 0x3661e1
- (id)dataAtIndex:(long)index;	// 0x366249
- (long)dataCount;	// 0x366231
- (void)dealloc;	// 0x36613d
- (id)hashForDataAtIndex:(long)index;	// 0x36628d
@end
