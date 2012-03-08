/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPredicate.h"

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate {
@private
	MPMediaPropertyPredicateInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaPropertyPredicateInternal _internal;	// G=0x30985459; S=0x30985475; @synthesize
@property(assign, nonatomic) int comparisonType;	// G=0x30985431; S=0x30985445; 
@property(copy, nonatomic) NSString *property;	// G=0x309853b9; S=0x309853c9; 
@property(copy, nonatomic) id value;	// G=0x309853f1; S=0x30985405; 
+ (id)predicateWithValue:(id)value forProperty:(id)property;	// 0x30985279
+ (id)predicateWithValue:(id)value forProperty:(id)property comparisonType:(int)type;	// 0x3098529d
- (id)initWithCoder:(id)coder;	// 0x30984d61
- (id)ML3PredicateForContainer;	// 0x309c155d
- (id)ML3PredicateForTrack;	// 0x309c150d
- (id)_ML3PredicateForML3EntityProperty:(id)ml3EntityProperty;	// 0x309c15ad
// declared property getter: - (MPMediaPropertyPredicateInternal)_internal;	// 0x30985459
// declared property getter: - (int)comparisonType;	// 0x30985431
- (void)dealloc;	// 0x30984d09
- (id)description;	// 0x309850b9
- (id)descriptionOfValue:(id)value forProperty:(id)property;	// 0x30984f85
- (void)encodeWithCoder:(id)coder;	// 0x30984ead
- (unsigned)hash;	// 0x3098522d
- (BOOL)isEqual:(id)equal;	// 0x30985171
// declared property getter: - (id)property;	// 0x309853b9
// declared property setter: - (void)setComparisonType:(int)type;	// 0x30985445
// declared property setter: - (void)setProperty:(id)property;	// 0x309853c9
// declared property setter: - (void)setValue:(id)value;	// 0x30985405
// declared property setter: - (void)set_internal:(MPMediaPropertyPredicateInternal)internal;	// 0x30985475
// declared property getter: - (id)value;	// 0x309853f1
@end

