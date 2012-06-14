/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFolder.h"

@class NSString;

@interface PTPCameraFolder : ICCameraFolder {
@private
	void *_ptpCameraFolderProperties;	// 20 = 0x14
	NSString *_path;	// 24 = 0x18
}
@property(copy) id info;	// G=0x328b6b75; S=0x328b6b89; 
@property(readonly, assign) unsigned long objHandle;	// G=0x328b6b61; 
@property(retain) NSString *path;	// G=0x328b8de1; S=0x328b8df5; @synthesize=_path
@property(readonly, assign) unsigned long storageID;	// G=0x328b6b4d; 
@property(readonly, assign) unsigned type;	// G=0x328b6b39; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x328b6a1d
- (void)dealloc;	// 0x328b6a81
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x328b6bcd
- (id)description;	// 0x328b8d15
- (void)enumerateContent;	// 0x328b7395
- (void)finalize;	// 0x328b6add
- (id)folderForObjectHandle:(unsigned long)objectHandle;	// 0x328b6f65
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)objectHandleCreatingIfNeeded addUsedObjectIDs:(id)ids numFoldersCreated:(int *)created;	// 0x328b7081
- (BOOL)hasDCIMParent;	// 0x328b72b9
// declared property getter: - (id)info;	// 0x328b6b75
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x328b6d65
// declared property getter: - (unsigned long)objHandle;	// 0x328b6b61
// declared property getter: - (id)path;	// 0x328b8de1
- (void)refreshInfo;	// 0x328b6cfd
// declared property setter: - (void)setInfo:(id)info;	// 0x328b6b89
// declared property setter: - (void)setPath:(id)path;	// 0x328b8df5
// declared property getter: - (unsigned long)storageID;	// 0x328b6b4d
// declared property getter: - (unsigned)type;	// 0x328b6b39
@end

