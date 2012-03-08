/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADDrawableProperties;
@protocol OADClient, OADDrawableContainer;

__attribute__((visibility("hidden")))
@interface OADDrawable : NSObject {
@private
	BOOL mHidden;	// 4 = 0x4
	unsigned mId;	// 8 = 0x8
	OADDrawableProperties *mDrawableProperties;	// 12 = 0xc
	id<OADClient> mClientData;	// 16 = 0x10
	OADDrawable<OADDrawableContainer> *mParent;	// 20 = 0x14
}
@property(retain) id clientData;	// G=0x327361dd; S=0x327b6ee5; converted property
@property(retain) id drawableProperties;	// G=0x32736269; S=0x327b154d; converted property
@property(assign) BOOL hidden;	// G=0x327beea9; S=0x327b7575; converted property
@property(assign) unsigned long id;	// G=0x3286d4e5; S=0x3273ed2d; converted property
@property(retain) id parent;	// G=0x327363c5; S=0x32801e41; converted property
- (id)initWithPropertiesClass:(Class)propertiesClass;	// 0x3273e275
// converted property getter: - (id)clientData;	// 0x327361dd
- (id)createOrientedBoundsWithBounds:(CGRect)bounds;	// 0x329d444d
- (id)createWordClientDataWithTextType:(int)textType;	// 0x329bab9d
- (void)dealloc;	// 0x327c0729
// converted property getter: - (id)drawableProperties;	// 0x32736269
- (id)ensureClientDataOfClass:(Class)aClass;	// 0x328e3091
// converted property getter: - (BOOL)hidden;	// 0x327beea9
// converted property getter: - (unsigned long)id;	// 0x3286d4e5
// converted property getter: - (id)parent;	// 0x327363c5
- (void)removeUnnecessaryOverrides;	// 0x327bc3e9
// converted property setter: - (void)setClientData:(id)data;	// 0x327b6ee5
// converted property setter: - (void)setDrawableProperties:(id)properties;	// 0x327b154d
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x327b7575
// converted property setter: - (void)setId:(unsigned long)anId;	// 0x3273ed2d
// converted property setter: - (void)setParent:(id)parent;	// 0x32801e41
- (void)setParentTextListStyle:(id)style;	// 0x329d4449
@end

