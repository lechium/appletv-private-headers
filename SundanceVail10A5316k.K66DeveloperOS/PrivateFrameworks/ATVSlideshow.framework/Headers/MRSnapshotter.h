/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRTexture, EAGLContext, MRRenderer;

@interface MRSnapshotter : NSObject {
@private
	MRRenderer *_renderer;	// 4 = 0x4
	EAGLContext *_context;	// 8 = 0x8
	MRTexture *_texture;	// 12 = 0xc
	CGSize _size;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL isFlipped;	// G=0x365a3a59; S=0x365a3a8d; 
@property(assign, nonatomic) CGSize size;	// G=0x365a3d99; S=0x365a385d; @synthesize=_size
- (id)initWithMontage:(id)montage andAssetManagementDelegate:(id)delegate isReadOnly:(BOOL)only;	// 0x365a3689
- (CGImageRef)CGImageSnapshotAtState:(id)state;	// 0x365a3d5d
- (CGImageRef)CGImageSnapshotAtTime:(double)time;	// 0x365a3d21
- (CGImageRef)_CGImageSnapshot;	// 0x365a3ac9
- (void)dealloc;	// 0x365a37d9
// declared property getter: - (BOOL)isFlipped;	// 0x365a3a59
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x365a3a8d
// declared property setter: - (void)setSize:(CGSize)size;	// 0x365a385d
// declared property getter: - (CGSize)size;	// 0x365a3d99
@end

