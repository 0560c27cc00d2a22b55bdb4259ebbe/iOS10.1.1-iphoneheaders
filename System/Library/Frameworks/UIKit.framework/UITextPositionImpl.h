/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextPosition.h>

@class WebVisiblePosition;

@interface UITextPositionImpl : UITextPosition {

	WebVisiblePosition* _webVisiblePosition;

}

@property (nonatomic,retain) WebVisiblePosition * webVisiblePosition;              //@synthesize webVisiblePosition=_webVisiblePosition - In the implementation block
+(id)wrapWebVisiblePosition:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(WebVisiblePosition *)webVisiblePosition;
-(void)setWebVisiblePosition:(WebVisiblePosition *)arg1 ;
@end
