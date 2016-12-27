/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class NSAttributedString;

@interface CMKShutterIndicatorView : UIView {

	NSAttributedString* __indicatorText;

}

@property (nonatomic,readonly) NSAttributedString * _indicatorText;              //@synthesize _indicatorText=__indicatorText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_commonCMKShutterIndicatorViewInitialization;
-(NSAttributedString *)_indicatorText;
@end

