/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"

@class OADTextBody, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADShape : OADGraphic {
@private
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADTextBody *mTextBody;	// 32 = 0x20
}
@property(retain) id geometry;	// G=0x32736af1; S=0x327af1c5; converted property
@property(retain) id textBody;	// G=0x32737739; S=0x327b626d; converted property
- (id)init;	// 0x3273e1e5
- (void)createPresetGeometryWithShapeType:(int)shapeType;	// 0x329da05d
- (void)dealloc;	// 0x327c0335
- (void)flattenProperties;	// 0x329da141
// converted property getter: - (id)geometry;	// 0x32736af1
- (void)removeUnnecessaryOverrides;	// 0x327b8e19
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x327af1c5
- (void)setParentTextListStyle:(id)style;	// 0x327b88dd
// converted property setter: - (void)setTextBody:(id)body;	// 0x327b626d
- (id)shapeProperties;	// 0x32736b61
// converted property getter: - (id)textBody;	// 0x32737739
- (int)type;	// 0x32736a75
@end

