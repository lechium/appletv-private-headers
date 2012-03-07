/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString;

@interface CATextLayer : CALayer {
@private
	CATextLayerPrivateRef _state;	// 48 = 0x30
}
@property(copy) NSString *alignmentMode;	// G=0x33632cd5; S=0x33632ccd; 
@property(assign) BOOL allowsFontSubpixelQuantization;	// G=0x336339d9; S=0x336339e5; 
@property(assign) void *font;	// G=0x33632d1d; S=0x33632d15; 
@property(assign) float fontSize;	// G=0x33632d2d; S=0x33632d25; 
@property(assign) CGColorRef foregroundColor;	// G=0x33632d0d; S=0x33632d05; 
@property(copy) id string;	// G=0x33632d3d; S=0x33632d35; 
@property(copy) NSString *truncationMode;	// G=0x33632ce5; S=0x33632cdd; 
@property(copy) id truncationString;	// G=0x336339c9; S=0x336339d1; 
@property(assign, getter=isWrapped) BOOL wrapped;	// G=0x33632cf5; S=0x33632ced; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x33632ab1
+ (id)defaultValueForKey:(id)key;	// 0x33632b2d
+ (BOOL)needsDisplayForKey:(id)key;	// 0x33632b09
- (id)init;	// 0x33632a85
- (id)initWithLayer:(id)layer;	// 0x33633845
- (void)_applyLinesToFunction:(/*function-pointer*/ void *)function info:(void *)info;	// 0x33632e99
- (id)_createStringDict;	// 0x3363355d
- (CTLineRef)_createTruncationToken;	// 0x336333f9
- (void)_drawLine:(CTLineRef)line inContext:(CGContextRef)context atPoint:(CGPoint)point;	// 0x33632e79
- (CGSize)_preferredSize;	// 0x336331fd
- (void)_prepareContext:(CGContextRef)context;	// 0x33632d45
- (CTTypesetterRef)_retainTypesetter;	// 0x336334a1
// declared property getter: - (id)alignmentMode;	// 0x33632cd5
// declared property getter: - (BOOL)allowsFontSubpixelQuantization;	// 0x336339d9
- (void)dealloc;	// 0x33633801
- (void)didChangeValueForKey:(id)key;	// 0x336336d5
- (void)drawInContext:(CGContextRef)context;	// 0x33632d7d
// declared property getter: - (void *)font;	// 0x33632d1d
// declared property getter: - (float)fontSize;	// 0x33632d2d
// declared property getter: - (CGColorRef)foregroundColor;	// 0x33632d0d
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x33633939
// declared property getter: - (BOOL)isWrapped;	// 0x33632cf5
// declared property setter: - (void)setAlignmentMode:(id)mode;	// 0x33632ccd
// declared property setter: - (void)setAllowsFontSubpixelQuantization:(BOOL)quantization;	// 0x336339e5
// declared property setter: - (void)setFont:(void *)font;	// 0x33632d15
// declared property setter: - (void)setFontSize:(float)size;	// 0x33632d25
// declared property setter: - (void)setForegroundColor:(CGColorRef)color;	// 0x33632d05
// declared property setter: - (void)setString:(id)string;	// 0x33632d35
// declared property setter: - (void)setTruncationMode:(id)mode;	// 0x33632cdd
// declared property setter: - (void)setTruncationString:(id)string;	// 0x336339d1
// declared property setter: - (void)setWrapped:(BOOL)wrapped;	// 0x33632ced
// declared property getter: - (id)string;	// 0x33632d3d
// declared property getter: - (id)truncationMode;	// 0x33632ce5
// declared property getter: - (id)truncationString;	// 0x336339c9
- (BOOL)wrapped;	// 0x336339b1
@end
