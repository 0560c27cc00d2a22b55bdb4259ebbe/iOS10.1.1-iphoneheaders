/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <MapsWidget/MWWidgetProviding.h>

@protocol MWActionRequiredViewControllerDelegate;
@class UIView, UITapGestureRecognizer, NSString;

@interface MWActionRequiredViewController : UIViewController <MWWidgetProviding> {

	unsigned long long _actionType;
	id<MWActionRequiredViewControllerDelegate> _delegate;
	UIView* _actionView;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) UIView * actionView;                                                     //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                  //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long actionType;                                           //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic,__weak) id<MWActionRequiredViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long largestAvailableDisplayMode; 
-(void)_askToEnableLocationServices:(id)arg1 ;
-(void)_tappedIntro:(id)arg1 ;
-(void)setActionView:(UIView *)arg1 ;
-(void)setDelegate:(id<MWActionRequiredViewControllerDelegate>)arg1 ;
-(id<MWActionRequiredViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)setActionType:(unsigned long long)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(unsigned long long)actionType;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_updateUI;
-(long long)largestAvailableDisplayMode;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
-(UIView *)actionView;
@end

