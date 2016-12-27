/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class UIView, UIActivityIndicatorView, UILabel, RUIObjectModel, UIColor;

@interface RUISpinnerView : RUIElement {

	UIView* _view;
	UIActivityIndicatorView* _spinner;
	UILabel* _label;
	RUIObjectModel* _objectModel;
	UIColor* _spinnerColor;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) UIColor * spinnerColor;                           //@synthesize spinnerColor=_spinnerColor - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)viewDidLayout;
-(RUIObjectModel *)objectModel;
-(UIColor *)spinnerColor;
-(id)spinnerView;
-(void)setSpinnerColor:(UIColor *)arg1 ;
@end

