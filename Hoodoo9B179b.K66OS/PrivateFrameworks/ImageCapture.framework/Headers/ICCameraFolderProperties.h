/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ICCameraFolderProperties : NSObject {
	NSMutableArray *_files;	// 4 = 0x4
	NSMutableArray *_folders;	// 8 = 0x8
}
@property(retain) NSMutableArray *files;	// G=0x358bc2e5; S=0x358bc2c1; @synthesize=_files
@property(retain) NSMutableArray *folders;	// G=0x358bc321; S=0x358bc2fd; @synthesize=_folders
- (void)dealloc;	// 0x358bc26d
// declared property getter: - (id)files;	// 0x358bc2e5
- (void)finalize;	// 0x358bc339
// declared property getter: - (id)folders;	// 0x358bc321
// declared property setter: - (void)setFiles:(id)files;	// 0x358bc2c1
// declared property setter: - (void)setFolders:(id)folders;	// 0x358bc2fd
@end

