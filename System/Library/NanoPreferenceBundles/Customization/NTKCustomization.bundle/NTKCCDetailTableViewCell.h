/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView;

@interface NTKCCDetailTableViewCell : UITableViewCell {

	BOOL _showsSeparator;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                 //@synthesize showsSeparator=_showsSeparator - In the implementation block
+(id)reuseIdentifier;
+(id)titleFont;
-(BOOL)showsSeparator;
-(BOOL)_visibleAtPoint:(CGPoint)arg1 ;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(void)_fontSizeDidChange;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)rowHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
@end

