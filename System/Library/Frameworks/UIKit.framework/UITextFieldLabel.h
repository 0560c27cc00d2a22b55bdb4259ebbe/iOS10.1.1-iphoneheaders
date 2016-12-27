/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@interface UITextFieldLabel : UILabel {

	BOOL _shouldRenderWithoutTextField;

}

@property (assign,nonatomic) BOOL shouldRenderWithoutTextField;              //@synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField - In the implementation block
+(id)defaultFont;
+(id)_defaultAttributes;
-(void)drawTextInRect:(CGRect)arg1 ;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(BOOL)shouldRenderWithoutTextField;
-(void)_defaultDrawTextInRect:(CGRect)arg1 ;
-(void)setShouldRenderWithoutTextField:(BOOL)arg1 ;
@end

