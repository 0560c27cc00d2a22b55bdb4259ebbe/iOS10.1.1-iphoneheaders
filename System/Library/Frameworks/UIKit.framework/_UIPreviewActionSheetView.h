/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol _UIPreviewActionSheetViewDelegate;
@class NSArray, NSString, UILongPressGestureRecognizer;

@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	id<_UIPreviewActionSheetViewDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSArray* _actions;
	NSString* _title;
	UILongPressGestureRecognizer* _captureTouchesRecognizer;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) NSArray * actions;                                                    //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * captureTouchesRecognizer;              //@synthesize captureTouchesRecognizer=_captureTouchesRecognizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewActionSheetViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setDelegate:(id<_UIPreviewActionSheetViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<_UIPreviewActionSheetViewDelegate>)delegate;
-(NSArray *)actions;
-(NSString *)title;
-(void)_setupViewHierarchy;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 items:(id)arg3 contentInsets:(UIEdgeInsets)arg4 ;
-(void)_performActionForPreviewAction:(id)arg1 interfaceAction:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(id)completionHandler;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(UILongPressGestureRecognizer *)captureTouchesRecognizer;
-(void)setCaptureTouchesRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

