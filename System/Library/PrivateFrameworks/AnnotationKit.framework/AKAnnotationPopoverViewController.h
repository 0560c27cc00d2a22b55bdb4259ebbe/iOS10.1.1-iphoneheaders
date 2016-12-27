/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/AKPopoverAnnotationEditor.h>

@protocol AKAnnotationEditorDelegate;
@class AKTouchOutsideViewGestureRecognizer, AKAnnotation, AKPageController, AKAnnotationTheme, UIView, NSString, IMTheme;

@interface AKAnnotationPopoverViewController : UIViewController <UIGestureRecognizerDelegate, AKPopoverAnnotationEditor> {

	AKTouchOutsideViewGestureRecognizer* mHideOnTouchGestureRecognizer;
	AKAnnotation* mAnnotation;
	AKPageController* mAnnotationPageController;
	AKAnnotationTheme* mAnnotationTheme;
	int mPosition;
	id mObserver;
	BOOL _editsOnLaunch;
	UIView* _presentationView;
	id<AKAnnotationEditorDelegate> _delegate;
	CGRect _presentationRect;

}

@property (nonatomic,retain) UIView * presentationView;                                   //@synthesize presentationView=_presentationView - In the implementation block
@property (assign,nonatomic) CGRect presentationRect;                                     //@synthesize presentationRect=_presentationRect - In the implementation block
@property (assign,nonatomic,__weak) id<AKAnnotationEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AKAnnotation * annotation; 
@property (nonatomic,retain) AKPageController * annotationPageController; 
@property (nonatomic,retain) AKAnnotationTheme * annotationTheme; 
@property (assign,nonatomic) BOOL editsOnLaunch;                                          //@synthesize editsOnLaunch=_editsOnLaunch - In the implementation block
@property (nonatomic,retain) IMTheme * theme; 
-(id)init;
-(void)hide;
-(void)setDelegate:(id<AKAnnotationEditorDelegate>)arg1 ;
-(void)dealloc;
-(id<AKAnnotationEditorDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)viewDidLoad;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(void)releaseOutlets;
-(AKAnnotationTheme *)annotationTheme;
-(void)willShow;
-(void)didShow;
-(void)presentFromRect:(CGRect)arg1 view:(id)arg2 ;
-(void)setAnnotationTheme:(AKAnnotationTheme *)arg1 ;
-(BOOL)canPresentInPosition:(int)arg1 ;
-(void)setAnnotationPageController:(AKPageController *)arg1 ;
-(CGRect)p_containerFrameForView:(id)arg1 ;
-(void)setPresentationView:(UIView *)arg1 ;
-(void)setPresentationRect:(CGRect)arg1 ;
-(void)popInAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)willHide;
-(void)hideAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)didHide;
-(AKPageController *)annotationPageController;
-(BOOL)editsOnLaunch;
-(void)setEditsOnLaunch:(BOOL)arg1 ;
-(int)willPresentInPosition:(CGRect)arg1 view:(id)arg2 ;
-(CGRect)presentationRect;
-(UIView *)presentationView;
@end

