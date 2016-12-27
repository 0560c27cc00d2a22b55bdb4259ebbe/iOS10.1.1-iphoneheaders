/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCommonCore/IMCommonCore-Structs.h>
@class UITraitCollection, NSDictionary, UIView;

@interface IMPlistConfigurationEnvironment : NSObject {

	CGSize _viewSize;
	CGSize _screenSize;
	long long _interfaceOrientation;
	UITraitCollection* _trait;
	NSDictionary* _additionalInfo;
	UIView* _view;

}

@property (readonly) CGSize screenSize; 
@property (nonatomic,copy) NSDictionary * additionalInfo;              //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (readonly) double statusBarHeight; 
@property (readonly) CGSize size; 
@property (assign,nonatomic,__weak) UIView * view;                     //@synthesize view=_view - In the implementation block
@property (readonly) BOOL isCompactWidth; 
@property (readonly) BOOL isCompactHeight; 
@property (readonly) BOOL isLandscape; 
@property (readonly) BOOL isPortrait; 
-(void)freeze:(id)arg1 ;
-(BOOL)isCompactHeight;
-(id)_targetViewTraitEnvironment;
-(id)valueForKey:(id)arg1 ;
-(CGSize)size;
-(UIView *)view;
-(double)statusBarHeight;
-(void)setView:(UIView *)arg1 ;
-(id)hardwareModel;
-(CGSize)screenSize;
-(id)targetView;
-(BOOL)isCompactWidth;
-(BOOL)isPortrait;
-(BOOL)isLandscape;
-(NSDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSDictionary *)arg1 ;
@end

