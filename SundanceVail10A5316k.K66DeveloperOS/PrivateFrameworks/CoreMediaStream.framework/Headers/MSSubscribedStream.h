/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface MSSubscribedStream : NSObject <NSCoding> {
@private
	NSString *_streamID;	// 4 = 0x4
	NSString *_ctag;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *ctag;	// G=0x339a3f2d; S=0x339a3f3d; @synthesize=_ctag
@property(retain, nonatomic) NSString *streamID;	// G=0x339a3ef5; S=0x339a3f05; @synthesize=_streamID
+ (id)subscribedStreamWithStreamID:(id)streamID;	// 0x339a3cb1
- (id)initWithCoder:(id)coder;	// 0x339a3e41
- (id)initWithStreamID:(id)streamID;	// 0x339a3d01
- (void).cxx_destruct;	// 0x339a3f65
// declared property getter: - (id)ctag;	// 0x339a3f2d
- (id)description;	// 0x339a3d69
- (void)encodeWithCoder:(id)coder;	// 0x339a3dd1
// declared property setter: - (void)setCtag:(id)ctag;	// 0x339a3f3d
// declared property setter: - (void)setStreamID:(id)anId;	// 0x339a3f05
// declared property getter: - (id)streamID;	// 0x339a3ef5
@end

