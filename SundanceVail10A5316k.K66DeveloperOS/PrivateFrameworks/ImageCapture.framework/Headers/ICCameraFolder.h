/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraItem.h"
#import "ImageCapture-Structs.h"

@class NSArray;

@interface ICCameraFolder : ICCameraItem {
@private
	void *_folderProperties;	// 8 = 0x8
	int _filesLock;	// 12 = 0xc
	int _foldersLock;	// 16 = 0x10
}
@property(readonly, assign) NSArray *contents;	// G=0x328a9659; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x328a913d
- (void)addFile:(id)file;	// 0x328a93f5
- (void)addFolder:(id)folder;	// 0x328a9455
// declared property getter: - (id)contents;	// 0x328a9659
- (void)dealloc;	// 0x328a9251
- (void)deleteFile:(id)file;	// 0x328a9599
- (void)deleteFolder:(id)folder;	// 0x328a95f9
- (void)deleteItem:(id)item;	// 0x328a94b5
- (id)description;	// 0x328a9341
- (id)files;	// 0x328a9731
- (void)finalize;	// 0x328a92a1
- (id)folders;	// 0x328a9751
- (BOOL)hasThumbnail;	// 0x328a9771
- (void)lockFiles;	// 0x328a92f1
- (void)lockFolders;	// 0x328a9319
- (id)metadata;	// 0x328a9779
- (void)requestMetadata;	// 0x328a9829
- (void)requestThumbnail;	// 0x328a9789
- (CGImageRef)thumbnail;	// 0x328a9775
- (void)unlockFiles;	// 0x328a9305
- (void)unlockFolders;	// 0x328a932d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x328a96c9
@end

