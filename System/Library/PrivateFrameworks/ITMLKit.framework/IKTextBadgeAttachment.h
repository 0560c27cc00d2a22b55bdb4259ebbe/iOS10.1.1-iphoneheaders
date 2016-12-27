/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment {

	IKBadgeElement* _badge;
	IKColor* _tintColor;

}

@property (nonatomic,retain,readonly) IKBadgeElement * badge;              //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) IKColor * tintColor;                          //@synthesize tintColor=_tintColor - In the implementation block
-(IKColor *)tintColor;
-(void)setTintColor:(IKColor *)arg1 ;
-(IKBadgeElement *)badge;
-(id)initWithBadgeElement:(id)arg1 ;
@end
