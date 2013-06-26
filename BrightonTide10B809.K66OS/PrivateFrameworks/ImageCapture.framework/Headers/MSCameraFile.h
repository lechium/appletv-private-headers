/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraFile.h"

@class NSString;

@interface MSCameraFile : ICCameraFile {
	void *_msCameraFileProperties;	// 12 = 0xc
}
@property(assign) int bitsPerPixel;	// G=0x342002e5; S=0x342002f9; 
@property(copy) NSString *exifCreationDateTime;	// G=0x3420014d; S=0x34200161; 
@property(copy) NSString *exifModificationDateTime;	// G=0x342001a1; S=0x342001b5; 
@property(readonly, assign) timespec fsCreationTime;	// G=0x342000e1; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x342000f9; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x342000cd; 
@property(readonly, assign) long long fsSize;	// G=0x34200111; 
@property(assign) int imgHeight;	// G=0x342002bd; S=0x342002d1; 
@property(assign) int imgWidth;	// G=0x34200295; S=0x342002a9; 
@property(assign) int thmHeight;	// G=0x3420026d; S=0x34200281; 
@property(assign) int thmOffset;	// G=0x3420021d; S=0x34200231; 
@property(assign) int thmSize;	// G=0x342001f5; S=0x34200209; 
@property(assign) int thmWidth;	// G=0x34200245; S=0x34200259; 
@property(assign) unsigned type;	// G=0x34200125; S=0x34200139; 
@property(assign) BOOL updatedBasicMetadata;	// G=0x3420030d; S=0x34200321; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x341fff81
// declared property getter: - (int)bitsPerPixel;	// 0x342002e5
- (void)dealloc;	// 0x34200005
// declared property getter: - (id)exifCreationDateTime;	// 0x3420014d
// declared property getter: - (id)exifModificationDateTime;	// 0x342001a1
- (void)finalize;	// 0x34200069
// declared property getter: - (timespec)fsCreationTime;	// 0x342000e1
// declared property getter: - (timespec)fsModificationTime;	// 0x342000f9
// declared property getter: - (unsigned long long)fsSN;	// 0x342000cd
// declared property getter: - (long long)fsSize;	// 0x34200111
// declared property getter: - (int)imgHeight;	// 0x342002bd
// declared property getter: - (int)imgWidth;	// 0x34200295
- (id)metadataDict;	// 0x3420103d
// declared property setter: - (void)setBitsPerPixel:(int)pixel;	// 0x342002f9
// declared property setter: - (void)setExifCreationDateTime:(id)time;	// 0x34200161
// declared property setter: - (void)setExifModificationDateTime:(id)time;	// 0x342001b5
// declared property setter: - (void)setImgHeight:(int)height;	// 0x342002d1
// declared property setter: - (void)setImgWidth:(int)width;	// 0x342002a9
// declared property setter: - (void)setThmHeight:(int)height;	// 0x34200281
// declared property setter: - (void)setThmOffset:(int)offset;	// 0x34200231
// declared property setter: - (void)setThmSize:(int)size;	// 0x34200209
// declared property setter: - (void)setThmWidth:(int)width;	// 0x34200259
// declared property setter: - (void)setType:(unsigned)type;	// 0x34200139
// declared property setter: - (void)setUpdatedBasicMetadata:(BOOL)metadata;	// 0x34200321
// declared property getter: - (int)thmHeight;	// 0x3420026d
// declared property getter: - (int)thmOffset;	// 0x3420021d
// declared property getter: - (int)thmSize;	// 0x342001f5
// declared property getter: - (int)thmWidth;	// 0x34200245
- (id)thumbData;	// 0x3420049d
// declared property getter: - (unsigned)type;	// 0x34200125
- (void)updateBasicMetadata;	// 0x34201551
// declared property getter: - (BOOL)updatedBasicMetadata;	// 0x3420030d
- (long)writeDataToFile:(int)file fromOffset:(long long)offset ofLength:(long long *)length;	// 0x34200335
@end
