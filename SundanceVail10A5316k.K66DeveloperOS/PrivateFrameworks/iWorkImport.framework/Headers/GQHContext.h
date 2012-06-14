/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "NSObject.h"


@protocol GQHContext <NSObject>
- (void)addScriptTagToHtml:(id)html state:(id)state;
- (void)createMaskedImageWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry cropGeometry:(id)geometry4 imageBinary:(id)binary graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;
- (void)createShapeWithId:(CFStringRef)anId path:(id)path geometry:(id)geometry graphicStyle:(id)style isFloating:(BOOL)floating state:(id)state;
- (void)prepareContext:(id)context;
- (void)setBezierPath:(char *)path state:(id)state;
- (void)setContextOpacity:(float)opacity state:(id)state;
- (void)setFillColor:(id)color state:(id)state;
- (void)setGradient:(id)gradient state:(id)state;
- (void)setImageFill:(CFURLRef)fill srcSize:(CGSize)size mode:(int)mode state:(id)state;
- (void)setStrokeColor:(id)color width:(float)width state:(id)state;
- (void)teardownContext:(id)context;
- (void)translate:(CGSize)translate state:(id)state;
@end

