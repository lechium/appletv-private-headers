/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "CMMapperRootArchiver.h"


__attribute__((visibility("hidden")))
@interface CMMapper : NSObject <CMMapperRootArchiver> {
@private
	CMMapper *mParent;	// 4 = 0x4
}
@property(retain) id parent;	// G=0x318ec3bd; S=0x31aa4b71; converted property
- (id)initWithParent:(id)parent;	// 0x318e6f45
- (void)addAttribute:(id)attribute toNode:(id)node value:(id)value;	// 0x318e778d
- (void)addStyle:(id)style withName:(id)name;	// 0x31aa4b91
- (void)addStyleUsingGlobalCacheTo:(id)to style:(id)style;	// 0x318f01d1
- (void)addStyleUsingGlobalCacheTo:(id)to style:(id)style embedStyle:(BOOL)style3;	// 0x318f4431
- (id)archiver;	// 0x318ec349
- (void)finishMappingWithState:(id)state;	// 0x31aa4b8d
- (void)mapAt:(id)at withState:(id)state;	// 0x31aa4b81
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x31aa4b89
- (void)mapStylesheetAt:(id)at stylesheet:(id)stylesheet;	// 0x318ee1d5
// converted property getter: - (id)parent;	// 0x318ec3bd
- (id)root;	// 0x318ec395
// converted property setter: - (void)setParent:(id)parent;	// 0x31aa4b71
- (void)startMappingWithState:(id)state;	// 0x31aa4b85
@end

