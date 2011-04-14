/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAXClient.h"

@class PXPresentationState;

__attribute__((visibility("hidden")))
@interface PXOfficeArtClient : OAXClient {
@private
	PXPresentationState *mPresentationState;	// 4 = 0x4
}
+ (int)readPlaceholderBoundsTrackFromNode:(xmlNode *)node;	// 0x31a52f79
+ (int)readPlaceholderTypeFromNode:(xmlNode *)node;	// 0x31a52e0d
- (id)initWithState:(id)state;	// 0x31a4f001
- (void)postprocessHyperlink:(id)hyperlink relationship:(id)relationship state:(id)state;	// 0x31a60b31
- (id)presentationState;	// 0x31af6045
- (void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode *)graphicalFramePropertiesNode toDrawable:(id)drawable state:(id)state;	// 0x31a6afbd
- (void)readClientDataFromPictureNode:(xmlNode *)pictureNode toImage:(id)image state:(id)state;	// 0x31a55825
- (void)readClientDataFromShapeNode:(xmlNode *)shapeNode toShape:(id)shape state:(id)state;	// 0x31a52c25
- (id)readClientTextField:(xmlNode *)field paragraph:(id)paragraph state:(id)state;	// 0x31a53029
- (id)readOle:(xmlNode *)ole state:(id)state;	// 0x31a62cd5
@end

