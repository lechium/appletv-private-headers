/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"

@class NSString, NSData;

@interface OADSound : OCDDelayedMedia {
	NSData *mSoundData;	// 12 = 0xc
	NSString *mName;	// 16 = 0x10
	long mSizeInBytes;	// 20 = 0x14
}
@property(retain) id name;	// G=0x318f35dd; S=0x31873f79; converted property
@property(assign) long sizeInBytes;	// G=0x318f35ed; S=0x318f35fd; converted property
@property(retain) id soundData;	// G=0x318f358d; S=0x318f359d; converted property
- (id)init;	// 0x31873f4d
- (void)dealloc;	// 0x31873fb9
- (bool)isLoaded;	// 0x318f360d
// converted property getter: - (id)name;	// 0x318f35dd
// converted property setter: - (void)setName:(id)name;	// 0x31873f79
// converted property setter: - (void)setSizeInBytes:(long)bytes;	// 0x318f35fd
// converted property setter: - (void)setSoundData:(id)data;	// 0x318f359d
// converted property getter: - (long)sizeInBytes;	// 0x318f35ed
// converted property getter: - (id)soundData;	// 0x318f358d
@end
