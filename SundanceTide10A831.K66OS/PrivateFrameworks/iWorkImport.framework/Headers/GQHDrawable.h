/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDrawablesGenerator.h"


@interface GQHDrawable : NSObject <GQDrawablesGenerator> {
}
+ (void)aboutToGenerateDrawable:(id)generateDrawable htmlState:(id)state;	// 0x35d11859
+ (int)beginDrawables:(id)drawables;	// 0x35d11821
+ (Class)beginTable:(id)table;	// 0x35d127c1
+ (void)doneGeneratingDrawable:(id)drawable htmlState:(id)state;	// 0x35d11901
+ (int)endDrawables:(id)drawables;	// 0x35d127bd
+ (int)handleDrawable:(id)drawable state:(id)state;	// 0x35d11825
+ (int)handleFloatingDrawable:(id)drawable htmlState:(id)state;	// 0x35d1196d
+ (int)handleInlineDrawable:(id)drawable htmlState:(id)state;	// 0x35d12061
@end
