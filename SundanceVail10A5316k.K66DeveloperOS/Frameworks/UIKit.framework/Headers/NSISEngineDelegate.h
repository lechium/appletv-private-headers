/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol NSISEngineDelegate <NSObject>
- (void)constraintsDidChangeInEngine:(id)constraints;
- (id)engine:(id)engine markerForConstraintToBreakAmongConstraints:(id)breakAmongConstraints;
- (void)engine:(id)engine willBreakConstraint:(id)constraint dueToMutuallyExclusiveConstraints:(id)mutuallyExclusiveConstraints;
@end

