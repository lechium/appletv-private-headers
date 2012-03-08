/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFile.h"
#import "ImageCapture-Structs.h"

@class NSString;

@interface MSCameraFile : ICCameraFile {
@private
	void *_msCameraFileProperties;	// 12 = 0xc
}
@property(assign) int bitsPerPixel;	// G=0x326010e5; S=0x326010f9; 
@property(copy) NSString *exifCreationDateTime;	// G=0x32600fcd; S=0x326035b5; 
@property(copy) NSString *exifModificationDateTime;	// G=0x32600fe1; S=0x32603571; 
@property(readonly, assign) timespec fsCreationTime;	// G=0x32600f61; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x32600f79; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x32600f4d; 
@property(readonly, assign) long long fsSize;	// G=0x32600f91; 
@property(assign) int imgHeight;	// G=0x326010bd; S=0x326010d1; 
@property(assign) int imgWidth;	// G=0x32601095; S=0x326010a9; 
@property(assign) int thmHeight;	// G=0x3260106d; S=0x32601081; 
@property(assign) int thmOffset;	// G=0x3260101d; S=0x32601031; 
@property(assign) int thmSize;	// G=0x32600ff5; S=0x32601009; 
@property(assign) int thmWidth;	// G=0x32601045; S=0x32601059; 
@property(assign) unsigned type;	// G=0x32600fa5; S=0x32600fb9; 
@property(assign) BOOL updatedBasicMetadata;	// G=0x3260110d; S=0x32601121; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x32601fcd
// declared property getter: - (int)bitsPerPixel;	// 0x326010e5
- (void)dealloc;	// 0x3260365d
// declared property getter: - (id)exifCreationDateTime;	// 0x32600fcd
// declared property getter: - (id)exifModificationDateTime;	// 0x32600fe1
- (void)finalize;	// 0x326035f9
// declared property getter: - (timespec)fsCreationTime;	// 0x32600f61
// declared property getter: - (timespec)fsModificationTime;	// 0x32600f79
// declared property getter: - (unsigned long long)fsSN;	// 0x32600f4d
// declared property getter: - (long long)fsSize;	// 0x32600f91
// declared property getter: - (int)imgHeight;	// 0x326010bd
// declared property getter: - (int)imgWidth;	// 0x32601095
- (id)metadataDict;	// 0x32602bf1
// declared property setter: - (void)setBitsPerPixel:(int)pixel;	// 0x326010f9
// declared property setter: - (void)setExifCreationDateTime:(id)time;	// 0x326035b5
// declared property setter: - (void)setExifModificationDateTime:(id)time;	// 0x32603571
// declared property setter: - (void)setImgHeight:(int)height;	// 0x326010d1
// declared property setter: - (void)setImgWidth:(int)width;	// 0x326010a9
// declared property setter: - (void)setThmHeight:(int)height;	// 0x32601081
// declared property setter: - (void)setThmOffset:(int)offset;	// 0x32601031
// declared property setter: - (void)setThmSize:(int)size;	// 0x32601009
// declared property setter: - (void)setThmWidth:(int)width;	// 0x32601059
// declared property setter: - (void)setType:(unsigned)type;	// 0x32600fb9
// declared property setter: - (void)setUpdatedBasicMetadata:(BOOL)metadata;	// 0x32601121
// declared property getter: - (int)thmHeight;	// 0x3260106d
// declared property getter: - (int)thmOffset;	// 0x3260101d
// declared property getter: - (int)thmSize;	// 0x32600ff5
// declared property getter: - (int)thmWidth;	// 0x32601045
- (id)thumbData;	// 0x32602d3d
// declared property getter: - (unsigned)type;	// 0x32600fa5
- (void)updateBasicMetadata;	// 0x32602055
// declared property getter: - (BOOL)updatedBasicMetadata;	// 0x3260110d
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x32603409
@end

