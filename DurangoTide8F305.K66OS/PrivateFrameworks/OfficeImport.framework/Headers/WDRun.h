/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject {
@private
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x345dcad5
- (id)initWithParagraph:(id)paragraph;	// 0x3448f57d
- (void)clearProperties;	// 0x345dcad1
- (void)dealloc;	// 0x3446d621
- (BOOL)isEmpty;	// 0x345dcacd
- (id)paragraph;	// 0x344645ed
- (int)runType;	// 0x345dcac9
@end
