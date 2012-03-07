/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class EAGLContext, MRRenderer, MRTexture;

@interface MRSnapshotter : NSObject {
	MRRenderer *_renderer;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
	EAGLContext *_context;	// 16 = 0x10
	MRTexture *_texture;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL isFlipped;	// G=0x31bf93b1; S=0x31bf93e5; 
@property(assign, nonatomic) CGSize size;	// G=0x31bf96e5; S=0x31bf91b5; @synthesize=_size
- (id)initWithMontage:(id)montage andAssetManagementDelegate:(id)delegate;	// 0x31bf8fd5
- (CGImageRef)CGImageSnapshotAtState:(id)state;	// 0x31bf96a9
- (CGImageRef)CGImageSnapshotAtTime:(double)time;	// 0x31bf966d
- (CGImageRef)_CGImageSnapshot;	// 0x31bf9421
- (void)dealloc;	// 0x31bf912d
// declared property getter: - (BOOL)isFlipped;	// 0x31bf93b1
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x31bf93e5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x31bf91b5
// declared property getter: - (CGSize)size;	// 0x31bf96e5
@end
