/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol UIWebRotatingNodePopoverDelegate;
@class DOMNode, UIPopoverController, NSString;

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {

	BOOL _isRotating;
	DOMNode* _node;
	CGPoint _presentationPoint;
	UIPopoverController* _popoverController;
	id<UIWebRotatingNodePopoverDelegate> _dismissDelegate;

}

@property (nonatomic,retain) DOMNode * node;                                                    //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGPoint presentationPoint;                                         //@synthesize presentationPoint=_presentationPoint - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController;                           //@synthesize popoverController=_popoverController - In the implementation block
@property (assign,nonatomic) id<UIWebRotatingNodePopoverDelegate> dismissDelegate;              //@synthesize dismissDelegate=_dismissDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(DOMNode *)node;
-(id)initWithDOMNode:(id)arg1 ;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(UIPopoverController *)popoverController;
-(void)setNode:(DOMNode *)arg1 ;
-(void)setPresentationPoint:(CGPoint)arg1 ;
-(unsigned long long)popoverArrowDirections;
-(CGPoint)presentationPoint;
-(id<UIWebRotatingNodePopoverDelegate>)dismissDelegate;
-(void)setDismissDelegate:(id<UIWebRotatingNodePopoverDelegate>)arg1 ;
@end

