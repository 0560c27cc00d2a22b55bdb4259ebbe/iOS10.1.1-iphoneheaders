/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSString;

@interface CKBalloonImageView : UIView {

	BOOL _imageHidden;
	UIImage* _image;
	NSString* _stickerAccessibilityDescription;

}

@property (nonatomic,retain) UIImage * image;                                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL imageHidden;                                        //@synthesize imageHidden=_imageHidden - In the implementation block
@property (nonatomic,retain) NSString * stickerAccessibilityDescription;              //@synthesize stickerAccessibilityDescription=_stickerAccessibilityDescription - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(void)setImageHidden:(BOOL)arg1 ;
-(void)setStickerAccessibilityDescription:(NSString *)arg1 ;
-(BOOL)imageHidden;
-(NSString *)stickerAccessibilityDescription;
@end

