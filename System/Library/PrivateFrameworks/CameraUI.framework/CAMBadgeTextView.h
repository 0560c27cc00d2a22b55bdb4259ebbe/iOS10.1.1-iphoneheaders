/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMBadgeView.h>

@class NSString, NSDictionary;

@interface CAMBadgeTextView : CAMBadgeView {

	NSString* __text;
	NSDictionary* __textAttributes;
	UIEdgeInsets __textInsets;

}

@property (setter=_setText:,nonatomic,copy) NSString * _text;                                      //@synthesize _text=__text - In the implementation block
@property (setter=_setTextAttributes:,nonatomic,copy) NSDictionary * _textAttributes;              //@synthesize _textAttributes=__textAttributes - In the implementation block
@property (assign,setter=_setTextInsets:,nonatomic) UIEdgeInsets _textInsets;                      //@synthesize _textInsets=__textInsets - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)_setText:(id)arg1 ;
-(id)_maskImage;
-(NSString *)_text;
-(CGSize)_textSize;
-(NSDictionary *)_textAttributes;
-(UIEdgeInsets)_textInsets;
-(void)_setTextInsets:(UIEdgeInsets)arg1 ;
-(void)_setTextAttributes:(id)arg1 ;
@end

