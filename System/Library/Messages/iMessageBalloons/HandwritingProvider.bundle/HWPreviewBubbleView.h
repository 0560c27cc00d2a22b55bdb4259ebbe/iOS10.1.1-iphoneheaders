/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <UIKit/UIView.h>
#import <HandwritingProvider/DKInkViewRenderDelegate.h>

@class DKInkView, UIImageView, NSString;

@interface HWPreviewBubbleView : UIView <DKInkViewRenderDelegate> {

	DKInkView* _inkView;
	UIImageView* _imageView;
	long long _lastPointCount;

}

@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long lastPointCount;                //@synthesize lastPointCount=_lastPointCount - In the implementation block
@property (assign,nonatomic,__weak) DKInkView * inkView;              //@synthesize inkView=_inkView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInkView:(DKInkView *)arg1 ;
-(void)setLastPointCount:(long long)arg1 ;
-(DKInkView *)inkView;
-(long long)lastPointCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)updateImage;
-(void)updatePreview;
-(void)updateVisibility;
-(void)inkViewDidRender:(id)arg1 ;
@end

