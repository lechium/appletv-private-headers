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
@property(retain) NSMutableArray *files;	// G=0x325fa2fd; S=0x325fa2d9; @synthesize=_files
@property(retain) NSMutableArray *folders;	// G=0x325fa339; S=0x325fa315; @synthesize=_folders
- (void)dealloc;	// 0x325fa285
// declared property getter: - (id)files;	// 0x325fa2fd
- (void)finalize;	// 0x325fa351
// declared property getter: - (id)folders;	// 0x325fa339
// declared property setter: - (void)setFiles:(id)files;	// 0x325fa2d9
// declared property setter: - (void)setFolders:(id)folders;	// 0x325fa315
@end

