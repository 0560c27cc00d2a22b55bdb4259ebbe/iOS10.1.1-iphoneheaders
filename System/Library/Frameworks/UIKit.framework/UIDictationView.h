/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>

@protocol UIDictationViewDisplayDelegate;
@class UIKeyboardDicationBackground, UIButton, SUICFlamesView, UIDictationMeterView, NSString;

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {

	UIKeyboardDicationBackground* _background;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	UIButton* _waveTapEndpointButton;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
	SUICFlamesView* _flamesView;
	UIDictationMeterView* _meterView;
	id<UIDictationViewDisplayDelegate> _displayDelegate;

}

@property (assign,nonatomic) id<UIDictationViewDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(CGSize)layoutSize;
+(Class)dictationViewClass;
+(CGSize)viewSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)dealloc;
-(CGPoint)contentOffset;
-(void)setState:(int)arg1 ;
-(BOOL)visible;
-(void)keyboardDidShow:(id)arg1 ;
-(void)setDisplayDelegate:(id<UIDictationViewDisplayDelegate>)arg1 ;
-(void)applicationWillResignActive;
-(void)highlightEndpointButton;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(BOOL)isShowing;
-(void)returnToKeyboard;
-(BOOL)drawsOwnBackground;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(id)endpointButton;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
-(CGPoint)backgroundOffset;
-(void)endpointButtonPressed;
-(id<UIDictationViewDisplayDelegate>)displayDelegate;
@end
