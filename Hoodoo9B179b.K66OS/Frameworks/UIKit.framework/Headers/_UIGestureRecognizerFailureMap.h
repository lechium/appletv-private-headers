/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerFailureMap : NSObject {
@private
	NSMutableArray *_gestureRecognizers;	// 4 = 0x4
	char *_failureMap;	// 8 = 0x8
	int _unmetFailureRequirementCount;	// 12 = 0xc
	int _unmetFailureDependentCount;	// 16 = 0x10
}
@property(readonly, assign) BOOL hasUnmetFailureRequirementsOrDependents;	// G=0x32f4ab0d; 
+ (void)buildFailureMapForGestureRecognizer:(id)gestureRecognizer;	// 0x32f4538d
+ (void)buildFailureMapForGestureRecognizers:(id)gestureRecognizers;	// 0x32f453c9
- (id)initWithRelatedGestures:(id)relatedGestures;	// 0x32f456a5
- (void)_gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x32f4a709
- (void)_queueRecognizersForResetIfFinished;	// 0x32f4aac1
- (void)dealloc;	// 0x32f48419
- (id)description;	// 0x332469c5
- (void)gestureRecognizerBecameDirty:(id)dirty;	// 0x3300e571
- (void)gestureRecognizerDeallocated:(id)deallocated;	// 0x3301c911
- (void)gestureRecognizerFinished:(id)finished withEvent:(id)event;	// 0x32f4a6d9
// declared property getter: - (BOOL)hasUnmetFailureRequirementsOrDependents;	// 0x32f4ab0d
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)fail;	// 0x32f4d749
- (void)rebuildFailureMap;	// 0x3304243d
- (void)reloadFailureMap;	// 0x32f457cd
@end

