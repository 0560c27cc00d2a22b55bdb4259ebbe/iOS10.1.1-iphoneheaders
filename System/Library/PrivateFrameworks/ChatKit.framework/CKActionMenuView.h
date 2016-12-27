/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, CKActionMenuController, UIVisualEffectView, UIBlurEffect;

@interface CKActionMenuView : UIView {

	BOOL _collapsed;
	BOOL _touchInside;
	NSArray* _actionMenuItems;
	unsigned long long _defaultActionIndex;
	CKActionMenuController* _actionMenuController;
	NSArray* _presentationActionMenuItems;
	unsigned long long _presentationDefaultActionIndex;
	UIVisualEffectView* _blurView;
	UIBlurEffect* _blurEffect;
	CGPoint _presentationTargetPosition;
	CGRect _presentationTargetBounds;

}

@property (nonatomic,copy) NSArray * actionMenuItems;                                           //@synthesize actionMenuItems=_actionMenuItems - In the implementation block
@property (assign,nonatomic) unsigned long long defaultActionIndex;                             //@synthesize defaultActionIndex=_defaultActionIndex - In the implementation block
@property (nonatomic,copy) NSArray * presentationActionMenuItems;                               //@synthesize presentationActionMenuItems=_presentationActionMenuItems - In the implementation block
@property (assign,nonatomic) unsigned long long presentationDefaultActionIndex;                 //@synthesize presentationDefaultActionIndex=_presentationDefaultActionIndex - In the implementation block
@property (assign,nonatomic) CGRect presentationTargetBounds;                                   //@synthesize presentationTargetBounds=_presentationTargetBounds - In the implementation block
@property (assign,nonatomic) CGPoint presentationTargetPosition;                                //@synthesize presentationTargetPosition=_presentationTargetPosition - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                     //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIBlurEffect * blurEffect;                                         //@synthesize blurEffect=_blurEffect - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                 //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isTouchInside,nonatomic) BOOL touchInside;                             //@synthesize touchInside=_touchInside - In the implementation block
@property (assign,nonatomic,__weak) CKActionMenuController * actionMenuController;              //@synthesize actionMenuController=_actionMenuController - In the implementation block
+(void)collapseAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)layoutSubviews;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isTouchInside;
-(BOOL)isCollapsed;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(NSArray *)actionMenuItems;
-(void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)actionMenuGestureRecognized:(id)arg1 ;
-(void)setActionMenuController:(CKActionMenuController *)arg1 ;
-(unsigned long long)defaultActionIndex;
-(NSArray *)presentationActionMenuItems;
-(void)setBlurEffect:(UIBlurEffect *)arg1 ;
-(void)setPresentationTargetBounds:(CGRect)arg1 ;
-(void)setPresentationActionMenuItems:(NSArray *)arg1 ;
-(void)setPresentationDefaultActionIndex:(unsigned long long)arg1 ;
-(void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActionMenuItems:(NSArray *)arg1 ;
-(void)setDefaultActionIndex:(unsigned long long)arg1 ;
-(CGRect)presentationTargetBounds;
-(CGPoint)presentationTargetPosition;
-(void)configureForPresentationAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)setPresentationTargetPosition:(CGPoint)arg1 ;
-(void)setTouchInside:(BOOL)arg1 ;
-(id)actionMenuItemAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(CKActionMenuController *)actionMenuController;
-(UIBlurEffect *)blurEffect;
-(void)presentActionMenuViewFromPoint:(CGPoint)arg1 inRect:(CGRect)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissActionMenuViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)presentationDefaultActionIndex;
@end

