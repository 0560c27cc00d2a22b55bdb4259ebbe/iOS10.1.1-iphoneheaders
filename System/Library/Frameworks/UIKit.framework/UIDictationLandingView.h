/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBasicAnimationFactory.h>

@class UITextRange, CADisplayLink, NSOperation, NSString;

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {

	UITextRange* _range;
	id _placeholder;
	BOOL _didHaveText;
	BOOL _willInsertResult;
	double _angle;
	double _diameter;
	CADisplayLink* _displayLink;
	double _startTime;
	double _shrinkStartTime;
	BOOL _shrinking;
	NSOperation* _afterShrinkCompletionInvocation;

}

@property (assign,nonatomic) BOOL willInsertResult;                 //@synthesize willInsertResult=_willInsertResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(double)widthForLineHeight:(double)arg1 ;
+(long long)fallbackPlaceholderLength;
+(double)diameterForLineHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(BOOL)delegateWasEmpty;
-(void)updatePosition;
-(void)startLandingIfNecessary;
-(void)stopLandingForError;
-(void)stopLanding;
-(void)setWillInsertResult:(BOOL)arg1 ;
-(double)fadeOutDuration;
-(void)clearRotation;
-(void)rotateBy:(double)arg1 ;
-(void)advanceLanding:(id)arg1 ;
-(void)startDisplayLinkIfNecessary;
-(void)hideCursor;
-(void)showCursor;
-(void)shrinkWithCompletion:(id)arg1 ;
-(void)errorShakeDidFinish;
-(BOOL)hasActivePlaceholder;
-(BOOL)willInsertResult;
@end

