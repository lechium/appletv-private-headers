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
	void *_ptpCameraFolderProperties;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
}
@property(copy) id info;	// G=0x301dd4c5; S=0x301dfcd5; 
@property(readonly, assign) unsigned objHandle;	// G=0x301dd4b5; 
@property(retain) NSString *path;	// G=0x301e2b09; S=0x301e2b4d; @synthesize=_path
@property(readonly, assign) unsigned storageID;	// G=0x301dd4a5; 
@property(readonly, assign) unsigned type;	// G=0x301dd495; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x301dd695
- (void)dealloc;	// 0x301dfe19
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x301e192d
- (id)description;	// 0x301dfaed
- (void)enumerateContent;	// 0x301e4979
- (void)finalize;	// 0x301dfdc1
- (id)folderForObjectHandle:(unsigned long)objectHandle;	// 0x301e2215
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)objectHandleCreatingIfNeeded addUsedObjectIDs:(id)ids numFoldersCreated:(int *)created;	// 0x301e4775
- (BOOL)hasDCIMParent;	// 0x301dfbb5
// declared property getter: - (id)info;	// 0x301dd4c5
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x301e22e9
// declared property getter: - (unsigned long)objHandle;	// 0x301dd4b5
// declared property getter: - (id)path;	// 0x301e2b09
- (void)refreshInfo;	// 0x301dfc79
// declared property setter: - (void)setInfo:(id)info;	// 0x301dfcd5
// declared property setter: - (void)setPath:(id)path;	// 0x301e2b4d
// declared property getter: - (unsigned long)storageID;	// 0x301dd4a5
// declared property getter: - (unsigned)type;	// 0x301dd495
@end

