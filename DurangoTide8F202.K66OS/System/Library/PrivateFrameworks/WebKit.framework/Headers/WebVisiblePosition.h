/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebVisiblePosition : NSObject {
@private
	WebObjectInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) int affinity;	// G=0x32c7f7c5; S=0x32c320d5; 
+ (id)_wrapVisiblePosition:(VisiblePosition)position;	// 0x32c31f99
+ (id)_wrapVisiblePositionIfValid:(VisiblePosition)valid;	// 0x32c34529
- (VisiblePosition)_visiblePosition;	// 0x32c32235
// declared property getter: - (int)affinity;	// 0x32c7f7c5
- (BOOL)atAlphaNumericBoundaryInDirection:(int)direction;	// 0x32c7f805
- (BOOL)atBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x32c828d5
- (id)boundaryOfEnclosingTextUnitOfGranularity:(int)granularity inDirection:(int)direction;	// 0x32c82de9
- (int)compare:(id)compare;	// 0x32c85239
- (void)dealloc;	// 0x32c34a51
- (id)description;	// 0x32c84cb5
- (BOOL)directionIsDownstream:(int)downstream;	// 0x32c33ca5
- (int)distanceFromPosition:(id)position;	// 0x32c84ea9
- (id)enclosingTextUnitOfGranularity:(int)granularity;	// 0x32c83941
- (id)enclosingTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x32c324ed
- (BOOL)isEditable;	// 0x32c7fb25
- (BOOL)isEqual:(id)equal;	// 0x32c853d5
- (id)nextCharacterBoundaryInDirection:(int)direction;	// 0x32c8266d
- (id)nextDocumentBoundaryInDirection:(int)direction;	// 0x32c80769
- (id)nextLineBoundaryInDirection:(int)direction;	// 0x32c80f35
- (id)nextParagraphBoundaryInDirection:(int)direction;	// 0x32c809e5
- (id)nextSentenceBoundaryInDirection:(int)direction;	// 0x32c81481
- (id)nextWordBoundaryInDirection:(int)direction;	// 0x32c8196d
- (id)positionAtStartOrEndOfWord;	// 0x32c7fcd1
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount;	// 0x32c33cdd
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount withAffinityDownstream:(BOOL)affinityDownstream;	// 0x32c33cfd
- (id)positionOfNextBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x32c7f6b1
- (id)positionWithinAdjacentTextUnitOfGranularity:(int)granularity inDirection:(int)direction;	// 0x32c833fd
- (BOOL)requiresContextForWordBoundary;	// 0x32c7f9e5
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x32c320d5
- (int)textDirection;	// 0x32c7f6ad
- (BOOL)withinTextUnitOfGranularity:(int)granularity;	// 0x32c846a1
- (BOOL)withinTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x32c33491
@end

