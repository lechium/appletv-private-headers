/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDAnimationTargetElement, PDCommonTimeNodeData;

__attribute__((visibility("hidden")))
@interface PDCommonBehaviorData : NSObject {
@private
	PDCommonTimeNodeData *mCommonTimeNodeData;	// 4 = 0x4
	PDAnimationTargetElement *mTgtElement;	// 8 = 0x8
}
@property(retain) id target;	// G=0x312fad29; S=0x312fcd2d; converted property
- (id)init;	// 0x312fccc9
- (id)commonTimeNodeData;	// 0x312fad19
- (void)dealloc;	// 0x312fcd6d
// converted property setter: - (void)setTarget:(id)target;	// 0x312fcd2d
// converted property getter: - (id)target;	// 0x312fad29
@end
