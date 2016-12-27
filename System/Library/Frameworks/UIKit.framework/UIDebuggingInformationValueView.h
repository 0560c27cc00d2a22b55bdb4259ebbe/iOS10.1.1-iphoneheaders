/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol UIDebuggingInformationValueViewObserver;
@class UIDebuggingInformationValue, UIView;

@interface UIDebuggingInformationValueView : UIView {

	id<UIDebuggingInformationValueViewObserver> _valueObserver;
	UIDebuggingInformationValue* _value;
	UIView* _contentView;

}

@property (nonatomic,retain) UIDebuggingInformationValue * value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) id<UIDebuggingInformationValueViewObserver> valueObserver;              //@synthesize valueObserver=_valueObserver - In the implementation block
+(Class)_viewClassForValueType:(long long)arg1 ;
+(id)viewWithValue:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(UIDebuggingInformationValue *)value;
-(void)setValue:(UIDebuggingInformationValue *)arg1 ;
-(void)_prepareConstraints;
-(void)addViewsToContentView;
-(id<UIDebuggingInformationValueViewObserver>)valueObserver;
-(id)initWithValue:(id)arg1 ;
-(void)valueChangedToValue:(id)arg1 ;
-(void)setValueObserver:(id<UIDebuggingInformationValueViewObserver>)arg1 ;
@end

