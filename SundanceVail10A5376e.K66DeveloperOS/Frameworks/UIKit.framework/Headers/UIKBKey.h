/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIKBShape.h"
#import "NSCopying.h"
#import "UIKBCacheKey.h"

@class UIKBAttributeList, NSString, NSArray;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
	NSString *m_name;	// 64 = 0x40
	NSString *m_representedString;	// 68 = 0x44
	NSString *m_displayString;	// 72 = 0x48
	NSString *m_displayType;	// 76 = 0x4c
	NSString *m_interactionType;	// 80 = 0x50
	NSString *m_variantType;	// 84 = 0x54
	UIKBAttributeList *m_attributes;	// 88 = 0x58
	unsigned m_displayTypeHint;	// 92 = 0x5c
	NSString *m_displayRowHint;	// 96 = 0x60
	NSArray *m_variantKeys;	// 100 = 0x64
	NSString *m_overrideDisplayString;	// 104 = 0x68
	NSString *m_clientVariantRepresentedString;	// 108 = 0x6c
	NSString *m_clientVariantActionName;	// 112 = 0x70
	BOOL m_visible;	// 116 = 0x74
	BOOL m_ghost;	// 117 = 0x75
	int m_splitMode;	// 120 = 0x78
	NSArray *m_flicks;	// 124 = 0x7c
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x3052e321; S=0x3052db09; @synthesize=m_attributes
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x3052e0f1; 
@property(copy, nonatomic) NSString *clientVariantActionName;	// G=0x3052e421; S=0x3052e435; @synthesize=m_clientVariantActionName
@property(copy, nonatomic) NSString *clientVariantRepresentedString;	// G=0x3052e3fd; S=0x3052e411; @synthesize=m_clientVariantRepresentedString
@property(assign, nonatomic) BOOL disabled;	// G=0x3052dd9d; S=0x3052dde9; 
@property(retain, nonatomic) NSString *displayRowHint;	// G=0x3052e395; S=0x3052e3a5; @synthesize=m_displayRowHint
@property(copy, nonatomic) NSString *displayString;	// G=0x3052e291; S=0x3052e2a5; @synthesize=m_displayString
@property(copy, nonatomic) NSString *displayType;	// G=0x3052e2b5; S=0x3052e2c9; @synthesize=m_displayType
@property(assign, nonatomic) unsigned displayTypeHint;	// G=0x3052e375; S=0x3052e385; @synthesize=m_displayTypeHint
@property(retain, nonatomic) NSArray *flicks;	// G=0x3052e445; S=0x3052e455; @synthesize=m_flicks
@property(assign, nonatomic) BOOL hidden;	// G=0x3052dac5; S=0x3052dae9; 
@property(copy, nonatomic) NSString *interactionType;	// G=0x3052e2d9; S=0x3052e2ed; @synthesize=m_interactionType
@property(readonly, assign, nonatomic) BOOL isClientVariantOverride;	// G=0x3052e069; 
@property(assign, nonatomic) BOOL isGhost;	// G=0x3052e355; S=0x3052e365; @synthesize=m_ghost
@property(copy, nonatomic) NSString *name;	// G=0x3052e249; S=0x3052e25d; @synthesize=m_name
@property(copy, nonatomic) NSString *overrideDisplayString;	// G=0x3052e3d9; S=0x3052e3ed; @synthesize=m_overrideDisplayString
@property(copy, nonatomic) NSString *rendering;	// G=0x3052dedd; S=0x3052df09; 
@property(copy, nonatomic) NSString *representedString;	// G=0x3052e26d; S=0x3052e281; @synthesize=m_representedString
@property(assign, nonatomic) int splitMode;	// G=0x3052e465; S=0x3052e475; @synthesize=m_splitMode
@property(assign) int textAlignment;	// G=0x3052df85; S=0x3052dfed; converted property
@property(copy, nonatomic) NSString *tint;	// G=0x3052de35; S=0x3052de61; 
@property(copy, nonatomic) NSArray *variantKeys;	// G=0x3052e3b5; S=0x3052e3c9; @synthesize=m_variantKeys
@property(retain) id variantPopupBias;	// G=0x3052dd71; S=0x3052dcf5; converted property
@property(copy, nonatomic) NSString *variantType;	// G=0x3052e2fd; S=0x3052e311; @synthesize=m_variantType
@property(assign, nonatomic) BOOL visible;	// G=0x3052e335; S=0x3052e345; @synthesize=m_visible
+ (id)key;	// 0x3052d0a9
+ (id)keyWithKey:(id)key;	// 0x3052d0f1
- (id)init;	// 0x3052d439
- (id)initWithCoder:(id)coder;	// 0x3052d799
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10;	// 0x3052d48d
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10 ghost:(BOOL)ghost;	// 0x3052d505
// declared property getter: - (id)attributes;	// 0x3052e321
- (BOOL)behavesAsShiftKey;	// 0x3052e1f5
// declared property getter: - (id)cacheKey;	// 0x3052e0f1
// declared property getter: - (id)clientVariantActionName;	// 0x3052e421
// declared property getter: - (id)clientVariantRepresentedString;	// 0x3052e3fd
- (id)copyWithZone:(NSZone *)zone;	// 0x3052da51
- (void)dealloc;	// 0x3052d66d
- (id)description;	// 0x3052da61
// declared property getter: - (BOOL)disabled;	// 0x3052dd9d
// declared property getter: - (id)displayRowHint;	// 0x3052e395
// declared property getter: - (id)displayString;	// 0x3052e291
// declared property getter: - (id)displayType;	// 0x3052e2b5
// declared property getter: - (unsigned)displayTypeHint;	// 0x3052e375
- (void)encodeWithCoder:(id)coder;	// 0x3052d935
// declared property getter: - (id)flicks;	// 0x3052e445
// declared property getter: - (BOOL)hidden;	// 0x3052dac5
// declared property getter: - (id)interactionType;	// 0x3052e2d9
// declared property getter: - (BOOL)isClientVariantOverride;	// 0x3052e069
// declared property getter: - (BOOL)isGhost;	// 0x3052e355
- (void)mergeAttributes:(id)attributes;	// 0x3052db49
// declared property getter: - (id)name;	// 0x3052e249
// declared property getter: - (id)overrideDisplayString;	// 0x3052e3d9
- (void)removeClientVariantActionInfo;	// 0x3052e0bd
// declared property getter: - (id)rendering;	// 0x3052dedd
// declared property getter: - (id)representedString;	// 0x3052e26d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3052db09
// declared property setter: - (void)setClientVariantActionName:(id)name;	// 0x3052e435
// declared property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x3052e411
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3052dde9
// declared property setter: - (void)setDisplayRowHint:(id)hint;	// 0x3052e3a5
// declared property setter: - (void)setDisplayString:(id)string;	// 0x3052e2a5
// declared property setter: - (void)setDisplayType:(id)type;	// 0x3052e2c9
// declared property setter: - (void)setDisplayTypeHint:(unsigned)hint;	// 0x3052e385
// declared property setter: - (void)setFlicks:(id)flicks;	// 0x3052e455
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x3052dae9
// declared property setter: - (void)setInteractionType:(id)type;	// 0x3052e2ed
// declared property setter: - (void)setIsGhost:(BOOL)ghost;	// 0x3052e365
// declared property setter: - (void)setName:(id)name;	// 0x3052e25d
// declared property setter: - (void)setOverrideDisplayString:(id)string;	// 0x3052e3ed
// declared property setter: - (void)setRendering:(id)rendering;	// 0x3052df09
// declared property setter: - (void)setRepresentedString:(id)string;	// 0x3052e281
// declared property setter: - (void)setSplitMode:(int)mode;	// 0x3052e475
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x3052dfed
// declared property setter: - (void)setTint:(id)tint;	// 0x3052de61
// declared property setter: - (void)setVariantKeys:(id)keys;	// 0x3052e3c9
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x3052dcf5
// declared property setter: - (void)setVariantType:(id)type;	// 0x3052e311
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x3052e345
// declared property getter: - (int)splitMode;	// 0x3052e465
// converted property getter: - (int)textAlignment;	// 0x3052df85
// declared property getter: - (id)tint;	// 0x3052de35
- (id)variantDisplayString;	// 0x3052db91
// declared property getter: - (id)variantKeys;	// 0x3052e3b5
// converted property getter: - (id)variantPopupBias;	// 0x3052dd71
// declared property getter: - (id)variantType;	// 0x3052e2fd
// declared property getter: - (BOOL)visible;	// 0x3052e335
@end

