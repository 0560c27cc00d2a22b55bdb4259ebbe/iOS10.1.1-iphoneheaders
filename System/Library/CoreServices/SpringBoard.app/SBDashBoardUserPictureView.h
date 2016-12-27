/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDashBoardViewBase.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, CNContact, _UILegibilityView, NSString;

@interface SBDashBoardUserPictureView : SBDashBoardViewBase <SBUILegibility> {

	CNContact* _contact;
	_UILegibilityView* _monogramLegibilityView;
	double _legibilityStrength;
	_UILegibilitySettings* _legibilitySettings;
	double _diameter;

}

@property (nonatomic,copy) CNContact * contact;                                       //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) double diameter;                                         //@synthesize diameter=_diameter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                         //@synthesize legibilityStrength=_legibilityStrength - In the implementation block
+(id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2 ;
-(id)presentationRegions;
-(void)_regenerateImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
@end

