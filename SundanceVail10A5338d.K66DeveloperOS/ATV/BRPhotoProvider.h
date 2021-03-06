/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRPhotoProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_collections;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
}
@property(retain) id controlFactory;	// G=0x27bde1; S=0x27bda5; converted property
+ (id)providerWithCollections:(id)collections controlFactory:(id)factory;	// 0x27bc89
- (id)initWithCollections:(id)collections controlFactory:(id)factory;	// 0x27bcc9
// converted property getter: - (id)controlFactory;	// 0x27bde1
- (id)dataAtIndex:(long)index;	// 0x27be11
- (long)dataCount;	// 0x27bdf1
- (void)dealloc;	// 0x27bd41
- (id)hashForDataAtIndex:(long)index;	// 0x27be5d
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x27bda5
@end

