/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, CAShapeLayer, NSString;

@interface _MKEnvironmentLabel : UIView {

	UILabel* _label;
	CAShapeLayer* _roundedCorner;

}

@property (nonatomic,copy) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
@end

