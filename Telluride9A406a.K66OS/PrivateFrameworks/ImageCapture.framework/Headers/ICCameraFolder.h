/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraItem.h"

@class NSArray;

@interface ICCameraFolder : ICCameraItem {
@private
	void *_folderProperties;	// 8 = 0x8
}
@property(readonly, assign) NSArray *contents;	// G=0x325fa04d; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x325fa3a5
- (void)addFile:(id)file;	// 0x325f9ec9
- (void)addFolder:(id)folder;	// 0x325f9f05
// declared property getter: - (id)contents;	// 0x325fa04d
- (void)dealloc;	// 0x325fa62d
- (void)deleteFile:(id)file;	// 0x325f9fd5
- (void)deleteFolder:(id)folder;	// 0x325fa011
- (void)deleteItem:(id)item;	// 0x325f9f41
- (id)description;	// 0x325fa525
- (id)files;	// 0x325fa0cd
- (void)finalize;	// 0x325fa5d9
- (id)folders;	// 0x325fa0ed
- (BOOL)hasThumbnail;	// 0x325f9eb1
- (id)metadata;	// 0x325f9eb9
- (void)requestMetadata;	// 0x325fa1a9
- (void)requestThumbnail;	// 0x325fa10d
- (CGImageRef)thumbnail;	// 0x325f9eb5
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x325fa4bd
@end

