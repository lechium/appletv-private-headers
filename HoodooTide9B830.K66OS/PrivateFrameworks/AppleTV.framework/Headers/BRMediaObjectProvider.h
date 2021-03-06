/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;
@protocol BRControlFactory;

@interface BRMediaObjectProvider : NSObject <BRProvider> {
@private
	id<BRControlFactory> _controlFactory;	// 4 = 0x4
	NSArray *_mediaObjects;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(retain) id controlFactory;	// G=0x32a59dc1; S=0x32a59d59; converted property
@property(retain) NSArray *mediaObjects;	// G=0x32a59d49; S=0x32a59d09; converted property
@property(retain) NSString *name;	// G=0x32a59ea1; S=0x32a59e61; converted property
+ (id)providerWithMediaObjects:(id)mediaObjects controlFactory:(id)factory;	// 0x32a59c1d
- (long)controlCount;	// 0x32a59e51
// converted property getter: - (id)controlFactory;	// 0x32a59dc1
- (id)dataAtIndex:(long)index;	// 0x32a59dd1
- (long)dataCount;	// 0x32a59d99
- (void)dealloc;	// 0x32a59c95
- (id)hashForDataAtIndex:(long)index;	// 0x32a59dfd
// converted property getter: - (id)mediaObjects;	// 0x32a59d49
// converted property getter: - (id)name;	// 0x32a59ea1
// converted property setter: - (void)setControlFactory:(id)factory;	// 0x32a59d59
// converted property setter: - (void)setMediaObjects:(id)objects;	// 0x32a59d09
// converted property setter: - (void)setName:(id)name;	// 0x32a59e61
@end

