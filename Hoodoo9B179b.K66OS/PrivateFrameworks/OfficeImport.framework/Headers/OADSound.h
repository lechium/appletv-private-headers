/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OADSound : OCDDelayedMedia {
@private
	NSData *mSoundData;	// 12 = 0xc
	NSString *mName;	// 16 = 0x10
	int mSizeInBytes;	// 20 = 0x14
}
@property(retain) id name;	// G=0x329e161d; S=0x3290ca11; converted property
@property(assign) long sizeInBytes;	// G=0x329e162d; S=0x329e163d; converted property
@property(retain) id soundData;	// G=0x329e160d; S=0x329e1699; converted property
- (id)init;	// 0x3290c9e5
- (void)dealloc;	// 0x3290ca55
- (bool)isLoaded;	// 0x329e164d
// converted property getter: - (id)name;	// 0x329e161d
// converted property setter: - (void)setName:(id)name;	// 0x3290ca11
// converted property setter: - (void)setSizeInBytes:(long)bytes;	// 0x329e163d
// converted property setter: - (void)setSoundData:(id)data;	// 0x329e1699
// converted property getter: - (long)sizeInBytes;	// 0x329e162d
// converted property getter: - (id)soundData;	// 0x329e160d
@end

