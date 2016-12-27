/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MKPlaceCardHeaderViewController, NSString;

@interface _MKPlaceActionButtonController : NSObject {

	MKPlaceCardHeaderViewController* _headerViewController;
	NSString* _buttonTitle;
	NSString* _buttonSubTitle;
	/*^block*/id _buttonSelectedBlock;

}

@property (assign,nonatomic,__weak) MKPlaceCardHeaderViewController * headerViewController;              //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,readonly) NSString * buttonTitle;                                                   //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,readonly) NSString * buttonSubTitle;                                                //@synthesize buttonSubTitle=_buttonSubTitle - In the implementation block
@property (nonatomic,readonly) id buttonSelectedBlock;                                                   //@synthesize buttonSelectedBlock=_buttonSelectedBlock - In the implementation block
+(id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
-(NSString *)buttonTitle;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
-(void)buttonTextChanged;
-(NSString *)buttonSubTitle;
-(id)buttonSelectedBlock;
-(MKPlaceCardHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(MKPlaceCardHeaderViewController *)arg1 ;
@end
