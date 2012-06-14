/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableData;

@interface PTPStorageInfoDataset : NSObject {
	unsigned short _storageType;	// 4 = 0x4
	unsigned short _filesystemType;	// 6 = 0x6
	unsigned short _accessCapability;	// 8 = 0x8
	unsigned long long _maxCapacity;	// 12 = 0xc
	unsigned long long _freeSpaceInBytes;	// 20 = 0x14
	unsigned long _freeSpaceInImages;	// 28 = 0x1c
	NSString *_storageDescription;	// 32 = 0x20
	NSString *_volumeLabel;	// 36 = 0x24
	NSMutableData *_content;	// 40 = 0x28
	BOOL _dirty;	// 44 = 0x2c
	BOOL _readOnlyObject;	// 45 = 0x2d
}
@property(assign) unsigned short accessCapability;	// G=0x328c9175; S=0x328c9185; converted property
@property(retain) NSMutableData *content;	// G=0x328c8fc5; S=0x328c8bb5; converted property
@property(assign) unsigned short filesystemType;	// G=0x328c9145; S=0x328c9155; converted property
@property(assign) unsigned long long freeSpaceInBytes;	// G=0x328c91e5; S=0x328c91fd; converted property
@property(assign) unsigned long freeSpaceInImages;	// G=0x328c9225; S=0x328c9235; converted property
@property(assign) unsigned long long maxCapacity;	// G=0x328c91a5; S=0x328c91bd; converted property
@property(retain) NSString *storageDescription;	// G=0x328c9255; S=0x328c9265; converted property
@property(assign) unsigned short storageType;	// G=0x328c9115; S=0x328c9125; converted property
@property(retain) NSString *volumeLabel;	// G=0x328c92b9; S=0x328c92c9; converted property
- (id)init;	// 0x328c8b25
- (id)initWithData:(id)data;	// 0x328c8cc5
- (id)initWithMutableData:(id)mutableData;	// 0x328c8d6d
// converted property getter: - (unsigned short)accessCapability;	// 0x328c9175
// converted property getter: - (id)content;	// 0x328c8fc5
- (void)dealloc;	// 0x328c8df1
- (id)description;	// 0x328c8fed
// converted property getter: - (unsigned short)filesystemType;	// 0x328c9145
// converted property getter: - (unsigned long long)freeSpaceInBytes;	// 0x328c91e5
// converted property getter: - (unsigned long)freeSpaceInImages;	// 0x328c9225
// converted property getter: - (unsigned long long)maxCapacity;	// 0x328c91a5
// converted property setter: - (void)setAccessCapability:(unsigned short)capability;	// 0x328c9185
// converted property setter: - (void)setContent:(id)content;	// 0x328c8bb5
// converted property setter: - (void)setFilesystemType:(unsigned short)type;	// 0x328c9155
// converted property setter: - (void)setFreeSpaceInBytes:(unsigned long long)bytes;	// 0x328c91fd
// converted property setter: - (void)setFreeSpaceInImages:(unsigned long)images;	// 0x328c9235
// converted property setter: - (void)setMaxCapacity:(unsigned long long)capacity;	// 0x328c91bd
// converted property setter: - (void)setStorageDescription:(id)description;	// 0x328c9265
// converted property setter: - (void)setStorageType:(unsigned short)type;	// 0x328c9125
// converted property setter: - (void)setVolumeLabel:(id)label;	// 0x328c92c9
// converted property getter: - (id)storageDescription;	// 0x328c9255
// converted property getter: - (unsigned short)storageType;	// 0x328c9115
- (void)updateContent;	// 0x328c8e69
// converted property getter: - (id)volumeLabel;	// 0x328c92b9
@end

