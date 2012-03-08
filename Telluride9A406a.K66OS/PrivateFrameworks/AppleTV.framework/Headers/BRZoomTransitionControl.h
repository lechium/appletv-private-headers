/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTransitionControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRZoomTransitionControl : BRTransitionControl {
@private
	BRControl *_prerender;	// 56 = 0x38
	BOOL _prerenderAnimation;	// 60 = 0x3c
}
@property(assign) BOOL prerenderAnimation;	// G=0x330b8071; S=0x330b8061; converted property
- (void)_addPrerender;	// 0x330b81b5
- (void)_removePrerender;	// 0x330b823d
- (void)_takePrerenderSnapshot;	// 0x330b82a9
- (void)_updateContentForTransitionState;	// 0x330b84e1
- (void)_zoomInCompleted:(id)completed;	// 0x330b8be9
- (void)_zoomOutCompleted:(id)completed;	// 0x330b8c59
- (void)dealloc;	// 0x330b7fad
- (void)layoutSubcontrols;	// 0x330b80e1
// converted property getter: - (BOOL)prerenderAnimation;	// 0x330b8071
- (void)setContent:(id)content;	// 0x330b7ff9
// converted property setter: - (void)setPrerenderAnimation:(BOOL)animation;	// 0x330b8061
- (void)setTransitionedIn:(BOOL)anIn;	// 0x330b8081
@end

