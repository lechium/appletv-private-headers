/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, UIView, NSArray;

@interface UITableViewSection : NSObject <NSCoding> {
@private
	NSString *_headerTitle;	// 4 = 0x4
	UIView *_headerView;	// 8 = 0x8
	NSString *_footerTitle;	// 12 = 0xc
	UIView *_footerView;	// 16 = 0x10
	NSArray *_rows;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *footerTitle;	// G=0x359e3855; S=0x359e3865; @synthesize=_footerTitle
@property(retain, nonatomic) UIView *footerView;	// G=0x359e3889; S=0x359e3899; @synthesize=_footerView
@property(copy, nonatomic) NSString *headerTitle;	// G=0x359e37ed; S=0x359e37fd; @synthesize=_headerTitle
@property(retain, nonatomic) UIView *headerView;	// G=0x359e3821; S=0x359e3831; @synthesize=_headerView
@property(copy, nonatomic) NSArray *rows;	// G=0x359e38bd; S=0x359e38cd; @synthesize=_rows
+ (id)sectionWithRows:(id)rows;	// 0x359e34ed
- (id)initWithCoder:(id)coder;	// 0x359e3551
- (void)dealloc;	// 0x359e3751
- (void)encodeWithCoder:(id)coder;	// 0x359e366d
// declared property getter: - (id)footerTitle;	// 0x359e3855
// declared property getter: - (id)footerView;	// 0x359e3889
// declared property getter: - (id)headerTitle;	// 0x359e37ed
// declared property getter: - (id)headerView;	// 0x359e3821
// declared property getter: - (id)rows;	// 0x359e38bd
// declared property setter: - (void)setFooterTitle:(id)title;	// 0x359e3865
// declared property setter: - (void)setFooterView:(id)view;	// 0x359e3899
// declared property setter: - (void)setHeaderTitle:(id)title;	// 0x359e37fd
// declared property setter: - (void)setHeaderView:(id)view;	// 0x359e3831
// declared property setter: - (void)setRows:(id)rows;	// 0x359e38cd
@end

