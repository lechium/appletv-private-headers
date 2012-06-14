/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface UIDictationPhrase : NSObject {
@private
	NSString *_text;	// 4 = 0x4
	NSArray *_alternativeInterpretations;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *alternativeInterpretations;	// G=0x30310c49; @synthesize=_alternativeInterpretations
@property(readonly, assign, nonatomic) NSString *text;	// G=0x30310c39; @synthesize=_text
+ (id)phraseWithText:(id)text alternativeInterpretations:(id)interpretations;	// 0x30310ac5
- (id)initWithText:(id)text alternativeInterpretations:(id)interpretations;	// 0x303109ed
// declared property getter: - (id)alternativeInterpretations;	// 0x30310c49
- (void)dealloc;	// 0x30310a65
- (id)description;	// 0x30310b11
// declared property getter: - (id)text;	// 0x30310c39
@end
