/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import "DataDetectorsCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DDLocation : NSObject <NSCoding> {
@private
	NSString *_fileName;	// 4 = 0x4
	int _firstLine;	// 8 = 0x8
	int _firstColumn;	// 12 = 0xc
	int _lastLine;	// 16 = 0x10
	int _lastColumn;	// 20 = 0x14
}
@property(readonly, assign) NSString *fileName;	// G=0x3309bb45; @synthesize=_fileName
@property(readonly, assign) int firstColumn;	// G=0x3309bb69; @synthesize=_firstColumn
@property(readonly, assign) int firstLine;	// G=0x3309bb59; @synthesize=_firstLine
@property(readonly, assign) int lastColumn;	// G=0x3309bb89; @synthesize=_lastColumn
@property(readonly, assign) int lastLine;	// G=0x3309bb79; @synthesize=_lastLine
- (id)initWithCoder:(id)coder;	// 0x3309b991
- (id)initWithFileName:(id)fileName firstLine:(int)line firstColumn:(int)column lastLine:(int)line4 lastColumn:(int)column5;	// 0x3309b789
- (id)initWithFileName:(id)fileName position:(DDExpressionPosition)position;	// 0x3309b831
- (void)dealloc;	// 0x3309b865
- (id)description;	// 0x3309ba41
- (void)encodeWithCoder:(id)coder;	// 0x3309b8b1
// declared property getter: - (id)fileName;	// 0x3309bb45
// declared property getter: - (int)firstColumn;	// 0x3309bb69
// declared property getter: - (int)firstLine;	// 0x3309bb59
// declared property getter: - (int)lastColumn;	// 0x3309bb89
// declared property getter: - (int)lastLine;	// 0x3309bb79
- (DDExpressionPosition)position;	// 0x3309badd
@end

