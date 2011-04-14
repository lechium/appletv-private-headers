/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject {
@private
	int _action;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	int _animation;	// 12 = 0xc
	float _offset;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int action;	// G=0x306bd9e5; @synthesize=_action
@property(readonly, assign, nonatomic) int animation;	// G=0x306bd63d; @synthesize=_animation
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x306bd62d; @synthesize=_indexPath
@property(assign, nonatomic) float offset;	// G=0x307affed; S=0x307afffd; @synthesize=_offset
- (id)initWithAction:(int)action forIndexPath:(id)indexPath animation:(int)animation;	// 0x306bc179
- (id)_actionDescription;	// 0x307affad
// declared property getter: - (int)action;	// 0x306bd9e5
// declared property getter: - (int)animation;	// 0x306bd63d
- (int)compareIndexPaths:(id)paths;	// 0x306c773d
- (void)dealloc;	// 0x306c6135
// declared property getter: - (id)indexPath;	// 0x306bd62d
- (int)inverseCompareIndexPaths:(id)paths;	// 0x306c7305
- (BOOL)isSectionOperation;	// 0x306bd64d
// declared property getter: - (float)offset;	// 0x307affed
// declared property setter: - (void)setOffset:(float)offset;	// 0x307afffd
@end

