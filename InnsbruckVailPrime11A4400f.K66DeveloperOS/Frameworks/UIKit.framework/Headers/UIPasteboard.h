/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSArray, UIColor, UIImage, NSString, NSURL;

@interface UIPasteboard : NSObject {
	NSString *_name;	// 4 = 0x4
}
@property(copy, nonatomic) NSURL *URL;	// G=0x2f6fa021; S=0x2f6f9f49; 
@property(copy, nonatomic) NSArray *URLs;	// G=0x2f6fa249; S=0x2f6fa05d; 
@property(readonly, assign, nonatomic) int changeCount;	// G=0x2f6f99b1; 
@property(copy, nonatomic) UIColor *color;	// G=0x2f6fa9d1; S=0x2f6fa8cd; 
@property(copy, nonatomic) NSArray *colors;	// G=0x2f6fabf9; S=0x2f6faa0d; 
@property(copy, nonatomic) UIImage *image;	// G=0x2f6fa39d; S=0x2f6fa289; 
@property(copy, nonatomic) NSArray *images;	// G=0x2f6fa6f5; S=0x2f6fa4ed; 
@property(copy, nonatomic) NSArray *items;	// G=0x2f6f99c5; S=0x2f6f9b79; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x2f6f85a5; 
@property(readonly, assign, nonatomic) int numberOfItems;	// G=0x2f4dd285; 
@property(assign, nonatomic, getter=isPersistent) BOOL persistent;	// G=0x2f6f9981; S=0x2f6f999d; 
@property(copy, nonatomic) NSString *string;	// G=0x2f6f9ce1; S=0x2f6f9c09; 
@property(copy, nonatomic) NSArray *strings;	// G=0x2f6f9f09; S=0x2f6f9d1d; 
+ (id)_findPasteboard;	// 0x2f6fac39
+ (id)_printPasteboard;	// 0x2f6fac91
+ (id)generalPasteboard;	// 0x2f4dcb99
+ (id)pasteboardWithName:(id)name create:(BOOL)create;	// 0x2f6f8205
+ (id)pasteboardWithUniqueName;	// 0x2f6f838d
+ (void)removePasteboardWithName:(id)name;	// 0x2f6f8441
- (id)init;	// 0x2f6f84cd
// declared property getter: - (id)URL;	// 0x2f6fa021
// declared property getter: - (id)URLs;	// 0x2f6fa249
- (void)_addItems:(id)items oldPasteboardTypes:(id)types;	// 0x2f6f95c5
- (id)_initWithName:(id)name system:(BOOL)system create:(BOOL)create;	// 0x2f4dcbf1
- (void)_pasteboardChanged:(id)changed;	// 0x2f6face9
- (void)addItems:(id)items;	// 0x2f6f95b1
// declared property getter: - (int)changeCount;	// 0x2f6f99b1
// declared property getter: - (id)color;	// 0x2f6fa9d1
// declared property getter: - (id)colors;	// 0x2f6fabf9
- (BOOL)containsPasteboardTypes:(id)types;	// 0x2f6f8609
- (BOOL)containsPasteboardTypes:(id)types inItemSet:(id)itemSet;	// 0x2f4dd425
- (id)dataForPasteboardType:(id)pasteboardType;	// 0x2f6f8625
- (id)dataForPasteboardType:(id)pasteboardType inItemSet:(id)itemSet;	// 0x2f6f917d
- (void)dealloc;	// 0x2f6f8549
// declared property getter: - (id)image;	// 0x2f6fa39d
// declared property getter: - (id)images;	// 0x2f6fa6f5
// declared property getter: - (BOOL)isPersistent;	// 0x2f6f9981
- (id)itemSetWithPasteboardTypes:(id)pasteboardTypes;	// 0x2f6f8fe9
// declared property getter: - (id)items;	// 0x2f6f99c5
// declared property getter: - (id)name;	// 0x2f6f85a5
// declared property getter: - (int)numberOfItems;	// 0x2f4dd285
- (id)pasteboardTypes;	// 0x2f6f85dd
- (id)pasteboardTypesForItemSet:(id)itemSet;	// 0x2f6f8ef5
// declared property setter: - (void)setColor:(id)color;	// 0x2f6fa8cd
// declared property setter: - (void)setColors:(id)colors;	// 0x2f6faa0d
- (void)setData:(id)data forPasteboardType:(id)pasteboardType;	// 0x2f6f8e41
// declared property setter: - (void)setImage:(id)image;	// 0x2f6fa289
// declared property setter: - (void)setImages:(id)images;	// 0x2f6fa4ed
// declared property setter: - (void)setItems:(id)items;	// 0x2f6f9b79
// declared property setter: - (void)setPersistent:(BOOL)persistent;	// 0x2f6f999d
// declared property setter: - (void)setString:(id)string;	// 0x2f6f9c09
// declared property setter: - (void)setStrings:(id)strings;	// 0x2f6f9d1d
// declared property setter: - (void)setURL:(id)url;	// 0x2f6f9f49
// declared property setter: - (void)setURLs:(id)urls;	// 0x2f6fa05d
- (void)setValue:(id)value forPasteboardType:(id)pasteboardType;	// 0x2f6f8a61
// declared property getter: - (id)string;	// 0x2f6f9ce1
// declared property getter: - (id)strings;	// 0x2f6f9f09
- (id)valueForPasteboardType:(id)pasteboardType;	// 0x2f6f8695
- (id)valuesForPasteboardType:(id)pasteboardType inItemSet:(id)itemSet;	// 0x2f6f9081
@end

