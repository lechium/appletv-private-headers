/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAXClient.h"
#import "OfficeImport-Structs.h"

@class PXPresentationState;

__attribute__((visibility("hidden")))
@interface PXOfficeArtClient : OAXClient {
@private
	PXPresentationState *mPresentationState;	// 4 = 0x4
}
+ (int)readPlaceholderBoundsTrackFromNode:(xmlNode *)node;	// 0x328e3265
+ (int)readPlaceholderTypeFromNode:(xmlNode *)node;	// 0x328e30d1
- (id)initWithState:(id)state;	// 0x328dec61
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x329042b5
- (id)presentationState;	// 0x3294f7e9
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x328fb2e1
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x328e60dd
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x328e2ead
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x328e3325
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x328fae3d
@end

