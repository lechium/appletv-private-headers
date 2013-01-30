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
+ (void)addRecolorSpec:(const PptRecolorSpec *)spec toDictionary:(id)dictionary;	// 0x34b9ae49
+ (id)createBuildFromBuildType:(int)buildType;	// 0x34c50f11
+ (id)createTargetElementFromDrawable:(id)drawable clientData:(id)data buildType:(int)type;	// 0x34c50ba1
+ (int)directionFromFlyDirection:(int)flyDirection;	// 0x34c50e79
+ (BOOL)escherIsFullySupported;	// 0x34a46d85
+ (int)presetIdFromFlyMethod:(int)flyMethod isEntrance:(BOOL)entrance;	// 0x34c50da5
+ (void)readClientAnchorFromContainer:(id)container toDrawable:(id)drawable;	// 0x34a43525
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x34a60a11
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x34a42f49
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x34c50aa1
+ (void)readHyperlinkFromShapeContainerHolder:(id)shapeContainerHolder toDrawable:(id)drawable state:(id)state;	// 0x34a4378d
+ (BOOL)readOleFromClientDataHolder:(id)clientDataHolder toGraphic:(id)graphic tgtClientData:(id)data state:(id)state;	// 0x34a43a49
+ (BOOL)readPlaceholderInfo:(id)info clientData:(id)data toGraphic:(id)graphic presentationState:(id)state;	// 0x34a464d9
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)clientDataHolder toClientData:(id)clientData;	// 0x34a43899
+ (BOOL)tablesAreAllowed;	// 0x34a5ff41
@end
