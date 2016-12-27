/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXFeatureView.h>

@class UILabel, UIView;

@interface GAXFeatureView_Phone : GAXFeatureView {

	UILabel* _detailTextLabel;
	UIView* _textContainerView;

}

@property (nonatomic,retain) UIView * textContainerView;              //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;               //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
-(CGRect)popoverOriginRect;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 icon:(id)arg3 text:(id)arg4 textOffset:(UIOffset)arg5 detailText:(id)arg6 detailTextOffset:(UIOffset)arg7 initialState:(BOOL)arg8 styleProvider:(id)arg9 ;
-(void)_constructViewHierarchyWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(BOOL)arg6 styleProvider:(id)arg7 ;
-(void)_applyAutolayoutConstraintsWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(BOOL)arg6 styleProvider:(id)arg7 ;
-(void)dealloc;
-(UILabel *)detailTextLabel;
-(BOOL)accessibilityActivate;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(UIView *)textContainerView;
-(void)setTextContainerView:(UIView *)arg1 ;
@end

