/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSTextStorage.h"
#import "UIFoundation-Structs.h"
#import "NSLayoutManagerDelegate.h"

@class NSDictionary, NSTextContainer, NSConcreteNotifyingMutableAttributedString, NSLayoutManager;

__attribute__((visibility("hidden")))
@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {
	NSConcreteNotifyingMutableAttributedString *_contents;	// 28 = 0x1c
	NSLayoutManager *_layoutManager;	// 32 = 0x20
	NSTextContainer *_textContainer;	// 36 = 0x24
	id _preliminaryCache;	// 40 = 0x28
	id _cache;	// 44 = 0x2c
	NSTextContainer *_firstTextContainer;	// 48 = 0x30
	NSTextContainer *_secondTextContainer;	// 52 = 0x34
	NSRange _currentCharacterRange;	// 56 = 0x38
	NSRange _currentGlyphRange;	// 64 = 0x40
	NSRange _temporaryCharacterRange;	// 72 = 0x48
	unsigned _retainCount;	// 80 = 0x50
	float _baselineDelta;	// 84 = 0x54
	struct {
		unsigned _typesetterBehavior : 4;
		unsigned _needToFlushCache : 1;
		unsigned _baselineMode : 1;
		unsigned _truncatesLastVisibleLine : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _reserved : 24;
	} _sdflags;	// 88 = 0x58
	NSDictionary *_styledTextOptions;	// 92 = 0x5c
}
@property(readonly, retain) NSLayoutManager *layoutManager;	// G=0x36c30a7d; converted property
@property(readonly, assign) unsigned retainCount;	// G=0x36c2f159; converted property
@property(readonly, retain) NSTextContainer *textContainer;	// G=0x36c30a8d; converted property
+ (BOOL)_fastDrawString:(id)string attributes:(id)attributes length:(long)length inRect:(CGRect)rect graphicsContext:(CGContextRef)context baselineRendering:(BOOL)rendering usesFontLeading:(BOOL)leading usesScreenFont:(BOOL)font typesetterBehavior:(int)behavior paragraphStyle:(id)style lineBreakMode:(int)mode boundingRect:(CGRect *)rect12 padding:(float)padding scrollable:(bool)scrollable baselineOffset:(float *)offset;	// 0x36c2f431
+ (void)_setHasCustomSettings:(BOOL)settings;	// 0x36c32261
+ (id)allocWithZone:(NSZone *)zone;	// 0x36c2eff5
+ (void)initialize;	// 0x36c2ef51
+ (id)stringDrawingTextStorage;	// 0x36c2efad
- (id)init;	// 0x36c319d1
- (float)_baselineDelta;	// 0x36c30bad
- (BOOL)_baselineMode;	// 0x36c30be1
- (BOOL)_fastDrawGlyphs:(unsigned short *)glyphs advances:(CGSize *)advances length:(unsigned)length font:(id)font color:(id)color containerSize:(CGSize)size usedRect:(CGRect)rect startingLocation:(CGPoint)location inRect:(CGRect)rect9 onView:(id)view context:(CGContextRef)context pinToTop:(BOOL)top;	// 0x36c2f429
- (BOOL)_forceWordWrapping;	// 0x36c30c81
- (BOOL)_informationForFont:(id)font glyphTable:(unsigned short **)table positionTable:(float **)table3;	// 0x36c2f391
- (BOOL)_isDeallocating;	// 0x36c2f0cd
- (BOOL)_isStringDrawingTextStorage;	// 0x36c319cd
- (void)_setBaselineDelta:(float)delta;	// 0x36c30b9d
- (void)_setBaselineMode:(BOOL)mode;	// 0x36c30bbd
- (void)_setForceWordWrapping:(BOOL)wrapping;	// 0x36c30c95
- (void)_setStyledTextOptions:(id)options;	// 0x36c30c2d
- (void)_setTruncatesLastLine:(BOOL)line;	// 0x36c30c09
- (id)_styledTextOptions;	// 0x36c30c71
- (BOOL)_truncatesLastLine;	// 0x36c30bf5
- (BOOL)_tryRetain;	// 0x36c2f0c9
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x36c32231
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x36c32111
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x36c32131
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x36c320f1
- (void)dealloc;	// 0x36c2f16d
- (CGPoint)defaultTextContainerOriginForRect:(CGRect)rect;	// 0x36c31051
- (void)drawTextContainer:(id)container withRect:(CGRect)rect graphicsContext:(CGContextRef)context baselineMode:(BOOL)mode scrollable:(BOOL)scrollable padding:(float)padding;	// 0x36c30cb9
- (BOOL)fastDrawAttributedString:(id)string containerSize:(CGSize)size padding:(float)padding inRect:(CGRect)rect onView:(id)view pinToTop:(BOOL)top sizeOnly:(BOOL)only size:(CGSize *)size8;	// 0x36c309a1
- (BOOL)fastDrawString:(id)string attributes:(id)attributes containerSize:(CGSize)size padding:(float)padding inRect:(CGRect)rect onView:(id)view pinToTop:(BOOL)top sizeOnly:(BOOL)only size:(CGSize *)size9;	// 0x36c2fef9
- (id)flippedView;	// 0x36c30a9d
- (void)fontSetChanged;	// 0x36c31989
- (void)invalidate;	// 0x36c3192d
// converted property getter: - (id)layoutManager;	// 0x36c30a7d
- (unsigned)length;	// 0x36c320b1
- (void)processEditing;	// 0x36c32001
- (oneway void)release;	// 0x36c2f105
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x36c321ed
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x36c32175
- (id)retain;	// 0x36c2f0d1
// converted property getter: - (unsigned)retainCount;	// 0x36c2f159
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x36c321b9
- (id)string;	// 0x36c320d1
// converted property getter: - (id)textContainer;	// 0x36c30a8d
- (id)textContainerForAttributedString:(id)attributedString;	// 0x36c311e5
- (id)textContainerForAttributedString:(id)attributedString containerSize:(CGSize)size lineFragmentPadding:(float)padding;	// 0x36c31215
- (int)typesetterBehavior;	// 0x36c30aa1
- (CGRect)usedRectForTextContainer:(id)textContainer;	// 0x36c30ab5
@end
