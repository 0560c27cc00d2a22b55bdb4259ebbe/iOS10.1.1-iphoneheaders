/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UILegibilitySettings, NSString, UIImage;


@protocol SBLockScreenModalView <NSObject>
@property (assign,nonatomic,__weak) id<SBLockScreenModalViewDelegate> delegate; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * primaryActionButtonText; 
@property (nonatomic,copy) NSString * secondaryActionButtonText; 
@property (nonatomic,copy) NSString * footerText; 
@property (nonatomic,retain) UIImage * image; 
@required
-(NSString *)primaryActionButtonText;
-(void)setPrimaryActionButtonText:(id)arg1;
-(NSString *)secondaryActionButtonText;
-(void)setSecondaryActionButtonText:(id)arg1;
-(void)setImage:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<SBLockScreenModalViewDelegate>)delegate;
-(UIImage *)image;
-(void)setLegibilitySettings:(id)arg1;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setTitleText:(id)arg1;
-(NSString *)titleText;
-(void)setSubtitleText:(id)arg1;
-(NSString *)footerText;
-(void)setFooterText:(id)arg1;
-(NSString *)subtitleText;

@end

