/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIStackView;

@interface WGCollapsingView : UIView {

	CGSize _originalSize;
	CGSize _activeSize;
	UIView* _contentView;
	UIStackView* _stackView;

}

@property (nonatomic,readonly) UIStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIStackView *)stackView;
-(void)_configureStackView;
-(void)updateIntrinsicContentSizeForDisappearance;
-(void)restoreIntrinsicContentSize;
@end

