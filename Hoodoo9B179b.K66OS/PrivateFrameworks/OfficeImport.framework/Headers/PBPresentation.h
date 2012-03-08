/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBPresentation : NSObject {
}
+ (void)addHeadersFootersToDocumentContainer:(id)documentContainer instance:(int)instance;	// 0x32950bfd
+ (void)processLayoutTypesFromDocument:(id)document masterLayoutMap:(id)map state:(id)state;	// 0x327f74a5
+ (void)readFrom:(PptBinaryReader *)from to:(id)to cancel:(id)cancel asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x327dfa91
+ (id)readFromArchive:(id)archive asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32950991
+ (id)readFromData:(id)data asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32950995
+ (void)readMasterAndLayouts:(id)layouts masterLayoutMap:(id)map state:(id)state;	// 0x327f2ec1
+ (void)readNotes:(id)notes masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state;	// 0x32950999
+ (void)readSlides:(id)slides masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x327f8cdd
+ (void)scanSlideListForLayoutTypes:(id)layoutTypes slideListHolder:(id)holder masterLayoutMap:(id)map;	// 0x327f72f9
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)environmentHolder state:(id)state;	// 0x327ee5ed
+ (void)setFontEntites:(id)entites environmentHolder:(id)holder;	// 0x327ee37d
@end

