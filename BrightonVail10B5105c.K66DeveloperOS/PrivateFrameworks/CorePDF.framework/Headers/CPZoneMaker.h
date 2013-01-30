/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPCharSequence;

@interface CPZoneMaker : NSObject {
	CPCharSequence *charactersOnPage;	// 4 = 0x4
}
- (void)addObjectsToStraddler:(id)straddler from:(id)from;	// 0x3025e09d
- (unsigned)categorizeGraphicsIn:(id)anIn;	// 0x3025b6c1
- (void)cutHorizontalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x3025db89
- (void)cutVerticalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x3025de0d
- (void)dealloc;	// 0x3025b0a1
- (void)makeZonesIn:(id)anIn;	// 0x3025b171
- (void)makeZonesWithBoundaryIn:(id)anIn;	// 0x3025bc89
- (void)mergeQualifyingRectanglesIn:(id)anIn;	// 0x3025b861
- (id)newZoneForStraddlersFrom:(id)from;	// 0x3025e17d
- (BOOL)overlap:(id)overlap with:(id)with;	// 0x3025b0ed
@end
