/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKColor, NSString;

@interface SKUIButtonBorderStyle : NSObject <NSCopying> {

	IKColor* _borderColor;
	double _borderWidth;
	UIEdgeInsets _contentInset;
	IKCornerRadii _cornerRadii;
	IKColor* _fillColor;
	NSString* _namedCornerStyle;

}

@property (nonatomic,copy) IKColor * borderColor;                    //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) IKCornerRadii cornerRadii;              //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (nonatomic,copy) IKColor * fillColor;                      //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) NSString * namedCornerStyle;              //@synthesize namedCornerStyle=_namedCornerStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
-(UIEdgeInsets)contentInset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(IKColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(IKColor *)borderColor;
-(void)setCornerRadii:(IKCornerRadii)arg1 ;
-(void)setFillColor:(IKColor *)arg1 ;
-(IKColor *)fillColor;
-(double)borderWidth;
-(BOOL)_usesBackgroundWithAlpha:(id)arg1 ;
-(id)initWithElementStyle:(id)arg1 ;
-(id)bezierPathWithBounds:(CGRect)arg1 ;
-(IKCornerRadii)cornerRadii;
-(NSString *)namedCornerStyle;
-(void)setNamedCornerStyle:(NSString *)arg1 ;
@end

