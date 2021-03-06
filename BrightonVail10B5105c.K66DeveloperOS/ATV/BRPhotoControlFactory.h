/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDateFormatter;
@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface BRPhotoControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
	NSDateFormatter *_formatter;	// 8 = 0x8
	BOOL _useMinimumImages;	// 12 = 0xc
}
@property(readonly, retain) NSDateFormatter *formatter;	// G=0x33e331; converted property
@property(retain) id selectionHandler;	// G=0x33e081; S=0x33e091; converted property
+ (id)standardFactory;	// 0x33de6d
- (id)_cyclerForData:(id)data;	// 0x33e6f1
- (id)_cyclerItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33e9e5
- (void)_decorateControlWithPlayIcon:(id)playIcon forMediaObject:(id)mediaObject;	// 0x33f045
- (id)_gridItemForData:(id)data;	// 0x33e525
- (id)_menuItemForData:(id)data;	// 0x33e3bd
- (id)_previewControlForData:(id)data;	// 0x33ef69
- (id)_shelfItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33f2d1
- (id)_subtitleForCollection:(id)collection;	// 0x33f4c5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33df19
- (void)dealloc;	// 0x33deb5
// converted property getter: - (id)formatter;	// 0x33e331
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x33e0cd
// converted property getter: - (id)selectionHandler;	// 0x33e081
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x33e091
- (void)setUseMinimumImages:(BOOL)images;	// 0x33e311
- (BOOL)useMinumumImages;	// 0x33e321
@end

