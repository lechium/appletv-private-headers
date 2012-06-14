/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADTextBody, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADShape : OADGraphic {
@private
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADTextBody *mTextBody;	// 32 = 0x20
}
@property(retain) id geometry;	// G=0x3107e009; S=0x3106be35; converted property
@property(retain) id textBody;	// G=0x3106e069; S=0x3106da51; converted property
- (id)init;	// 0x3106b63d
- (void)createPresetGeometryWithShapeType:(int)shapeType;	// 0x312541d5
- (void)dealloc;	// 0x3108c131
- (void)flattenProperties;	// 0x31254189
// converted property getter: - (id)geometry;	// 0x3107e009
- (void)removeUnnecessaryOverrides;	// 0x31070165
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x3106be35
- (void)setParentTextListStyle:(id)style;	// 0x3106efd5
// converted property setter: - (void)setTextBody:(id)body;	// 0x3106da51
- (id)shapeProperties;	// 0x31073bd1
// converted property getter: - (id)textBody;	// 0x3106e069
- (int)type;	// 0x3107df95
@end

