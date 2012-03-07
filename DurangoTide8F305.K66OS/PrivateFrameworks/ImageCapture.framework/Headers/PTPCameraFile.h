/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFile.h"

@class NSString;

@interface PTPCameraFile : ICCameraFile {
@private
	void *_ptpCameraFileProperties;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
}
@property(copy) id info;	// G=0x312ed505; S=0x312efab1; 
@property(readonly, assign) unsigned objHandle;	// G=0x312ed4f5; 
@property(retain) NSString *path;	// G=0x312f2af1; S=0x312f2b21; @synthesize=_path
@property(readonly, assign) unsigned storageID;	// G=0x312ed4e5; 
@property(readonly, assign) unsigned type;	// G=0x312ed4d5; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x312ed641
- (void)dealloc;	// 0x312efd69
- (void)finalize;	// 0x312efd11
// declared property getter: - (id)info;	// 0x312ed505
- (id)metadataDict;	// 0x312f416d
// declared property getter: - (unsigned long)objHandle;	// 0x312ed4f5
// declared property getter: - (id)path;	// 0x312f2af1
// declared property setter: - (void)setInfo:(id)info;	// 0x312efab1
// declared property setter: - (void)setPath:(id)path;	// 0x312f2b21
// declared property getter: - (unsigned long)storageID;	// 0x312ed4e5
- (id)thumbData;	// 0x312f15ad
// declared property getter: - (unsigned)type;	// 0x312ed4d5
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x312f2bad
@end
