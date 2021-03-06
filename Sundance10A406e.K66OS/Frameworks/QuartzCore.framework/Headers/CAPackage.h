/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CALayer;

@interface CAPackage : NSObject {
	CAPackageData *_data;	// 4 = 0x4
}
@property(readonly, assign, getter=isGeometryFlipped) BOOL geometryFlipped;	// G=0x30560e2d; 
@property(readonly, assign) CALayer *rootLayer;	// G=0x30560e15; 
+ (id)packageWithContentsOfURL:(id)url type:(id)type options:(id)options error:(id *)error;	// 0x30560609
+ (id)packageWithData:(id)data type:(id)type options:(id)options error:(id *)error;	// 0x30560669
- (void)_addClassSubstitutions:(id)substitutions;	// 0x30560b35
- (id)_initWithContentsOfURL:(id)url type:(id)type options:(id)options error:(id *)error;	// 0x305606c9
- (id)_initWithData:(id)data type:(id)type options:(id)options error:(id *)error;	// 0x305607d5
- (void)_readFromArchiveData:(id)archiveData options:(id)options error:(id *)error;	// 0x30560c19
- (void)dealloc;	// 0x30560dad
- (void)foreachLayer:(id)layer;	// 0x30560e75
// declared property getter: - (BOOL)isGeometryFlipped;	// 0x30560e2d
- (id)publishedObjectWithName:(id)name;	// 0x30560e4d
// declared property getter: - (id)rootLayer;	// 0x30560e15
- (id)substitutedClasses;	// 0x30560885
- (Class)unarchiver:(id)unarchiver cannotDecodeObjectOfClassName:(id)className originalClasses:(id)classes;	// 0x30561025
- (id)unarchiver:(id)unarchiver didDecodeObject:(id)object;	// 0x305610b9
@end

