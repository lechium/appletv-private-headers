/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PBSlideBase.h"


@interface PBSlideMaster : PBSlideBase {
}
+ (id)createMasterStyleMap:(id)map state:(id)state;	// 0x34820009
+ (void)flattenBaseMasterStyleType:(int)type masterStyleMap:(id)map;	// 0x34a7d299
+ (void)flattenMasterStyleType:(int)type baseType:(int)type2 masterStyleMap:(id)map;	// 0x34a7d3a9
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)layout layoutType:(int)type masterStyleMap:(id)map;	// 0x3487452d
+ (void)flattenTextStyle:(id)style intoTextBox:(id)box;	// 0x348746a9
+ (void)padMissingLevels:(id)levels;	// 0x348203b9
+ (void)readMasterDrawables:(id)drawables slideHolder:(id)holder state:(id)state;	// 0x34822a91
+ (void)readSlideLayout:(id)layout slideHolder:(id)holder layoutType:(int)type state:(id)state;	// 0x34a7d1f1
+ (void)readSlideMasterStyles:(id)styles slideHolder:(id)holder state:(id)state;	// 0x3481fca5
+ (void)setCannedOtherTextListStyle:(id)style;	// 0x34a7d4a9
+ (void)setFont:(id)font fromCharacterProperties:(id)characterProperties;	// 0x348221c1
+ (id)textBodyForPlaceholderType:(int)placeholderType slideLayout:(id)layout;	// 0x34874615
+ (int)textTypeFor:(int)aFor placeholderType:(int)type;	// 0x34874679
+ (void)writeSlideMaster:(id)master presentationState:(id)state;	// 0x34a7df81
+ (void)writeSlideMasterOrLayout:(id)layout presentationState:(id)state;	// 0x34a7d6bd
@end

