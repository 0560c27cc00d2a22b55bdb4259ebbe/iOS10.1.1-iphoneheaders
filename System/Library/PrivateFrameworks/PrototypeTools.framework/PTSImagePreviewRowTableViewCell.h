/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowTableViewCell.h>

@class UIImageView, UIView;

@interface PTSImagePreviewRowTableViewCell : PTSRowTableViewCell {

	UIImageView* _imageViewOnLight;
	UIImageView* _imageViewOnDark;
	UIView* _lightBackground;
	UIView* _darkBackground;

}
+(double)cellHeightForRow:(id)arg1 ;
+(void)_getCellHeight:(double*)arg1 leftFrame:(CGRect*)arg2 rightFrame:(CGRect*)arg3 forImage:(id)arg4 inBounds:(CGRect)arg5 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateDisplayedValue;
@end

