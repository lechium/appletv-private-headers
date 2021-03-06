/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSAffineTransform.h> // Unknown library


@interface NSAffineTransform (GQUAdditions)
- (id)initWithCGAffineTransform:(CGAffineTransform)cgaffineTransform;	// 0x369027b9
- (float)angle;	// 0x369026f9
- (CGRect)boundsOfTransformedRect:(CGRect)transformedRect;	// 0x36902479
- (CGAffineTransform)cgAffineTransform;	// 0x36902819
- (id)description;	// 0x369020c9
- (BOOL)differOnlyByTranslation:(id)translation;	// 0x3690229d
- (BOOL)differsFrom:(id)from;	// 0x36902191
- (BOOL)isAxisAligned;	// 0x36902679
- (void)shearXBy:(float)by yBy:(float)by2;	// 0x369025b1
- (void)transformRect:(CGRect)rect upperLeft:(CGPoint *)left lowerLeft:(CGPoint *)left3 lowerRight:(CGPoint *)right upperRight:(CGPoint *)right5;	// 0x36902375
@end

