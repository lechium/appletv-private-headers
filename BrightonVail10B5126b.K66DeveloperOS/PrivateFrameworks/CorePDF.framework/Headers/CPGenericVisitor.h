/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPVisitor.h"


@interface CPGenericVisitor : NSObject <CPVisitor> {
}
- (void)visitBody:(id)body;	// 0x338330f9
- (void)visitChunk:(id)chunk;	// 0x33833025
- (void)visitColumn:(id)column;	// 0x33833129
- (void)visitCompoundGraphic:(id)graphic;	// 0x33833099
- (void)visitImage:(id)image;	// 0x33833095
- (void)visitImageRegion:(id)region;	// 0x33833149
- (void)visitLayoutArea:(id)area;	// 0x33833119
- (void)visitPage:(id)page;	// 0x338330a9
- (void)visitParagraph:(id)paragraph;	// 0x33833109
- (void)visitRegion:(id)region;	// 0x338330b9
- (void)visitRotation:(id)rotation;	// 0x338330e9
- (void)visitShape:(id)shape;	// 0x33833085
- (void)visitShapeRegion:(id)region;	// 0x33833159
- (void)visitTextBox:(id)box;	// 0x33833139
- (void)visitTextLine:(id)line;	// 0x338330c9
- (void)visitZone:(id)zone;	// 0x338330d9
@end

