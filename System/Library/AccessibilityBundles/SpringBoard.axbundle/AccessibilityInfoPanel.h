/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class UIViewController, AccessibilityInfoPanelWindow, UIView, UILabel, NSString;

@interface AccessibilityInfoPanel : NSObject {

	UIViewController* _accessibilityInfoPanelController;
	AccessibilityInfoPanelWindow* _accessibilityInfoPanelWindow;
	UIView* _accessibilityInfoPanelView;
	UIView* _rootView;
	UILabel* _labelView;
	UIView* _backgroundView;
	NSString* _title;
	BOOL _displayOnBottomEdge;

}

@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL displayOnBottomEdge; 
-(BOOL)displayOnBottomEdge;
-(void)setDisplayOnBottomEdge:(BOOL)arg1 ;
-(id)_accessibilityInfoPanelView;
-(id)_accessibilityInfoPanelWindow;
-(CGRect)_displayFrame;
-(id)_accessibilityInfoPanelController;
-(id)init;
-(void)hide;
-(void)show;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 ;
-(void)fadeOut;
-(id)_rootView;
-(void)_layoutSubviews;
-(void)_setup;
@end

