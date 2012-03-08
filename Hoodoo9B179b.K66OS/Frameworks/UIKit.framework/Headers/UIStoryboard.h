/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSBundle, NSDictionary, NSString, NSMutableDictionary;

@interface UIStoryboard : NSObject {
@private
	NSBundle *bundle;	// 4 = 0x4
	NSString *relativePathFromBundle;	// 8 = 0x8
	NSDictionary *identifierToNibNameMap;	// 12 = 0xc
	NSString *designatedEntryPointIdentifier;	// 16 = 0x10
	NSMutableDictionary *identifierToUINibMap;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSBundle *bundle;	// G=0x33232c7d; @synthesize
@property(readonly, assign, nonatomic) NSString *designatedEntryPointIdentifier;	// G=0x33232cad; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *identifierToNibNameMap;	// G=0x33232c9d; @synthesize
@property(readonly, assign, nonatomic) NSMutableDictionary *identifierToUINibMap;	// G=0x33232cbd; @synthesize
@property(readonly, assign, nonatomic) NSString *relativePathFromBundle;	// G=0x33232c8d; @synthesize
+ (id)storyboardWithName:(id)name bundle:(id)bundle;	// 0x33232531
- (id)initWithBundle:(id)bundle relativePathFromBundle:(id)bundle2 identifierToNibNameMap:(id)nibNameMap designatedEntryPointIdentifier:(id)identifier;	// 0x33232305
// declared property getter: - (id)bundle;	// 0x33232c7d
- (BOOL)containsNibNamed:(id)named;	// 0x332327c5
- (void)dealloc;	// 0x33232269
// declared property getter: - (id)designatedEntryPointIdentifier;	// 0x33232cad
// declared property getter: - (id)identifierToNibNameMap;	// 0x33232c9d
// declared property getter: - (id)identifierToUINibMap;	// 0x33232cbd
- (id)instantiateInitialViewController;	// 0x33232c3d
- (id)instantiateViewControllerWithIdentifier:(id)identifier;	// 0x33232a85
- (id)nibForStoryboardNibNamed:(id)storyboardNibNamed;	// 0x33232831
- (id)nibForViewControllerWithIdentifier:(id)identifier;	// 0x33232931
// declared property getter: - (id)relativePathFromBundle;	// 0x33232c8d
@end

