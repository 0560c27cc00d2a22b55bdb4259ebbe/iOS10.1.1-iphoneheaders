/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ADAdActionPublicAttributes : NSObject <NSSecureCoding> {

	BOOL _actionLeavesApplication;
	BOOL _actionViewControllerHidesStatusBar;
	int _action;
	int _transitionType;
	unsigned long long _actionViewControllerPresentationOrientationMask;
	long long _modalPresentationStyle;
	NSString* _actionURLString;

}

@property (assign,nonatomic) BOOL actionLeavesApplication;                                                    //@synthesize actionLeavesApplication=_actionLeavesApplication - In the implementation block
@property (assign,nonatomic) int action;                                                                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long actionViewControllerPresentationOrientationMask;              //@synthesize actionViewControllerPresentationOrientationMask=_actionViewControllerPresentationOrientationMask - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerHidesStatusBar;                                         //@synthesize actionViewControllerHidesStatusBar=_actionViewControllerHidesStatusBar - In the implementation block
@property (assign,nonatomic) long long modalPresentationStyle;                                                //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) int transitionType;                                                              //@synthesize transitionType=_transitionType - In the implementation block
@property (nonatomic,copy) NSString * actionURLString;                                                        //@synthesize actionURLString=_actionURLString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)action;
-(long long)modalPresentationStyle;
-(void)setAction:(int)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)_actionDescription;
-(BOOL)actionLeavesApplication;
-(NSString *)actionURLString;
-(unsigned long long)actionViewControllerPresentationOrientationMask;
-(BOOL)actionViewControllerHidesStatusBar;
-(void)setActionLeavesApplication:(BOOL)arg1 ;
-(void)setActionViewControllerPresentationOrientationMask:(unsigned long long)arg1 ;
-(void)setActionViewControllerHidesStatusBar:(BOOL)arg1 ;
-(void)setActionURLString:(NSString *)arg1 ;
-(int)transitionType;
-(void)setTransitionType:(int)arg1 ;
@end

