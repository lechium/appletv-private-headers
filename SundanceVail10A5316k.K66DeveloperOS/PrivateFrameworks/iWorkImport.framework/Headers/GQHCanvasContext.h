/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQHContext.h"
#import "iWorkImport-Structs.h"
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
- (void)addPathForLineEndStyle:(int)lineEndStyle graphicStyle:(id)style atPoint:(CGPoint)point neighboringCP:(CGPoint)cp filledPath:(CGPathRef *)path strokedPath:(CGPathRef *)path6;	// 0x36c8ee71
- (void)addScriptTagToHtml:(id)html state:(id)state;	// 0x36c8cc91
- (void)createMaskedImageWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry cropGeometry:(id)geometry4 imageBinary:(id)binary graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;	// 0x36c8d501
- (void)createShapeWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;	// 0x36c8cda9
- (void)dealloc;	// 0x36c8cc45
- (GQHPathEndPointInfo)endPointInfoForPath:(CGPathRef)path;	// 0x36c8ec81
- (void)mapFill:(id)fill state:(id)state;	// 0x36c8e9cd
- (void)mapLineEndFillStyle:(id)style state:(id)state;	// 0x36c8ebf1
- (void)mapLineEndStrokeStyle:(id)style state:(id)state;	// 0x36c8ec25
- (void)mapStroke:(id)stroke state:(id)state;	// 0x36c8eb39
- (void)mapStyle:(id)style state:(id)state;	// 0x36c8e941
- (void)prepareContext:(id)context;	// 0x36c8cd45
- (void)setBezierPath:(char *)path state:(id)state;	// 0x36c8e845
- (void)setCGPath:(CGPathRef)path state:(id)state;	// 0x36c8f099
- (void)setContextOpacity:(float)opacity state:(id)state;	// 0x36c8dfe5
- (void)setFillColor:(id)color state:(id)state;	// 0x36c8e11d
- (void)setGradient:(id)gradient state:(id)state;	// 0x36c8e1e9
- (void)setImageFill:(CFURLRef)fill srcSize:(CGSize)size mode:(int)mode state:(id)state;	// 0x36c8e5f1
- (void)setStrokeColor:(id)color width:(float)width state:(id)state;	// 0x36c8e041
- (id)strokeColorWithGraphicStyle:(id)graphicStyle;	// 0x36c8ee01
- (float)strokeWidthWithGraphicStyle:(id)graphicStyle;	// 0x36c8ed81
- (void)teardownContext:(id)context;	// 0x36c8cd49
- (void)translate:(CGSize)translate state:(id)state;	// 0x36c8e8d9
@end

