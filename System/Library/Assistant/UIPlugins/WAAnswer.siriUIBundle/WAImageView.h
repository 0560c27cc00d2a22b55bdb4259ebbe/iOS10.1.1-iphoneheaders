/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/WAAnswer.siriUIBundle/WAAnswer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WAAnswer/WAAnswer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UIImageView, UIImage;

@interface WAImageView : SiriUIContentCollectionViewCell {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image; 
-(CGSize)_imageSizeForWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(CGSize)_imageSize;
@end

