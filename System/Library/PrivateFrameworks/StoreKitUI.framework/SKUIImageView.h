/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UITapGestureRecognizer, SKUIImagePlaceholder, CAShapeLayer, UIImage;

@interface SKUIImageView : UIImageView {

	UITapGestureRecognizer* _tapRecognizer;
	CGSize _lastLayoutSize;
	SKUIImagePlaceholder* _placeholder;
	/*^block*/id _cornerPathBlock;
	CGSize _imageSize;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (nonatomic,copy) id cornerPathBlock;                                      //@synthesize cornerPathBlock=_cornerPathBlock - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                      //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapRecognizer; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIImagePlaceholder * placeholder;                    //@synthesize placeholder=_placeholder - In the implementation block
+(Class)layerClass;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContents:(id)arg1 ;
-(CGSize)imageSize;
-(void)setPlaceholder:(SKUIImagePlaceholder *)arg1 ;
-(SKUIImagePlaceholder *)placeholder;
-(UITapGestureRecognizer *)tapRecognizer;
-(id)cornerPathBlock;
-(void)setCornerPathBlock:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end

