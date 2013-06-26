/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>
#import "CoreThemeDefinition-Structs.h"

@class NSSet, CUIImage, TDSchemaDefinition, NSArray, NSString;

@interface TDSchemaPartDefinition : NSManagedObject {
	CUIImage *previewImage;	// 48 = 0x30
	NSArray *renditions;	// 52 = 0x34
	NSArray *renditionGroups;	// 56 = 0x38
	unsigned partFeatures;	// 60 = 0x3c
}
@property(retain, nonatomic) TDSchemaDefinition *element;	// @dynamic
@property(retain, nonatomic) NSString *name;	// @dynamic
@property(assign, nonatomic) unsigned partFeatures;	// G=0x30725d99; S=0x30725e7d; @synthesize
@property(retain, nonatomic) CUIImage *previewImage;	// G=0x30725cfd; S=0x30725e4d; @synthesize
@property(retain, nonatomic) NSSet *productions;	// @dynamic
@property(retain, nonatomic) NSArray *renditionGroups;	// G=0x30725d65; S=0x30725e6d; @synthesize
@property(copy, nonatomic) NSArray *renditions;	// G=0x30725d31; S=0x30725e5d; @synthesize
@property(retain, nonatomic) NSString *widgetID;	// @dynamic
- (int)_renditionKeyValueForTokenIdentifier:(unsigned short)tokenIdentifier;	// 0x30725af5
- (id)_schema;	// 0x3072583d
- (id)bestPreviewRendition;	// 0x30725825
- (const XXStruct_c6U6SD *)cuiPartDefinition;	// 0x30725c61
- (void)didTurnIntoFault;	// 0x30725dcd
- (id)displayName;	// 0x30725c29
- (int)elementID;	// 0x30725c01
// declared property getter: - (unsigned)partFeatures;	// 0x30725d99
- (int)partID;	// 0x30725c15
// declared property getter: - (id)previewImage;	// 0x30725cfd
// declared property getter: - (id)renditionGroups;	// 0x30725d65
// declared property getter: - (id)renditions;	// 0x30725d31
// declared property setter: - (void)setPartFeatures:(unsigned)features;	// 0x30725e7d
// declared property setter: - (void)setPreviewImage:(id)image;	// 0x30725e4d
// declared property setter: - (void)setRenditionGroups:(id)groups;	// 0x30725e6d
// declared property setter: - (void)setRenditions:(id)renditions;	// 0x30725e5d
- (void)updateDerivedRenditionData;	// 0x3072585d
- (id)validStatesWithDocument:(id)document;	// 0x307259fd
@end
