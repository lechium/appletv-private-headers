/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import "OpenGLES-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface EAGLSharegroup : NSObject {
	EAGLSharegroupPrivate *_private;	// 4 = 0x4
	NSString *debugLabel;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *debugLabel;	// G=0x334847c5; S=0x334847d9; @synthesize
- (id)init;	// 0x33484605
- (id)initWithAPI:(unsigned)api;	// 0x33484609
- (id)initWithAPI:(unsigned)api sharedWithCompute:(BOOL)compute;	// 0x3348461d
- (unsigned)APIs;	// 0x3348479d
- (void)dealloc;	// 0x33484709
// declared property getter: - (id)debugLabel;	// 0x334847c5
- (GLISharedRecRef)getGLIShared;	// 0x334847b1
- (void)loadGLIPlugin:(GLDPixelFormatRec *)plugin sharedWithCompute:(BOOL)compute;	// 0x33484571
// declared property setter: - (void)setDebugLabel:(id)label;	// 0x334847d9
@end
