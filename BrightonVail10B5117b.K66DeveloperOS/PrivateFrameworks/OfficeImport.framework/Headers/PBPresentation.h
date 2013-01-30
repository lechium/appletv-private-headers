/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PBPresentation : NSObject {
}
+ (void)addHeadersFootersToDocumentContainer:(id)documentContainer instance:(int)instance;	// 0x34c51e39
+ (void)finalizeWritingGlobalsWithPresentationState:(id)presentationState;	// 0x34c52e0d
+ (void)processLayoutTypesFromDocument:(id)document masterLayoutMap:(id)map state:(id)state;	// 0x34a4d159
+ (void)readFrom:(PptBinaryReader *)from to:(id)to cancel:(id)cancel asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x349e0dc5
+ (void)readMasterAndLayouts:(id)layouts masterLayoutMap:(id)map state:(id)state;	// 0x349f8b35
+ (void)readNotes:(id)notes masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state;	// 0x34c53075
+ (void)readSlides:(id)slides masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state isThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x34a4ed79
+ (void)scanSlideListForLayoutTypes:(id)layoutTypes slideListHolder:(id)holder masterLayoutMap:(id)map;	// 0x34a4ca9d
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)environmentHolder state:(id)state;	// 0x349efbc1
+ (void)setFontEntites:(id)entites environmentHolder:(id)holder;	// 0x349ef8cd
+ (void)writeGlobalsWithPresentationState:(id)presentationState;	// 0x34c51f51
+ (void)writeNotesMasterWithPresentationState:(id)presentationState;	// 0x34c52e11
+ (void)writeSlideMastersWithPresentationState:(id)presentationState;	// 0x34c52e7d
+ (void)writeSlidesWithPresentationState:(id)presentationState;	// 0x34c52f69
@end
