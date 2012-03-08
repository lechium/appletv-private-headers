/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHContext.h"
#import <NSObject.h> // Unknown library

@class GQDAffineGeometry, NSMutableString;

__attribute__((visibility("hidden")))
@interface GQHCanvasContext : NSObject <GQHContext> {
@private
	GQDAffineGeometry *mGeometry;	// 4 = 0x4
	NSMutableString *mFunctionName;	// 8 = 0x8
	BOOL mHasFill;	// 12 = 0xc
	BOOL mHasStroke;	// 13 = 0xd
	CFStringRef mBezierStr;	// 16 = 0x10
}
- (void)addPathForLineEndStyle:(int)lineEndStyle graphicStyle:(id)style atPoint:(CGPoint)point neighboringCP:(CGPoint)cp filledPath:(CGPathRef *)path strokedPath:(CGPathRef *)path6;	// 0x33c4bced
- (void)addScriptTagToHtml:(id)html state:(id)state;	// 0x33c4b881
- (void)createMaskedImageWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry cropGeometry:(id)geometry4 imageBinary:(id)binary graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;	// 0x33c4c985
- (void)createShapeWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;	// 0x33c4d4c5
- (void)dealloc;	// 0x33c4bc0d
- (GQHPathEndPointInfo)endPointInfoForPath:(CGPathRef)path;	// 0x33c4beed
- (void)mapFill:(id)fill state:(id)state;	// 0x33c4bf41
- (void)mapLineEndFillStyle:(id)style state:(id)state;	// 0x33c4ba89
- (void)mapLineEndStrokeStyle:(id)style state:(id)state;	// 0x33c4babd
- (void)mapStroke:(id)stroke state:(id)state;	// 0x33c4b9cd
- (void)mapStyle:(id)style state:(id)state;	// 0x33c4b93d
- (void)prepareContext:(id)context;	// 0x33c4b6e9
- (void)setBezierPath:(char *)path state:(id)state;	// 0x33c4c141
- (void)setCGPath:(CGPathRef)path state:(id)state;	// 0x33c4bc59
- (void)setContextOpacity:(float)opacity state:(id)state;	// 0x33c4c929
- (void)setFillColor:(id)color state:(id)state;	// 0x33c4c789
- (void)setGradient:(id)gradient state:(id)state;	// 0x33c4c46d
- (void)setImageFill:(CFURLRef)fill srcSize:(CGSize)size mode:(int)mode state:(id)state;	// 0x33c4c1dd
- (void)setStrokeColor:(id)color width:(float)width state:(id)state;	// 0x33c4c851
- (id)strokeColorWithGraphicStyle:(id)graphicStyle;	// 0x33c4bba1
- (float)strokeWidthWithGraphicStyle:(id)graphicStyle;	// 0x33c4bb19
- (void)teardownContext:(id)context;	// 0x33c4dc29
- (void)translate:(CGSize)translate state:(id)state;	// 0x33c4c0d9
@end

