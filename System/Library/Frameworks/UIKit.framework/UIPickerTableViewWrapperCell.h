/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPickerTableViewCell.h>

@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {

	UIView* _wrappedView;
	UIView* _wrappedViewContainer;
	CGSize _wrappedViewSize;

}

@property (nonatomic,retain) UIView * wrappedView; 
-(UIView *)wrappedView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setWrappedView:(UIView *)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(void)_updateWrappedViewFrame;
-(void)_updateWrappedView;
-(id)_anyDateLabel;
@end

