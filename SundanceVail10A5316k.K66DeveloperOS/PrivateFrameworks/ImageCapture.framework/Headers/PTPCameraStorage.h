/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "PTPCameraFolder.h"

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {
	NSMutableArray *_tempArrayOfAllObjectHandles;	// 28 = 0x1c
	NSMutableArray *_tempArrayOfAllObjectHandlesToBeIgnored;	// 32 = 0x20
}
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandles;	// G=0x328ba0a9; converted property
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandlesToBeIgnored;	// G=0x328ba0b9; converted property
- (id)initWithStorageID:(unsigned long)storageID device:(id)device;	// 0x328b9d75
- (void)dealloc;	// 0x328b9de1
- (void)prime;	// 0x328b9ec5
- (void)refreshInfo;	// 0x328b9e45
// converted property getter: - (id)tempArrayOfAllObjectHandles;	// 0x328ba0a9
// converted property getter: - (id)tempArrayOfAllObjectHandlesToBeIgnored;	// 0x328ba0b9
@end

