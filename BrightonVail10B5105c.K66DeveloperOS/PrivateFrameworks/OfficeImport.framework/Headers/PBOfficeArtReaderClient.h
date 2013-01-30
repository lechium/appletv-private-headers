/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"


@interface PBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (void)addRecolorSpec:(const PptRecolorSpec *)spec toDictionary:(id)dictionary;	// 0x37a63e49
+ (id)createBuildFromBuildType:(int)buildType;	// 0x37b19f11
+ (id)createTargetElementFromDrawable:(id)drawable clientData:(id)data buildType:(int)type;	// 0x37b19ba1
+ (int)directionFromFlyDirection:(int)flyDirection;	// 0x37b19e79
+ (BOOL)escherIsFullySupported;	// 0x3790fd85
+ (int)presetIdFromFlyMethod:(int)flyMethod isEntrance:(BOOL)entrance;	// 0x37b19da5
+ (void)readClientAnchorFromContainer:(id)container toDrawable:(id)drawable;	// 0x3790c525
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x37929a11
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x3790bf49
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x37b19aa1
+ (void)readHyperlinkFromShapeContainerHolder:(id)shapeContainerHolder toDrawable:(id)drawable state:(id)state;	// 0x3790c78d
+ (BOOL)readOleFromClientDataHolder:(id)clientDataHolder toGraphic:(id)graphic tgtClientData:(id)data state:(id)state;	// 0x3790ca49
+ (BOOL)readPlaceholderInfo:(id)info clientData:(id)data toGraphic:(id)graphic presentationState:(id)state;	// 0x3790f4d9
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)clientDataHolder toClientData:(id)clientData;	// 0x3790c899
+ (BOOL)tablesAreAllowed;	// 0x37928f41
@end
