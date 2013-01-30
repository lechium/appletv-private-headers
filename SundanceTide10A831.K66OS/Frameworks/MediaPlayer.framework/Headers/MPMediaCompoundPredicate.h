/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaPredicate.h"

@class NSArray;

@interface MPMediaCompoundPredicate : MPMediaPredicate {
	NSArray *_predicates;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *predicates;	// G=0x36f090dd; @synthesize=_predicates
+ (id)predicateMatchingPredicates:(id)predicates;	// 0x36f08ea5
- (id)initWithCoder:(id)coder;	// 0x36f08f3d
- (id)initWithPredicates:(id)predicates;	// 0x36f08e51
- (id)ML3PredicateForContainer;	// 0x36f46a61
- (id)ML3PredicateForTrack;	// 0x36f46a4d
- (id)_ML3PredicateForEntityTypeSelector:(SEL)entityTypeSelector;	// 0x36f46981
- (void)dealloc;	// 0x36f08ef1
- (id)description;	// 0x36f08fdd
- (void)encodeWithCoder:(id)coder;	// 0x36f08fad
- (unsigned)hash;	// 0x36f09095
- (BOOL)isEqual:(id)equal;	// 0x36f09039
// declared property getter: - (id)predicates;	// 0x36f090dd
@end
